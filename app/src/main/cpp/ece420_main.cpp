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

//#include "clf/2_inst_clf/2instclf.cpp"
#include "clf/2_inst_rfc/2instrfc.h"
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
#define N_CLASS 2
#define CHUNK_BUFFER_SIZE (CHUNK_SIZE*2)
//#define VOICED_THRESHOLD 2000000
#define VOICED_THRESHOLD 200000
#include "audio_feature.h"

//float ft_mean[N_FEATURE] = {
//        5875.915480018374f,
//        24.888751722553973f,
//        548780.4501607717f,
//        0.7406592940758497f,
//        59.237730391593935f,
//        0.2270759438833185f,
//        188.08917087735415f,
//        269.48199931097844f,
//        2005.9232889297198f,
//        0.6097052122509474f,java
//        153.468879191548f,
//        0.21208635995187614f,
//        196.27135966926963f,
//        160.796293638034f,
//        32.83346491731741f,
//        10.215241193442811f,
//        6.813634463280891f,
//        2.9382681962706707f,
//        1.1891982184126666f,
//        0.18286322057931642f,
//        0.6120686213467501f,
//        -0.514157969413901f,
//        -0.6143738830314079f,
//        -0.6544733919240928f,
//        -0.3550900348458314f,
//        -0.2731689116688677f,
//        1888518.5852090032f,
//        2163.6541111621495f,
//        32602126547.66743f,
//        0.044151670625026916f,
//        1140.6649058337161f,
//        0.0035358677777775284f,
//        1302.5924437299036f,
//        13402.914101975195f,
//        308899.8364722095f,
//        0.00432054460952191f,
//        8145.52503445108f,
//        0.0042076233498919815f,
//        4736.359209921911f,
//        312.9292317409279f,
//        35.789694103123566f,
//        22.064482731396417f,
//        10.857391371440055f,
//        9.58001711788011f,
//        7.891895383555352f,
//        6.4144240569017f,
//        5.445308462764125f,
//        4.534787964371842f,
//        3.8422665401067984f,
//        3.3288124515531696f,
//        2.8299767455213596f,
//        2.6095109202744604f
//};
//
//float ft_std[N_FEATURE] = {
//        1490.4163847730606f,
//        15.203028648204443f,
//        274602.32028153003f,
//        0.14988524497859182f,
//        27.200962004759592f,
//        0.08237936033013143f,
//        64.59690969533682f,
//        125.04255135128001f,
//        530.6328768555526f,
//        0.08507377705791513f,
//        100.19372836223333f,
//        0.12675425284961156f,
//        118.018114671541f,
//        25.879284490160394f,
//        10.811659234494584f,
//        9.847892156163855f,
//        5.575357728437596f,
//        4.572859616745619f,
//        3.32871567046985f,
//        2.659215371420969f,
//        2.1180739007652174f,
//        1.8892478656299907f,
//        1.7191430769445422f,
//        1.4885449113358873f,
//        1.357393728280013f,
//        1.2314538312552297f,
//        1477533.7569558267f,
//        3091.8457270698354f,
//        48252919700.15319f,
//        0.034092299259060654f,
//        1567.5909861950597f,
//        0.0037133392360315723f,
//        1481.045829810813f,
//        13268.411811516855f,
//        229642.87153752454f,
//        0.00471619459609176f,
//        12380.042649361108f,
//        0.005658926284430596f,
//        8903.774929769957f,
//        360.00426429766077f,
//        33.669774078889176f,
//        20.640771372966995f,
//        9.545146679558012f,
//        9.499007323753295f,
//        7.820170794717013f,
//        7.702000781617661f,
//        6.679236038745696f,
//        5.968777801289147f,
//        4.670703958063194f,
//        4.0949076406196365f,
//        3.2801299590439665f,
//        3.438105997942527f
//};
float chunkBuf[CHUNK_BUFFER_SIZE] = {};
int inBufIdx = 0;
int chunkBufIdxStart = 0;
int chunkBufIdxEnd = 0;
float fftOut[FFT_SIZE] = {};
bool isWritingFft = false;
bool updated = false;
bool is_voiced_prev = false;
bool is_voiced_curr = false;

//mutex processing_mutex;

float feature[N_FEATURE];
//double feature_db[N_FEATURE];
//double output[TOTAL_CLASS];

float output[TOTAL_CLASS];
vector<float> chunk;
vector<float> audio((unsigned) CHUNK_SIZE * 2, 0.0f);

bool finish_process = false;
float totalPower = 0;

thread t_processing_feature;
MultioutputRegressor reg;


void process_feature() {

//    processing_mutex.lock();
    get_feature(chunk, feature);

//    for (int i = 0; i < N_FEATURE; i ++) {
//        feature_db[i] = (feature[i] - ft_mean[i]) / ft_std[i];
//    }
//    for (int i = 0; i < N_FEATURE; i++) {
//        LOGD("feature vector %d: %f, %f", i, feature[i], feature_db[i]);
//    }
//    reg.Predict(feature_db, N_CLASS, output);
    reg.Predict(feature, N_CLASS, output);
    finish_process = true;
    updated = true;
    is_voiced_curr = true;
//    processing_mutex.unlock();

}

bool is_voiced(float buffer[]) {
    totalPower = 0;
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

    isWritingFft = true;
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

        for (int i = 0; i < TOTAL_CLASS; i++) {
            LOGD("%d th conf: %f", i, output[i]);
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
                updated = is_voiced_prev;
                is_voiced_curr = false;
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

#define UPDATED 0
#define VOICED 1
#define DATA 2

// http://stackoverflow.com/questions/34168791/ndk-work-with-floatbuffer-as-parameter
JNIEXPORT void JNICALL
Java_com_ece420_lab3_MainActivity_getFftBuffer(JNIEnv *env, jclass, jobject bufferPtr) {
    jfloat *buffer = (jfloat *) env->GetDirectBufferAddress(bufferPtr);
    // thread-safe, kinda
    while (isWritingFft) {}
    // We will only fetch up to FRAME_SIZE data in fftOut[] to draw on to the screen

//    if (updated) {
//        updated = false;
//        buffer[UPDATED] = 1;
//        buffer[VOICED] = is_voiced_curr ? 1 : -1;
//
//
//    } else {
//        buffer[UPDATED] = -1;
//    }
    buffer[VOICED] = totalPower / VOICED_THRESHOLD;
    for (int i = 0; i < TOTAL_CLASS; i++) {
        buffer[DATA+i] = (float) output[i];
//        buffer[DATA+i] = (float) 1;

    }
//    buffer[DATA+TOTAL_CLASS-1] = 1;
}
