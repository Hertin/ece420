#include "RFC_inst2_3.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_3::predict_0(float features[]) {
    int classes[2];
    
    if (features[14] <= 7.106611967086792) {
        if (features[9] <= 0.813739001750946) {
            if (features[39] <= 120.04690933227539) {
                if (features[15] <= -0.35726749897003174) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                } else {
                    if (features[0] <= 10150.818359375) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[2] <= 1378209.1875) {
                    if (features[47] <= 2.7936221063137054) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    if (features[45] <= 2.7435635328292847) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[34] <= 1211184.34375) {
                            classes[0] = 19; 
                            classes[1] = 0; 
                        } else {
                            if (features[11] <= 0.6640419960021973) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[25] <= -1.157734990119934) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                classes[0] = 57; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[8] <= 1417.413330078125) {
            classes[0] = 2; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 18; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_1(float features[]) {
    int classes[2];
    
    if (features[0] <= 9205.197265625) {
        if (features[32] <= 1404.7744140625) {
            if (features[20] <= 5.491827964782715) {
                if (features[19] <= 5.971664905548096) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[24] <= -0.5696234852075577) {
                    if (features[38] <= 2143.2361450195312) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 57; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[33] <= 8480.3369140625) {
                if (features[34] <= 643872.34375) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 11; 
            }
        }
    } else {
        if (features[39] <= 144.6723175048828) {
            if (features[17] <= -7.483630657196045) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[32] <= 159.99332427978516) {
                    if (features[29] <= 0.0277475006878376) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 20; 
                }
            }
        } else {
            classes[0] = 5; 
            classes[1] = 0; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_2(float features[]) {
    int classes[2];
    
    if (features[20] <= 5.425984621047974) {
        if (features[6] <= 430.8321533203125) {
            if (features[1] <= 6.456759929656982) {
                if (features[0] <= 5383.142578125) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 30; 
            }
        } else {
            if (features[47] <= 3.308208465576172) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[5] <= 0.17898250371217728) {
            if (features[44] <= 16.38831925392151) {
                if (features[19] <= 8.463098049163818) {
                    classes[0] = 49; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= 548.7500152587891) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[9] <= 0.6973649859428406) {
                classes[0] = 0; 
                classes[1] = 13; 
            } else {
                if (features[38] <= 5380.277587890625) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 8; 
                    classes[1] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_3(float features[]) {
    int classes[2];
    
    if (features[29] <= 0.025491499342024326) {
        if (features[19] <= 3.441466450691223) {
            classes[0] = 2; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 29; 
        }
    } else {
        if (features[50] <= 3.8208775520324707) {
            if (features[5] <= 0.2135554999113083) {
                if (features[4] <= 59.254478454589844) {
                    if (features[49] <= 11.386862754821777) {
                        classes[0] = 56; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[30] <= 0.6261684782803059) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[45] <= 11.449933052062988) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
            }
        } else {
            if (features[23] <= -2.540046989917755) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[47] <= 0.8193324953317642) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 11; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_4(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.8139320015907288) {
        if (features[19] <= 5.7431418895721436) {
            if (features[27] <= 315.99794006347656) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                classes[0] = 15; 
                classes[1] = 0; 
            }
        } else {
            if (features[0] <= 9078.2724609375) {
                if (features[28] <= 214077939712.0) {
                    if (features[37] <= 0.015111000277101994) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    } else {
                        if (features[38] <= 10340.9580078125) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[5] <= 0.18866000324487686) {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    } else {
                        if (features[3] <= 0.7640359997749329) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 24; 
            }
        }
    } else {
        if (features[39] <= 122.97329330444336) {
            if (features[31] <= 0.0003904999975929968) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            classes[0] = 35; 
            classes[1] = 0; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_5(float features[]) {
    int classes[2];
    
    if (features[4] <= 16.060648918151855) {
        if (features[42] <= 1.1034820079803467) {
            classes[0] = 0; 
            classes[1] = 2; 
        } else {
            if (features[49] <= 5.6972010135650635) {
                if (features[16] <= -7.011711120605469) {
                    classes[0] = 39; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    } else {
        if (features[19] <= 5.6250879764556885) {
            if (features[40] <= 6.508896350860596) {
                if (features[28] <= 117661253632.0) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                classes[0] = 15; 
                classes[1] = 0; 
            }
        } else {
            if (features[16] <= -11.084400177001953) {
                if (features[3] <= 0.8164550065994263) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                if (features[6] <= 464.65625) {
                    if (features[34] <= 980629.75) {
                        classes[0] = 0; 
                        classes[1] = 40; 
                    } else {
                        if (features[16] <= -7.925526857376099) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_6(float features[]) {
    int classes[2];
    
    if (features[35] <= 0.00029499999072868377) {
        if (features[16] <= -7.107773065567017) {
            classes[0] = 32; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 3; 
        }
    } else {
        if (features[49] <= 5.136445045471191) {
            if (features[25] <= -0.8366039991378784) {
                if (features[18] <= 2.676534056663513) {
                    classes[0] = 0; 
                    classes[1] = 18; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 28; 
                classes[1] = 0; 
            }
        } else {
            if (features[6] <= 441.1400909423828) {
                if (features[25] <= -1.134487509727478) {
                    if (features[35] <= 0.0008805000106804073) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 30; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_7(float features[]) {
    int classes[2];
    
    if (features[21] <= 3.8810460567474365) {
        if (features[13] <= 203.99608612060547) {
            if (features[10] <= 348.5947265625) {
                if (features[18] <= 0.5015029907226562) {
                    if (features[22] <= -2.886212468147278) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[38] <= 39398.212890625) {
                        classes[0] = 56; 
                        classes[1] = 0; 
                    } else {
                        if (features[23] <= -2.414170503616333) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[38] <= 8559.986572265625) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[0] <= 10694.79541015625) {
                classes[0] = 0; 
                classes[1] = 21; 
            } else {
                if (features[46] <= 0.921750009059906) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 7; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 20; 
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_8(float features[]) {
    int classes[2];
    
    if (features[1] <= 6.5885374546051025) {
        if (features[51] <= 2.1885969638824463) {
            classes[0] = 35; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 2; 
        }
    } else {
        if (features[28] <= 246743326720.0) {
            if (features[44] <= 1.0247344970703125) {
                if (features[49] <= 1.2313614785671234) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[23] <= -4.336292028427124) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 30; 
                }
            }
        } else {
            if (features[9] <= 0.7188604772090912) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                if (features[34] <= 301703.9453125) {
                    if (features[20] <= 6.393656492233276) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[10] <= 347.8033905029297) {
                        classes[0] = 29; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_9(float features[]) {
    int classes[2];
    
    if (features[42] <= 12.873260974884033) {
        if (features[29] <= 0.02638200018554926) {
            if (features[12] <= 720.875) {
                if (features[33] <= 2614.3900146484375) {
                    if (features[25] <= -1.0977789759635925) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[39] <= 264.31724548339844) {
                        classes[0] = 0; 
                        classes[1] = 24; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[50] <= 11.789373874664307) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[32] <= 1586.5267944335938) {
                if (features[49] <= 0.46247200667858124) {
                    if (features[19] <= 7.835214138031006) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    if (features[14] <= 8.418636322021484) {
                        if (features[18] <= -0.9976985156536102) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 53; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[38] <= 8559.986572265625) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[0] <= 9453.10009765625) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 12; 
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int RFC_inst2_3::predict_10(float features[]) {
    int classes[2];
    
    if (features[35] <= 0.00029599999834317714) {
        if (features[18] <= -1.0120124816894531) {
            classes[0] = 0; 
            classes[1] = 1; 
        } else {
            if (features[44] <= 0.48217901587486267) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 37; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[19] <= 6.794045448303223) {
            if (features[45] <= 20.26226234436035) {
                if (features[25] <= -1.6708089709281921) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 23; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[19] <= 11.334852695465088) {
                if (features[18] <= 3.300141930580139) {
                    if (features[51] <= 7.302556991577148) {
                        if (features[39] <= 320.7637481689453) {
                            classes[0] = 0; 
                            classes[1] = 43; 
                        } else {
                            if (features[40] <= 40.67317867279053) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[9] <= 0.6864179968833923) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

float RFC_inst2_3::predict (float features[]) {
    int n_classes = 2;
    int classes[n_classes];
    int i;
    for (i = 0; i < n_classes; i++) {
        classes[i] = 0;
    }

    classes[predict_0(features)]++;
    classes[predict_1(features)]++;
    classes[predict_2(features)]++;
    classes[predict_3(features)]++;
    classes[predict_4(features)]++;
    classes[predict_5(features)]++;
    classes[predict_6(features)]++;
    classes[predict_7(features)]++;
    classes[predict_8(features)]++;
    classes[predict_9(features)]++;
    classes[predict_10(features)]++;

    int class_idx = 0;
    int class_val = classes[0];
    for (i = 1; i < n_classes; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx == 1 ? (class_val/11.) : 1-(class_val/11.);

}

