//
// Created by hertin on 4/21/19.
//
#include "audio_feature.h"

#include <string.h>
#include <vector>
#include <algorithm>
#include "gist/Gist.h"


Gist<float> g(FRAME_SIZE, FS, WindowType::RectangularWindow);

//float feature[N_FEATURE];

void _get_feature(vector<float> &audio_frame, float feature[N_FEATURE_SINGLE]) {
// def get_feature_single(audio_frame):
    g.processAudioFrame(audio_frame);

    feature[0] = g.complexSpectralDifference();
    feature[1] = g.energyDifference();
    feature[2] = g.highFrequencyContent();
    feature[3] = g.peakEnergy();
    feature[4] = g.pitch();
    feature[5] = g.rootMeanSquare();
    feature[6] = g.spectralCentroid();
    feature[7] = g.spectralCrest();
    feature[8] = g.spectralDifference();
    feature[9] = g.spectralFlatness();
    feature[10] = g.spectralKurtosis();
    feature[11] = g.spectralRolloff();
    feature[12] = g.zeroCrossingRate();

    vector<float> mfcc = g.getMelFrequencyCepstralCoefficients();
    memcpy(&feature[13], mfcc.data(), mfcc.size() * sizeof(float));
}

void normalize_chunk(vector<float> &chunk) {
    float* audio_data = chunk.data();
    float max_val = *max_element(audio_data, audio_data+CHUNK_SIZE);
    // printf("%f %d\n", max_val, max_element(audio_data+i*CHUNK_SIZE, audio_data+(i+1)*CHUNK_SIZE)-audio_data);
    for (int ii = 0; ii < CHUNK_SIZE; ii ++) {
        chunk[ii] = chunk[ii] / max_val;
    }
}

void get_feature(vector<float> &audio, float feature[N_FEATURE]) {
    float feature_single[N_FEATURE_SINGLE];
    // printf("%s\n", "get_feature");
    // float feature[N_FEATURE];
    normalize_chunk(audio);

    for (int i = 0; i < audio.size() / FRAME_SIZE; i++) {
        // printf("get_feature::%d\n", i);
        memset(feature_single, 0, N_FEATURE_SINGLE * sizeof(float));
        float *data = audio.data();
        vector<float> audio_frame(data + i * FRAME_SIZE, data + (i + 1) * FRAME_SIZE);
        _get_feature(audio_frame, feature_single);
        // printf("%f %f %f %f %f %f\n", feature_single[0], feature_single[1], feature_single[2], feature_single[3], feature_single[4], feature_single[5]);
        for (int ii = 0; ii < N_FEATURE_SINGLE; ii++) {
            int imean = ii;
            int ivar = ii + N_FEATURE_SINGLE;
            float x = feature_single[ii];
            if (i != 0) {
                feature[ivar] = (((i) * (x - feature[imean])) * ((i) * (x - feature[imean])) /
                                 ((i) * (i + 1)) + feature[ivar] * i) / (i + 1);
            }
            feature[imean] = (feature[imean] * (i) + x) / (i + 1);
        }
    }

}

//void chunk_audio_features(vector<float> &audio, vector<float> &features) {
//    // chunk_len = int(chunk_duration * fs)
//    float* audio_data = audio.data();
//    float feature[N_FEATURE];
//    int n_chunk = int(audio.size()) / CHUNK_SIZE;
//    features.clear();
//    printf("%d chunks\n", n_chunk);
//
//    for (int i = 0; i < n_chunk; i ++) {
//
//        memset(feature, 0, N_FEATURE*sizeof(float));
//        vector<float> chunk(audio_data+i*CHUNK_SIZE, audio_data+(i+1)*CHUNK_SIZE);
//        get_feature(chunk, feature);
//
//        for (int ii = 0; ii < N_FEATURE; ii ++) {
//            features.push_back(feature[ii]);
//        }
//    }
//
//}

