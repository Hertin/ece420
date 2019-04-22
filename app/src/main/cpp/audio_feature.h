//
// Created by hertin on 4/21/19.
//

#ifndef LAB3_AUDIO_FEATURE_H
#define LAB3_AUDIO_FEATURE_H

#include <vector>

using namespace std;

#define CHUNK_DURATION 3 // [s]
#define FS 8000
#define FRAME_DURATION 0.25 // [s]
#define HOP_DURATION 0.1 // [s]
#define N_FEATURE_SINGLE 26
#define N_FEATURE 52
#define FRAME_SIZE (int(FRAME_DURATION * FS))
#define CHUNK_SIZE (int(CHUNK_DURATION * FS))


void get_feature(vector<float> &audio, float feature[N_FEATURE]);


#endif //LAB3_AUDIO_FEATURE_H
