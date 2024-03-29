/*
 * Copyright 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.ece420.lab3;

import android.Manifest;
import android.app.Activity;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.media.AudioFormat;
import android.media.AudioManager;
import android.media.AudioRecord;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.support.v4.app.ActivityCompat;
import android.text.SpannableString;
import android.text.style.BackgroundColorSpan;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.WindowManager;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Timer;
import java.util.TimerTask;



public class MainActivity extends Activity
        implements ActivityCompat.OnRequestPermissionsResultCallback {

    // Static Values
    private static final int AUDIO_ECHO_REQUEST = 0;
    private static final int FRAME_SIZE = 1024;
    private static final int BITMAP_HEIGHT = 500;


    //UI
    TextView instrument_1, instrument_2, instrument_3,instrument_4, instrument_5, instrument_6;
    TextView conf_1, conf_2, conf_3, conf_4, conf_5, conf_6;
    int timer_ = 0;
    double conf_1_val,conf_2_val,conf_3_val,conf_4_val,conf_5_val,conf_6_val;
    String inputnum;
    Spinner s;
    Boolean Started;
    Button start_but;
    Button end_but;
    //UI

    /*
     * Loading our Libs
     */
    static {
        System.loadLibrary("echo");
    }

    // UI Variables
    String nativeSampleRate;
    String nativeSampleBufSize;
    boolean supportRecording;
    Boolean isPlaying = false;

    /*
     * jni function implementations...
     */
    public static native void createSLEngine(int rate, int framesPerBuf);

    public static native void deleteSLEngine();

    public static native boolean createSLBufferQueueAudioPlayer();

    public static native void deleteSLBufferQueueAudioPlayer();

    public static native boolean createAudioRecorder();

    public static native void deleteAudioRecorder();

    public static native void startPlay();

    public static native void stopPlay();

    public static native void getFftBuffer(FloatBuffer buffer);

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        setContentView(R.layout.activity_main);
        super.setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_PORTRAIT);

        // Google NDK Stuff
        queryNativeAudioParameters();
        // initialize native audio system
        updateNativeAudioUI();
        if (supportRecording) {
            // Change audio sampling rate and frame size
            createSLEngine(Integer.parseInt(nativeSampleRate), FRAME_SIZE);
        }

        initializeStftBackgroundThread(10);

        // Copied from OnClick handler
        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.RECORD_AUDIO) !=
                PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(
                    this,
                    new String[]{Manifest.permission.RECORD_AUDIO},
                    AUDIO_ECHO_REQUEST);
            return;
        }


        s = (Spinner) findViewById(R.id.spin);
        start_but = (Button) findViewById(R.id.button1);
        end_but = (Button) findViewById(R.id.button2);



        s.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
                Toast.makeText(MainActivity.this, parent.getSelectedItem().toString(), Toast.LENGTH_SHORT).show();
                inputnum = parent.getSelectedItem().toString();
            }

            @Override
            public void onNothingSelected(AdapterView<?> parent) {

            }
        });

        //modified UI
        instrument_1 = (TextView) findViewById(R.id.instrument_1);
        instrument_2 = (TextView) findViewById(R.id.instrument_2);
        instrument_3 = (TextView) findViewById(R.id.instrument_3);
        instrument_4 = (TextView) findViewById(R.id.instrument_4);
        instrument_5 = (TextView) findViewById(R.id.instrument_5);
        instrument_6 = (TextView) findViewById(R.id.instrument_6);
        conf_1 = (TextView) findViewById(R.id.conf_1);
        conf_2 = (TextView) findViewById(R.id.conf_2);
        conf_3 = (TextView) findViewById(R.id.conf_3);
        conf_4 = (TextView) findViewById(R.id.conf_4);
        conf_5 = (TextView) findViewById(R.id.conf_5);
        conf_6 = (TextView) findViewById(R.id.conf_6);


        instrument_1.setText("Guitar");
        instrument_2.setText("Drumset");
        instrument_3.setText("Bass");
        instrument_4.setText("Piano");
        instrument_5.setText("Violin");
        instrument_6.setText("Voiced");


        conf_1.setText(""+conf_1_val);
        conf_2.setText(""+conf_2_val);
        conf_3.setText(""+conf_3_val);
        conf_4.setText(""+conf_4_val);
        conf_5.setText(""+conf_5_val);
        conf_6.setText(""+conf_6_val);





        //modified UI

        startEcho();

    }

    @Override
    protected void onDestroy() {
        if (supportRecording) {
            if (isPlaying) {
                stopPlay();
            }
            deleteSLEngine();
            isPlaying = false;
        }
        super.onDestroy();
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    private void startEcho() {
        if (!supportRecording) {
            return;
        }
        if (!isPlaying) {
            if (!createSLBufferQueueAudioPlayer()) {
                return;
            }
            if (!createAudioRecorder()) {
                deleteSLBufferQueueAudioPlayer();
                return;
            }
            startPlay();   // this must include startRecording()
        } else {
            stopPlay();  //this must include stopRecording()
            updateNativeAudioUI();
            deleteAudioRecorder();
            deleteSLBufferQueueAudioPlayer();
        }
        isPlaying = !isPlaying;
    }

    public void onEchoClick(View view) {
        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.RECORD_AUDIO) !=
                PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(
                    this,
                    new String[]{Manifest.permission.RECORD_AUDIO},
                    AUDIO_ECHO_REQUEST);
            return;
        }
        startEcho();
    }

    public void getLowLatencyParameters(View view) {
        updateNativeAudioUI();
        return;
    }

    private void queryNativeAudioParameters() {
        AudioManager myAudioMgr = (AudioManager) getSystemService(Context.AUDIO_SERVICE);
        nativeSampleRate = myAudioMgr.getProperty(AudioManager.PROPERTY_OUTPUT_SAMPLE_RATE);
        nativeSampleBufSize = myAudioMgr.getProperty(AudioManager.PROPERTY_OUTPUT_FRAMES_PER_BUFFER);
        int recBufSize = AudioRecord.getMinBufferSize(
                Integer.parseInt(nativeSampleRate),
                AudioFormat.CHANNEL_IN_MONO,
                AudioFormat.ENCODING_PCM_16BIT);
        supportRecording = recBufSize != AudioRecord.ERROR &&
                recBufSize != AudioRecord.ERROR_BAD_VALUE;
    }

    private void updateNativeAudioUI() {
        if (!supportRecording) {
            return;
        }


    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions,
                                           @NonNull int[] grantResults) {
        /*
         * if any permission failed, the sample could not play
         */
        if (AUDIO_ECHO_REQUEST != requestCode) {
            super.onRequestPermissionsResult(requestCode, permissions, grantResults);
            return;
        }

        if (grantResults.length != 1 ||
                grantResults[0] != PackageManager.PERMISSION_GRANTED) {
            /*
             * When user denied permission, throw a Toast to prompt that RECORD_AUDIO
             * is necessary; also display the status on UI
             * Then application goes back to the original state: it behaves as if the button
             * was not clicked. The assumption is that user will re-click the "start" button
             * (to retry), or shutdown the app in normal way.
             */
            Toast.makeText(getApplicationContext(),
                    getString(R.string.prompt_permission),
                    Toast.LENGTH_SHORT).show();
            return;
        }

        /*
         * When permissions are granted, we prompt the user the status. User would
         * re-try the "start" button to perform the normal operation. This saves us the extra
         * logic in code for async processing of the button listener.
         */

        // The callback runs on app's thread, so we are safe to resume the action
//        startEcho();
    }

    // All this does is calls the UpdateStftTask at a fixed interval
    // http://stackoverflow.com/questions/6531950/how-to-execute-async-task-repeatedly-after-fixed-time-intervals
    public void initializeStftBackgroundThread(int timeInMs) {
        final Handler handler = new Handler();
        Timer timer = new Timer();
        TimerTask doAsynchronousTask = new TimerTask() {
            @Override
            public void run() {
                handler.post(new Runnable() {
                    public void run() {
                        try {
                            UpdateStftTask performStftUiUpdate = new UpdateStftTask();
                            performStftUiUpdate.execute();
                        } catch (Exception e) {
                            // TODO Auto-generated catch block
                        }
                    }
                });
            }
        };
        timer.schedule(doAsynchronousTask, 0, timeInMs); // execute every 10 ms
    }

    // UI update
    private class UpdateStftTask extends AsyncTask<Void, FloatBuffer, Void> {
        @Override
        protected Void doInBackground(Void... params) {
            // Float == 4 bytes
            // Note: We're using FloatBuffer instead of float array because interfacing with JNI
            // with a FloatBuffer allows direct memory sharing, versus having to copy to some
            // intermediate location first.
            // http://stackoverflow.com/questions/10697161/why-floatbuffer-instead-of-float
            FloatBuffer buffer = ByteBuffer.allocateDirect(FRAME_SIZE * 4)
                    .order(ByteOrder.LITTLE_ENDIAN)
                    .asFloatBuffer();

            getFftBuffer(buffer);


            // Update screen, needs to be done on UI thread
            publishProgress(buffer);

            return null;
        }


        protected void onProgressUpdate(FloatBuffer... newDisplayUpdate) {

            FloatBuffer buffer = newDisplayUpdate[0];
            TextView[] textViewsConf = {conf_1, conf_2, conf_3, conf_4 ,conf_5};
            TextView[] textViewsInstr = {instrument_1, instrument_2, instrument_3,
                    instrument_4, instrument_5};
            String[] names = {"Guitar", "Drumset", "Bass", "Piano", "Violin"};
            final Integer[] idx = {0, 1, 2, 3, 4};
            float voiced = buffer.get(1);
            final float[] conf_level = {0.f,0.f,0.f,0.f,0.f};
            int n_instr = 5;
            int n_selected = 0;
            if (inputnum == null) return;
            if (voiced < 1.) {
                for (int i = 0; i < n_instr; i ++) {
                    textViewsConf[i].setText("0.0");
                    textViewsInstr[i].setText(names[i]);
                }
                conf_6.setText(String.format("%.2f", voiced));

            } else {
                for (int i = 0; i < n_instr; i ++) {
                    conf_level[i] = buffer.get(2 + i);
                    textViewsConf[i].setText(String.format("%.2f", conf_level[i]));
                }
                
                SpannableString voice_level = new SpannableString(String.format("%.2f", voiced));
                conf_6.setText(voice_level);

                if (inputnum.equals("Unknown")) {
                    for (int i = 0; i < n_instr; i ++) {
                        String name = names[i];
                        if (conf_level[i] > 0.5) {
                            SpannableString str = new SpannableString(name);
                            str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, name.length(),0);
                            textViewsInstr[i].setText(str);
                        } else {
                            textViewsInstr[i].setText(name);
                        }
                    }
                } else {
                    n_selected = Integer.parseInt(inputnum);

                    Arrays.sort(idx, new Comparator<Integer>(){
                        @Override public int compare(final Integer o1, final Integer o2) {
                            return Float.compare(conf_level[o2], conf_level[o1]);
                        }}
                    );
                    int i = 0;
                    for (; i < n_instr; i ++) {
                        int ii = idx[i];
                        String name = names[ii];
                        SpannableString str = new SpannableString(name);
                        if (i < n_selected){
                            str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, name.length(),0);

                            textViewsInstr[ii].setText(str);
                        } else {
                             textViewsInstr[ii].setText(name);
                        }
                    }

                }

            }
//            FloatBuffer[0]

//            FloatBuffer temp = ByteBuffer.allocateDirect(FRAME_SIZE * 4).order(ByteOrder.LITTLE_ENDIAN)
//                    .asFloatBuffer();


//            temp.put(0,0.15f);
//            temp.put(1,0.34f);
//            temp.put(2,0.53f);
//            temp.put(3,0.67f);
//            temp.put(4,0.11f);
//            temp.put(5,0.92f);
//            temp.put(6,0.02f);


//            timer_ = timer_+1;


//
//            if(newDisplayUpdate[0].get(0) > 0){ //if the first value is positive, update
//                conf_1.setText(""+newDisplayUpdate[0].get(1));
//                conf_2.setText(""+newDisplayUpdate[0].get(2));
//                conf_3.setText(""+newDisplayUpdate[0].get(3));
//                conf_4.setText(""+newDisplayUpdate[0].get(4));
//                conf_5.setText(""+newDisplayUpdate[0].get(5));
//                conf_6.setText(""+newDisplayUpdate[0].get(6));
//
//            }
//            if(timer_%200 == 0){
//            conf_1.setText(""+String.format("%.2f", newDisplayUpdate[0].get(2)));
//            conf_2.setText(""+String.format("%.2f", newDisplayUpdate[0].get(3)));
//            conf_3.setText(""+String.format("%.2f", newDisplayUpdate[0].get(4)));
//            conf_4.setText(""+String.format("%.2f", newDisplayUpdate[0].get(5)));
//            conf_5.setText(""+String.format("%.2f", newDisplayUpdate[0].get(6)));
//            conf_6.setText(""+newDisplayUpdate[0].get(1));
//
//            if(newDisplayUpdate[0].get(2) > 0.5){
//                SpannableString str = new SpannableString("Guitar");
//                str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, 6,0);
//                instrument_1.setText(str);
//            }else{
//                instrument_1.setText("Guitar");
//            }
//
//            if(newDisplayUpdate[0].get(3) > 0.5){
//                SpannableString str = new SpannableString("Drumset");
//                str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, 7,0);
//                instrument_2.setText(str);
//            }else{
//                instrument_2.setText("Drumset");
//            }
//
//            if(newDisplayUpdate[0].get(4) > 0.5){
//                SpannableString str = new SpannableString("Bass");
//                str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, 4,0);
//                instrument_3.setText(str);
//            }else{
//                instrument_3.setText("Bass");
//            }
//
//            if(newDisplayUpdate[0].get(5) > 0.5){
//                SpannableString str = new SpannableString("Piano");
//                str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, 5,0);
//                instrument_4.setText(str);
//            }else{
//                instrument_4.setText("Piano");
//            }
//
//            if(newDisplayUpdate[0].get(6) > 0.5){
//                SpannableString str = new SpannableString("Violin");
//                str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, 6,0);
//                instrument_5.setText(str);
//            }else{
//                instrument_5.setText("Violin");
//            }
//
//            if(newDisplayUpdate[0].get(1) > 0.5){
//                SpannableString str = new SpannableString("Voiced");
//                str.setSpan(new BackgroundColorSpan(Color.YELLOW), 0, 6,0);
//                instrument_6.setText(str);
//            }else{
//                instrument_6.setText("Voiced");
//            }


//            }


        }

    }
}
