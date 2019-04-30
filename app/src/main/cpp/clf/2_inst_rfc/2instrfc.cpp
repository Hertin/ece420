//
// Created by hertin on 4/25/19.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "2instrfc.h"

using namespace std;

#define TOTAL_CLASS 5
MultioutputRegressor::MultioutputRegressor() {
    clf0 = RFC_inst2_0();
    clf1 = RFC_inst2_1();
    clf2 = RFC_inst2_2();
    clf3 = RFC_inst2_3();
    clf4 = RFC_inst2_4();
}



void MultioutputRegressor::Predict(float* input, int num_class, float result[TOTAL_CLASS]){

//    float Prediction[TOTAL_CLASS];
    // int*Result = new int[TOTAL_CLASS];
    if (num_class==3) {
    }else if(num_class==2) {
        Prediction[0] = clf0.predict(input);
        Prediction[1] = clf1.predict(input);
        Prediction[2] = clf2.predict(input);
        Prediction[3] = clf3.predict(input);
        Prediction[4] = clf4.predict(input);
    }

    // sigmoid(Sigmoid, TOTAL_CLASS);
    for (int i = 0; i < TOTAL_CLASS; i++) {
        result[i] = Prediction[i];
    }

}
