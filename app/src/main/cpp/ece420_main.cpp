//
// Created by daran on 1/12/2017 to be used in ECE420 Sp17 for the first time.
// Modified by dwang49 on 1/1/2018 to adapt to Android 7.0 and Shield Tablet updates.
//

#include <jni.h>
#include <vector>
#include "ece420_main.h"
#include "ece420_lib.h"
#include "kiss_fft/kiss_fft.h"
#include "gist/Gist.h"
#include "audio_feature.h"
#include <thread>
#include <mutex>

using namespace std;
#define PI 3.141592653589793238463

// Declare JNI function
extern "C" {
JNIEXPORT void JNICALL
Java_com_ece420_lab3_MainActivity_getFftBuffer(JNIEnv *env, jclass, jobject bufferPtr);
}

// FRAME_SIZE is 1024 and we zero-pad it to 2048 to do FFT
#define INPUT_FRAME_SIZE 1024
#define DOWN_FACTOR 6
#define ZP_FACTOR 2
#define FFT_SIZE (INPUT_FRAME_SIZE * ZP_FACTOR)

#define CHUNK_BUFFER_SIZE (CHUNK_SIZE*2)
#define VOICED_THRESHOLD 20000000

float chunkBuf[CHUNK_BUFFER_SIZE] = {};
int inBufIdx = 0;
int chunkBufIdxStart = 0;
int chunkBufIdxEnd = 0;
float fftOut[FFT_SIZE] = {};
bool isWritingFft = false;


//mutex processing_mutex;

float feature[N_FEATURE];
vector<float> chunk;
vector<float> audio((unsigned) CHUNK_SIZE * 2, 0.0f);

bool finish_process = false;

thread t_processing_feature;

void process_feature() {

//    processing_mutex.lock();
    get_feature(chunk, feature);
    finish_process = true;
//    processing_mutex.unlock();

}

bool is_voiced(float buffer[]) {
    float totalPower = 0;
    for (int i = 0; i < CHUNK_HOP_SIZE; i++) {
        totalPower += buffer[i] * buffer[i] / CHUNK_HOP_SIZE;
    }
    LOGD("----------total power: %f / %d, %d-------------------", totalPower, VOICED_THRESHOLD, CHUNK_HOP_SIZE);
    return totalPower > VOICED_THRESHOLD;
}

void ece420ProcessFrame(sample_buf *dataBuf) {
    isWritingFft = false;

    // Keep in mind, we only have 20ms to process each buffer!
    struct timeval start;
    struct timeval end;

//    kiss_fft_cpx fftBufIn[FFT_SIZE] = {};
//    kiss_fft_cpx fftBufOut[FFT_SIZE] = {};

    gettimeofday(&start, NULL);

//    float maxval;
//    float minval;

    // Data is encoded in signed PCM-16, little-endian, mono channel
    float bufferIn[INPUT_FRAME_SIZE];


    for (int i = 0; i < INPUT_FRAME_SIZE; i++) {
        int16_t val =
                ((uint16_t) dataBuf->buf_[2 * i]) | (((uint16_t) dataBuf->buf_[2 * i + 1]) << 8);
        bufferIn[i] = (float) val;
    }

    for (; inBufIdx < INPUT_FRAME_SIZE; inBufIdx += DOWN_FACTOR) {

        chunkBuf[chunkBufIdxEnd] = bufferIn[inBufIdx];
        chunkBufIdxEnd = (chunkBufIdxEnd + 1) % CHUNK_BUFFER_SIZE;
    }
    inBufIdx %= INPUT_FRAME_SIZE;


    if (finish_process) {
        vector<float> feature_vec(feature, feature + N_FEATURE);
        for (int i = 0; i < N_FEATURE; i++) {
            LOGD("feature vector %d: %f", i, feature_vec[i]);
        }
        t_processing_feature.join();
        finish_process = false;

    }

//    this_thread::get_id();

    if ((chunkBufIdxEnd + CHUNK_BUFFER_SIZE - chunkBufIdxStart) % CHUNK_BUFFER_SIZE > CHUNK_SIZE) {
        // get enough data
        chunk.clear();
        memset(feature, 0, N_FEATURE * sizeof(float));

        for (int i = 0; i < CHUNK_SIZE; i++) {
            chunk.push_back(chunkBuf[(chunkBufIdxStart + i) % CHUNK_BUFFER_SIZE]);
        }
        chunkBufIdxStart = (chunkBufIdxStart + CHUNK_HOP_SIZE) % CHUNK_BUFFER_SIZE;
//        get_feature(chunk, feature);
        // start a thread processing feature
        if (!finish_process) {
            if (is_voiced(chunk.data())) {
                LOGD("-----------Voiciced-----------");
                t_processing_feature = thread(process_feature);
            } else {
                LOGD("-----------Unvoiced-----------");
            }
        }






    }

//    processing_mutex.lock();
//    LOGD("get lock%d\n", processing_mutex.try_lock());
//    LOGD("get lock%d\n", processing_mutex.try_lock());
//    bool get_lock = processing_mutex.try_lock();
//    if (! get_lock) {
//        LOGD("get lock%d\n", get_lock);
//        processing_mutex.unlock();
//    } else {
//        LOGD("lock\n");
//    }



    // Spectrogram is just a fancy word for short time fourier transform
    // 1. Apply hamming window to the entire FRAME_SIZE
//    for (int i = 0; i < INPUT_FRAME_SIZE; i++) {
//        float wi = float(0.54 - 0.46 * cos(2. * M_PI * i / (INPUT_FRAME_SIZE - 1)));
//        fftBufIn[i].r = bufferIn[i] * wi;
//        fftBufIn[i].i = 0.0f;
//    }

    // 2. Zero padding to FFT_SIZE = FRAME_SIZE * ZP_FACTOR
//    for (int i = INPUT_FRAME_SIZE; i < FFT_SIZE; i++) {
//        fftBufIn[i].r = 0.0f;
//        fftBufIn[i].i = 0.0f;
//    }

    // 3. Apply fft with KISS_FFT engine
//    kiss_fft_cfg cfg = kiss_fft_alloc(FFT_SIZE, false, 0, 0);


    // put kth sample in cx_in[k].r and cx_in[k].i
//    kiss_fft(cfg, fftBufIn, fftBufOut);


    // transformed. DC is in cx_out[0].r and cx_out[0].i

//    kiss_fft_free(cfg);

    // 4. Scale fftOut[] to between 0 and 1 with log() and linear scaling
    // NOTE: This code block is a suggestion to get you started. You will have to
    // add/change code outside this block to implement FFT buffer overlapping (extra credit part).
    // Keep all of your code changes within java/MainActivity and cpp/ece420_*
    // ********************* START YOUR CODE HERE *********************** //
//    int i = 0;
//    maxval = 20.0f * log10(fftBufOut[i].r * fftBufOut[i].r + fftBufOut[i].i * fftBufOut[i].i);
//    minval = maxval;
//    for (i = 1; i < INPUT_FRAME_SIZE; i++) {
//        fftOut[i] = fftBufOut[i].r * fftBufOut[i].r + fftBufOut[i].i * fftBufOut[i].i;
//        fftOut[i] = 20.0f * log10(fftOut[i]);
//        maxval = fftOut[i] > maxval ? fftOut[i] : maxval;
//        minval = fftOut[i] < minval ? fftOut[i] : minval;
//    }

//    for (i = 0; i < INPUT_FRAME_SIZE; i++) {
//\            fftOut[i] = (fftOut[i]-minval) / (maxval-minval);
//        fftOut[i] = fftOut[i] / maxval;
//    }


    // thread-safe
    isWritingFft = true;
    // Currently set everything to 0 or 1 so the spectrogram will just be blue and red stripped
//    for (int i = 0; i < FRAME_SIZE; i++) {
//        fftOut[i] = (i/20)%2;
//    }
//--------------------------------------------------------------------------------------------------
//    int frameSize = 1024;
//    int sampleRate = 44100;
//    Gist<double> g(frameSize, sampleRate, WindowType::RectangularWindow);
//
//    std::vector<double> testFrame(1024);
//
//    for (int i = 0; i < 1024; i++) {
//        testFrame[i] = bufferIn[i];
//    }
//
////    testFrame[0] = 1.0;
//
//    g.processAudioFrame(testFrame);
//
//    std::vector<double> mag;
//
//    mag = g.getMagnitudeSpectrum();
//
//    double t = -1;
//    t = g.complexSpectralDifference();
//    LOGD("complexSpectralDifference:%f ", t);
//    t = g.energyDifference();
//    LOGD("energyDifference:%f ", t);
//    t = g.highFrequencyContent();
//    LOGD("highFrequencyContent:%f ", t);
//    t = g.peakEnergy();
//    LOGD("peakEnergy:%f ", t);
//    t = g.pitch();
//    LOGD("pitch:%f ", t);
//    t = g.rootMeanSquare();
//    LOGD("rootMeanSquare:%f ", t);
//    t = g.spectralCentroid();
//    LOGD("spectralCentroid:%f ", t);
//    t = g.spectralCrest();
//    LOGD("spectralCrest:%f ", t);
//    t = g.spectralDifference();
//    LOGD("spectralDifference:%f ", t);
//    t = g.spectralFlatness();
//    LOGD("spectralFlatness:%f ", t);
//    t = g.spectralKurtosis();
//    LOGD("spectralKurtosis:%f ", t);
//    t = g.spectralRolloff();
//    LOGD("spectralRolloff:%f ", t);
//    t = g.zeroCrossingRate();
//    LOGD("zeroCrossingRate:%f ", t);
//    std::vector<double> mfcc;
//    mfcc = g.getMelFrequencyCepstralCoefficients();
//    for (int i = 0; i < 13; i++) {
//        LOGD("mfcc:%f ", mfcc[i]);
//    }
//    LOGD(" ");

//--------------------------------------------------------------------------------------------------
    // ********************* END YOUR CODE HERE ************************* //
    // Flip the flag so that the JNI thread will update the buffer
    isWritingFft = false;

    gettimeofday(&end, NULL);
    LOGD("Time delay: %ld us",
         ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
}


// http://stackoverflow.com/questions/34168791/ndk-work-with-floatbuffer-as-parameter
JNIEXPORT void JNICALL
Java_com_ece420_lab3_MainActivity_getFftBuffer(JNIEnv *env, jclass, jobject bufferPtr) {
    jfloat *buffer = (jfloat *) env->GetDirectBufferAddress(bufferPtr);
    // thread-safe, kinda
    while (isWritingFft) {}
    // We will only fetch up to FRAME_SIZE data in fftOut[] to draw on to the screen
    for (int i = 0; i < INPUT_FRAME_SIZE; i++) {
        buffer[i] = fftOut[i];
    }
}
