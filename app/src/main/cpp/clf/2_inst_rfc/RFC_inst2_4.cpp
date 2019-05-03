#include "RFC_inst2_4.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_4::predict_0(float features[]) {
    int classes[2];
    
    if (features[44] <= 10.896378517150879) {
        if (features[28] <= 423130300416.0) {
            if (features[31] <= 0.00010600000314298086) {
                if (features[18] <= 4.7742578983306885) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[13] <= 218.3189697265625) {
                    if (features[43] <= 7.511979818344116) {
                        classes[0] = 125; 
                        classes[1] = 0; 
                    } else {
                        if (features[21] <= 1.4753655195236206) {
                            classes[0] = 22; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[9] <= 0.8001770079135895) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[9] <= 0.730195015668869) {
            classes[0] = 2; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 8; 
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

int RFC_inst2_4::predict_1(float features[]) {
    int classes[2];
    
    if (features[42] <= 4.2147181034088135) {
        if (features[35] <= 0.0016724999877624214) {
            if (features[44] <= 0.5587324947118759) {
                if (features[25] <= -0.8187189847230911) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[45] <= 10.598261833190918) {
                    classes[0] = 101; 
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
        if (features[14] <= -0.8997070491313934) {
            if (features[0] <= 6723.22265625) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 19; 
            }
        } else {
            if (features[10] <= 292.25250244140625) {
                if (features[15] <= -5.656710386276245) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[22] <= -1.7658160328865051) {
                        classes[0] = 40; 
                        classes[1] = 0; 
                    } else {
                        if (features[42] <= 7.385167598724365) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
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

int RFC_inst2_4::predict_2(float features[]) {
    int classes[2];
    
    if (features[26] <= 6886602.75) {
        if (features[48] <= 15.649703025817871) {
            if (features[47] <= 3.963337540626526) {
                if (features[14] <= -7.591272592544556) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[21] <= 3.2222845554351807) {
                        classes[0] = 139; 
                        classes[1] = 0; 
                    } else {
                        if (features[19] <= 6.9505698680877686) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                }
            } else {
                if (features[6] <= 387.41908264160156) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 2; 
        }
    } else {
        if (features[40] <= 19.63589859008789) {
            classes[0] = 2; 
            classes[1] = 0; 
        } else {
            if (features[12] <= 473.75) {
                if (features[26] <= 10956879.0) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
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

int RFC_inst2_4::predict_3(float features[]) {
    int classes[2];
    
    if (features[41] <= 19.64388942718506) {
        if (features[6] <= 449.3754425048828) {
            if (features[50] <= 7.327245473861694) {
                if (features[7] <= 446.4481201171875) {
                    if (features[21] <= 3.684120535850525) {
                        if (features[38] <= 31777.1630859375) {
                            classes[0] = 133; 
                            classes[1] = 0; 
                        } else {
                            if (features[34] <= 1738353.6875) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[24] <= -0.873431995511055) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[18] <= 1.865921974182129) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[17] <= -5.287537097930908) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                classes[0] = 11; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[45] <= 4.59411358833313) {
            classes[0] = 1; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 7; 
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

int RFC_inst2_4::predict_4(float features[]) {
    int classes[2];
    
    if (features[42] <= 7.50545597076416) {
        if (features[49] <= 4.983281135559082) {
            if (features[18] <= 3.4791840314865112) {
                if (features[44] <= 0.5617529898881912) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[46] <= 8.49323558807373) {
                        classes[0] = 131; 
                        classes[1] = 0; 
                    } else {
                        if (features[44] <= 5.4364975690841675) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            if (features[21] <= -0.4945389926433563) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                }
            } else {
                if (features[46] <= 1.41205795109272) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[14] <= 3.6644569588825107) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                classes[0] = 7; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[48] <= 3.908881902694702) {
            classes[0] = 6; 
            classes[1] = 0; 
        } else {
            if (features[50] <= 0.8772920072078705) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 9; 
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

int RFC_inst2_4::predict_5(float features[]) {
    int classes[2];
    
    if (features[43] <= 8.134891986846924) {
        if (features[13] <= 218.3189697265625) {
            if (features[37] <= 0.031140999868512154) {
                if (features[48] <= 6.008932113647461) {
                    if (features[20] <= 8.289253234863281) {
                        classes[0] = 121; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 0.17219549417495728) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[10] <= 169.4465103149414) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 1; 
        }
    } else {
        if (features[11] <= 0.5609579980373383) {
            if (features[8] <= 2993.076416015625) {
                if (features[7] <= 344.8515625) {
                    classes[0] = 20; 
                    classes[1] = 0; 
                } else {
                    if (features[41] <= 10.280978679656982) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[14] <= -4.470975041389465) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                if (features[0] <= 6966.003173828125) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 7; 
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

int RFC_inst2_4::predict_6(float features[]) {
    int classes[2];
    
    if (features[46] <= 7.271153688430786) {
        if (features[14] <= -6.092526912689209) {
            if (features[20] <= 2.4570194482803345) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[10] <= 400.2080841064453) {
                if (features[50] <= 5.423537969589233) {
                    classes[0] = 127; 
                    classes[1] = 0; 
                } else {
                    if (features[1] <= 7.1628029346466064) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[14] <= 5.633169412612915) {
            if (features[9] <= 0.8001414835453033) {
                classes[0] = 0; 
                classes[1] = 18; 
            } else {
                classes[0] = 9; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 10; 
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

int RFC_inst2_4::predict_7(float features[]) {
    int classes[2];
    
    if (features[48] <= 3.9323045015335083) {
        if (features[35] <= 0.002560500055551529) {
            if (features[31] <= 6.24999993306119e-05) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[8] <= 3843.336181640625) {
                    if (features[46] <= 6.462846994400024) {
                        classes[0] = 127; 
                        classes[1] = 0; 
                    } else {
                        if (features[19] <= 7.868958950042725) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 7118.3115234375) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 2; 
        }
    } else {
        if (features[21] <= 1.3867304921150208) {
            classes[0] = 16; 
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

int RFC_inst2_4::predict_8(float features[]) {
    int classes[2];
    
    if (features[28] <= 428284788736.0) {
        if (features[10] <= 400.2080841064453) {
            if (features[51] <= 7.973275661468506) {
                if (features[23] <= -4.916157960891724) {
                    if (features[48] <= 4.746383428573608) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[49] <= 6.253215312957764) {
                        if (features[8] <= 3801.3699951171875) {
                            classes[0] = 132; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[20] <= 7.605871200561523) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 3; 
        }
    } else {
        if (features[25] <= -0.7694529891014099) {
            classes[0] = 0; 
            classes[1] = 13; 
        } else {
            if (features[8] <= 3396.5814208984375) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
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

int RFC_inst2_4::predict_9(float features[]) {
    int classes[2];
    
    if (features[28] <= 432399974400.0) {
        if (features[46] <= 5.611816883087158) {
            classes[0] = 129; 
            classes[1] = 0; 
        } else {
            if (features[14] <= 4.543086051940918) {
                if (features[43] <= 4.562606573104858) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 10; 
                }
            } else {
                classes[0] = 16; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[27] <= 522.4329376220703) {
            if (features[45] <= 7.089287519454956) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
            }
        } else {
            if (features[34] <= 1587397.5625) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                if (features[12] <= 583.8333435058594) {
                    classes[0] = 1; 
                    classes[1] = 0; 
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

int RFC_inst2_4::predict_10(float features[]) {
    int classes[2];
    
    if (features[46] <= 7.994391679763794) {
        if (features[33] <= 22255.6845703125) {
            if (features[19] <= 14.381144523620605) {
                if (features[46] <= 5.6135334968566895) {
                    if (features[3] <= 0.544563502073288) {
                        if (features[34] <= 742836.4375) {
                            classes[0] = 20; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 108; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[9] <= 0.7816984951496124) {
                        if (features[37] <= 0.007386499783024192) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 1; 
        }
    } else {
        if (features[47] <= 1.2427240014076233) {
            classes[0] = 0; 
            classes[1] = 6; 
        } else {
            if (features[2] <= 1519427.9375) {
                classes[0] = 13; 
                classes[1] = 0; 
            } else {
                if (features[13] <= 199.449462890625) {
                    if (features[32] <= 4924.352294921875) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
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

float RFC_inst2_4::predict (float features[]) {
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

