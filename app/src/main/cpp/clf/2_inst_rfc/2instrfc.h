//
// Created by hertin on 4/25/19.
//

#ifndef ECE420_2INSTRFC_H
#define ECE420_2INSTRFC_H
#include "RFC_inst2_0.h"
#include "RFC_inst2_1.h"
#include "RFC_inst2_2.h"


#define TOTAL_CLASS 3
class MultioutputRegressor{
public:
    //to get sigmod as confidence level form the regressor
    // double Sigmoid[TOTAL_CLASS];
    float Prediction[TOTAL_CLASS];
    RFC_inst2_0 clf0;
    RFC_inst2_1 clf1;
    RFC_inst2_2 clf2;

    MultioutputRegressor();

    // static void sigmoid(double *input, size_t input_len) {
    //     for (size_t i = 0; i < input_len; i++) {
    //         input[i] =  1/(1+exp(-input[i]));
    //     }
    // }

    void Predict(float* input, int num_class, float result[TOTAL_CLASS]);


};

#endif //ECE420_2INSTRFC_H
