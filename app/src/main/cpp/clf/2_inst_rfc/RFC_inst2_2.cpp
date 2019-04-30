#include "RFC_inst2_2.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_2::predict_0(float features[]) {
    int classes[2];
    
    if (features[8] <= 2254.7518310546875) {
        if (features[10] <= 211.3046646118164) {
            if (features[0] <= 5977.0146484375) {
                if (features[19] <= 2.500323534011841) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
            }
        } else {
            if (features[4] <= 28.764140129089355) {
                if (features[13] <= 172.6533966064453) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    classes[0] = 14; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
            }
        }
    } else {
        if (features[2] <= 1518407.75) {
            if (features[6] <= 387.943603515625) {
                if (features[0] <= 7156.570068359375) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[4] <= 151.3209228515625) {
                if (features[6] <= 388.3331604003906) {
                    if (features[14] <= 5.765756607055664) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 60; 
                    classes[1] = 0; 
                }
            } else {
                if (features[26] <= 1938642.625) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
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

int RFC_inst2_2::predict_1(float features[]) {
    int classes[2];
    
    if (features[13] <= 187.52662658691406) {
        if (features[4] <= 8.338549613952637) {
            classes[0] = 9; 
            classes[1] = 0; 
        } else {
            if (features[34] <= 1654029.375) {
                if (features[26] <= 478827.5625) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[18] <= 2.667278528213501) {
                        classes[0] = 0; 
                        classes[1] = 19; 
                    } else {
                        if (features[5] <= 0.12497200071811676) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[18] <= -1.9159095287322998) {
            classes[0] = 0; 
            classes[1] = 1; 
        } else {
            if (features[29] <= 0.014006000012159348) {
                if (features[21] <= 2.5235654711723328) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[16] <= -4.686560392379761) {
                    if (features[1] <= 13.21375036239624) {
                        classes[0] = 49; 
                        classes[1] = 0; 
                    } else {
                        if (features[1] <= 13.74749755859375) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 30; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
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

int RFC_inst2_2::predict_2(float features[]) {
    int classes[2];
    
    if (features[29] <= 0.03569749929010868) {
        if (features[10] <= 174.2843780517578) {
            if (features[6] <= 400.2310791015625) {
                if (features[16] <= -8.321004867553711) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[10] <= 130.21366119384766) {
                    classes[0] = 13; 
                    classes[1] = 0; 
                } else {
                    if (features[41] <= 5.213698863983154) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[18] <= -0.014537505805492401) {
                if (features[8] <= 2901.974609375) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 37; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[51] <= 1.4270524978637695) {
            if (features[5] <= 0.19464849680662155) {
                if (features[4] <= 8.338271617889404) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[8] <= 2927.64501953125) {
                        if (features[10] <= 300.57334899902344) {
                            classes[0] = 0; 
                            classes[1] = 23; 
                        } else {
                            if (features[49] <= 1.8116895034909248) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        } else {
            if (features[44] <= 3.3295029401779175) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[28] <= 163388133376.0) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 21; 
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

int RFC_inst2_2::predict_3(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.8492634892463684) {
        if (features[2] <= 1049155.875) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            if (features[32] <= 95.90787887573242) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[47] <= 11.802646398544312) {
                    if (features[17] <= -3.3811960220336914) {
                        if (features[39] <= 84.03731536865234) {
                            if (features[39] <= 82.0341682434082) {
                                if (features[5] <= 0.2427549958229065) {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[6] <= 384.0715789794922) {
                                if (features[40] <= 15.28295612335205) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 56; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[11] <= 0.6667499840259552) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[43] <= 14.849867820739746) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        }
    } else {
        if (features[26] <= 986659.125) {
            if (features[25] <= -0.5730030089616776) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
            }
        } else {
            if (features[41] <= 3.1506805419921875) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 17; 
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

int RFC_inst2_2::predict_4(float features[]) {
    int classes[2];
    
    if (features[13] <= 176.08494567871094) {
        classes[0] = 0; 
        classes[1] = 9; 
    } else {
        if (features[20] <= 2.1738075017929077) {
            classes[0] = 0; 
            classes[1] = 7; 
        } else {
            if (features[9] <= 0.8517784774303436) {
                if (features[0] <= 7193.84619140625) {
                    if (features[43] <= 4.277108430862427) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        if (features[47] <= 2.518449902534485) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[25] <= 0.26492349756881595) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[23] <= -4.336292028427124) {
                        if (features[22] <= -6.062193870544434) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 58; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[25] <= -0.3426470011472702) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[33] <= 11338.669189453125) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
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

int RFC_inst2_2::predict_5(float features[]) {
    int classes[2];
    
    if (features[0] <= 5583.376220703125) {
        classes[0] = 0; 
        classes[1] = 15; 
    } else {
        if (features[17] <= -3.6537375450134277) {
            if (features[44] <= 4.926951885223389) {
                if (features[32] <= 822.782958984375) {
                    if (features[4] <= 125.87524795532227) {
                        classes[0] = 51; 
                        classes[1] = 0; 
                    } else {
                        if (features[39] <= 140.29773712158203) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[8] <= 2493.140380859375) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[16] <= -7.851791858673096) {
                    if (features[21] <= 2.0590180158615112) {
                        if (features[15] <= -3.361392617225647) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            }
        } else {
            if (features[37] <= 0.0009739999659359455) {
                if (features[37] <= 0.0005499999824678525) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
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

int RFC_inst2_2::predict_6(float features[]) {
    int classes[2];
    
    if (features[3] <= 0.5754185020923615) {
        if (features[4] <= 8.338549613952637) {
            classes[0] = 4; 
            classes[1] = 0; 
        } else {
            if (features[13] <= 188.91658782958984) {
                if (features[21] <= 3.744987964630127) {
                    classes[0] = 0; 
                    classes[1] = 26; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[26] <= 2173043.625) {
            if (features[34] <= 268951.46875) {
                classes[0] = 34; 
                classes[1] = 0; 
            } else {
                if (features[6] <= 440.28765869140625) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[8] <= 2519.12646484375) {
                if (features[48] <= 5.973998069763184) {
                    if (features[50] <= 0.7528344988822937) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[45] <= 3.5665555000305176) {
                    if (features[45] <= 3.5298560857772827) {
                        if (features[22] <= -2.321355938911438) {
                            if (features[41] <= 3.3984119296073914) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    classes[0] = 25; 
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

int RFC_inst2_2::predict_7(float features[]) {
    int classes[2];
    
    if (features[2] <= 1088441.4375) {
        if (features[32] <= 3118.8150634765625) {
            classes[0] = 0; 
            classes[1] = 19; 
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    } else {
        if (features[13] <= 189.5199432373047) {
            if (features[38] <= 8163.14990234375) {
                classes[0] = 11; 
                classes[1] = 0; 
            } else {
                if (features[42] <= 6.730756998062134) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[16] <= -7.802587985992432) {
                if (features[47] <= 11.28557538986206) {
                    if (features[5] <= 0.2559479922056198) {
                        classes[0] = 50; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[41] <= 3.8234810829162598) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    if (features[24] <= -0.6685280278325081) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
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

int RFC_inst2_2::predict_8(float features[]) {
    int classes[2];
    
    if (features[39] <= 167.19001007080078) {
        if (features[5] <= 0.12736450135707855) {
            if (features[26] <= 333803.71875) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            if (features[6] <= 384.44728088378906) {
                if (features[42] <= 6.480154037475586) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[40] <= 26.905305862426758) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 51; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[37] <= 0.0313685005530715) {
            if (features[28] <= 376390615040.0) {
                if (features[47] <= 2.0938735604286194) {
                    if (features[7] <= 325.59486389160156) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[37] <= 0.006296500097960234) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[5] <= 0.14849399775266647) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 18; 
                }
            } else {
                classes[0] = 7; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 8; 
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

int RFC_inst2_2::predict_9(float features[]) {
    int classes[2];
    
    if (features[28] <= 77682098176.0) {
        if (features[42] <= 12.544528484344482) {
            if (features[31] <= 9.250000221072696e-05) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
            }
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    } else {
        if (features[8] <= 1806.2044067382812) {
            classes[0] = 0; 
            classes[1] = 4; 
        } else {
            if (features[32] <= 95.90787887573242) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[7] <= 197.965576171875) {
                    if (features[6] <= 421.4022521972656) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[50] <= 0.49330349266529083) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[4] <= 126.85631942749023) {
                        if (features[18] <= -1.8672835230827332) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[35] <= 9.350000254926272e-05) {
                                if (features[14] <= 0.539003998041153) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[13] <= 186.5455780029297) {
                                    if (features[30] <= 0.17625249485718086) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 78; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[31] <= 0.0006024999893270433) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
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

int RFC_inst2_2::predict_10(float features[]) {
    int classes[2];
    
    if (features[2] <= 1105714.875) {
        classes[0] = 0; 
        classes[1] = 18; 
    } else {
        if (features[30] <= 1.700000029813964e-05) {
            classes[0] = 33; 
            classes[1] = 0; 
        } else {
            if (features[5] <= 0.13352899998426437) {
                if (features[32] <= 238.13616943359375) {
                    if (features[15] <= -1.3449600040912628) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[11] <= 0.637374997138977) {
                    if (features[27] <= 410.7330780029297) {
                        if (features[10] <= 239.56926727294922) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[21] <= -0.5421219915151596) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[8] <= 3674.42529296875) {
                        classes[0] = 33; 
                        classes[1] = 0; 
                    } else {
                        if (features[0] <= 11293.3017578125) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
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

float RFC_inst2_2::predict (float features[]) {
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

