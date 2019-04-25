#include <stdio.h>
#include <math.h>
#include "2instclf.h"
#include "SVC_2_0.cpp"
#include "SVC_2_1.cpp"
#include "SVC_2_2.cpp"
#include "SVC_2_3.cpp"
#include "SVC_2_4.cpp"

#define INPUT_SIZE 10

using namespace std;
class MultioutputRegressor {
public:
    //to get sigmod as confidence level form the regressor
    double Sigmoid[TOTAL_CLASS];
    SVC_2_0 SVC0;
    SVC_2_1 SVC1;
    SVC_2_2 SVC2;
    SVC_2_3 SVC3;
    SVC_2_4 SVC4;

    MultioutputRegressor() {
        SVC0 = SVC_2_0();
        SVC1 = SVC_2_1();
        SVC2 = SVC_2_2();
        SVC3 = SVC_2_3();
        SVC4 = SVC_2_4();
    }

    static void sigmoid(double *input, size_t input_len) {
        for (size_t i = 0; i < input_len; i++) {
            input[i] = 1 / (1 + exp(-input[i]));
        }
    }

    void Predict(double *input, int num_class, double result[TOTAL_CLASS]) {
        // double* Prediction = new double[TOTAL_CLASS];
        // double Prediction[TOTAL_CLASS];
        // int*Result = new int[TOTAL_CLASS];
        if (num_class == 3) {
        } else if (num_class == 2) {
            Sigmoid[0] = SVC0.predict(input);
            Sigmoid[1] = SVC1.predict(input);
            Sigmoid[2] = SVC2.predict(input);
            Sigmoid[3] = SVC3.predict(input);
            Sigmoid[4] = SVC4.predict(input);
        }

        sigmoid(Sigmoid, TOTAL_CLASS);
        for (int i = 0; i < TOTAL_CLASS; i++) {
            result[i] = Sigmoid[i];
        }

    }
};
