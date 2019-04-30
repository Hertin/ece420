#include "RFC_inst2_0.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_0::predict_0(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7412970066070557) {
        classes[0] = 32; 
        classes[1] = 0; 
    } else {
        if (features[28] <= 159639011328.0) {
            if (features[8] <= 1663.1470336914062) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[38] <= 2704.20458984375) {
                    if (features[15] <= -4.187235474586487) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 15; 
                }
            }
        } else {
            if (features[48] <= 1.5555700063705444) {
                if (features[4] <= 8.280143737792969) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[41] <= 5.290342569351196) {
                        classes[0] = 26; 
                        classes[1] = 0; 
                    } else {
                        if (features[41] <= 5.592666387557983) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[50] <= 1.8320980072021484) {
                    if (features[26] <= 2050397.0625) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                } else {
                    if (features[33] <= 4608.859130859375) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 16; 
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

int RFC_inst2_0::predict_1(float features[]) {
    int classes[2];
    
    if (features[44] <= 5.399400949478149) {
        if (features[24] <= -2.3227975368499756) {
            if (features[16] <= -8.133124351501465) {
                if (features[18] <= 2.1638875007629395) {
                    if (features[21] <= 0.8948644995689392) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[44] <= 2.7300864458084106) {
                        if (features[9] <= 0.7959789931774139) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[33] <= 2384.19970703125) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        } else {
            if (features[33] <= 14743.15087890625) {
                if (features[20] <= 3.8798084259033203) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= 365.5) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 41; 
                    }
                }
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[36] <= 1507.5706176757812) {
            classes[0] = 0; 
            classes[1] = 2; 
        } else {
            if (features[2] <= 723940.34375) {
                if (features[33] <= 11855.2705078125) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 30; 
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

int RFC_inst2_0::predict_2(float features[]) {
    int classes[2];
    
    if (features[50] <= 1.5741894841194153) {
        if (features[24] <= -2.804832935333252) {
            if (features[35] <= 0.0002854999911505729) {
                if (features[6] <= 400.6191864013672) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 10; 
                classes[1] = 0; 
            }
        } else {
            if (features[20] <= 5.4887285232543945) {
                if (features[51] <= 1.1778925061225891) {
                    classes[0] = 13; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[37] <= 0.0027405000291764736) {
                    if (features[4] <= 32.04918384552002) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 28; 
                }
            }
        }
    } else {
        if (features[32] <= 121.41454315185547) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            if (features[22] <= -0.5392674952745438) {
                if (features[14] <= -9.564626693725586) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 48; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
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

int RFC_inst2_0::predict_3(float features[]) {
    int classes[2];
    
    if (features[42] <= 4.265583038330078) {
        if (features[38] <= 1998.8057250976562) {
            classes[0] = 6; 
            classes[1] = 0; 
        } else {
            if (features[7] <= 191.3727264404297) {
                classes[0] = 8; 
                classes[1] = 0; 
            } else {
                if (features[7] <= 379.15899658203125) {
                    if (features[4] <= 107.16004943847656) {
                        if (features[9] <= 0.8661960065364838) {
                            classes[0] = 0; 
                            classes[1] = 31; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[8] <= 2648.3330078125) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        }
    } else {
        if (features[49] <= 4.370054006576538) {
            if (features[45] <= 12.267132759094238) {
                if (features[49] <= 2.3114370107650757) {
                    if (features[48] <= 1.8994525074958801) {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    } else {
                        if (features[22] <= -3.6773115396499634) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
            }
        } else {
            classes[0] = 37; 
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

int RFC_inst2_0::predict_4(float features[]) {
    int classes[2];
    
    if (features[42] <= 4.653823614120483) {
        if (features[22] <= -1.4173409938812256) {
            if (features[19] <= 7.716769456863403) {
                if (features[3] <= 0.5501440167427063) {
                    if (features[1] <= 3.4552249908447266) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[17] <= -4.405094623565674) {
                        classes[0] = 0; 
                        classes[1] = 34; 
                    } else {
                        if (features[10] <= 235.75969696044922) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[44] <= 2.3495655059814453) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[29] <= 0.0372685007750988) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[20] <= 4.2924439907073975) {
                classes[0] = 7; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    } else {
        if (features[10] <= 96.52899169921875) {
            classes[0] = 0; 
            classes[1] = 2; 
        } else {
            if (features[50] <= 0.8983699977397919) {
                if (features[6] <= 387.33221435546875) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            } else {
                if (features[2] <= 1254687.25) {
                    if (features[14] <= 5.522805452346802) {
                        if (features[49] <= 1.2843299806118011) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 34; 
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

int RFC_inst2_0::predict_5(float features[]) {
    int classes[2];
    
    if (features[17] <= -9.02221155166626) {
        classes[0] = 22; 
        classes[1] = 0; 
    } else {
        if (features[0] <= 9507.1044921875) {
            if (features[49] <= 4.370054006576538) {
                if (features[38] <= 3708.5277099609375) {
                    if (features[22] <= -2.7007964849472046) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    if (features[20] <= 4.039297938346863) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[32] <= 121.754638671875) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[39] <= 296.4448547363281) {
                                classes[0] = 0; 
                                classes[1] = 37; 
                            } else {
                                if (features[44] <= 4.269667387008667) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[42] <= 3.851912021636963) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[10] <= 96.52899169921875) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[15] <= -0.10551749682053924) {
                if (features[29] <= 0.06164400093257427) {
                    classes[0] = 25; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
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

int RFC_inst2_0::predict_6(float features[]) {
    int classes[2];
    
    if (features[20] <= 4.309197425842285) {
        if (features[1] <= 6.728248357772827) {
            if (features[13] <= 204.29671478271484) {
                classes[0] = 7; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            classes[0] = 24; 
            classes[1] = 0; 
        }
    } else {
        if (features[44] <= 3.463111996650696) {
            if (features[24] <= -2.9140520095825195) {
                if (features[0] <= 7961.8984375) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 33; 
            }
        } else {
            if (features[21] <= 2.8717739582061768) {
                if (features[49] <= 5.098409414291382) {
                    if (features[33] <= 6006.451171875) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        if (features[32] <= 686.5833435058594) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                } else {
                    classes[0] = 9; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 22; 
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

int RFC_inst2_0::predict_7(float features[]) {
    int classes[2];
    
    if (features[23] <= -3.30708646774292) {
        if (features[42] <= 4.930046558380127) {
            if (features[4] <= 68.92980766296387) {
                classes[0] = 0; 
                classes[1] = 23; 
            } else {
                classes[0] = 6; 
                classes[1] = 0; 
            }
        } else {
            if (features[20] <= 10.745119094848633) {
                if (features[50] <= 0.610370010137558) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 12; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        }
    } else {
        if (features[7] <= 288.28684997558594) {
            if (features[16] <= -7.18873405456543) {
                if (features[43] <= 4.689391613006592) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[19] <= 5.163952946662903) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 10; 
                classes[1] = 0; 
            }
        } else {
            if (features[19] <= 5.606702089309692) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[29] <= 0.06261599808931351) {
                    classes[0] = 38; 
                    classes[1] = 0; 
                } else {
                    if (features[15] <= -1.7439414858818054) {
                        classes[0] = 3; 
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

int RFC_inst2_0::predict_8(float features[]) {
    int classes[2];
    
    if (features[19] <= 5.592535495758057) {
        if (features[50] <= 0.9625554978847504) {
            if (features[22] <= -1.7869634628295898) {
                if (features[19] <= 1.1236690357327461) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 23; 
                }
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        } else {
            if (features[10] <= 185.51641845703125) {
                classes[0] = 9; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    } else {
        if (features[22] <= -4.345165967941284) {
            if (features[51] <= 1.1752520203590393) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[35] <= 0.0010795000125654042) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[26] <= 1700903.25) {
                if (features[15] <= -2.37738299369812) {
                    if (features[28] <= 187861254144.0) {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[36] <= 3184.2733154296875) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[1] <= 24.37231159210205) {
                    if (features[11] <= 0.7023334801197052) {
                        classes[0] = 41; 
                        classes[1] = 0; 
                    } else {
                        if (features[26] <= 3225108.625) {
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

int RFC_inst2_0::predict_9(float features[]) {
    int classes[2];
    
    if (features[42] <= 4.912858963012695) {
        if (features[36] <= 2141.2691650390625) {
            if (features[23] <= -2.2209490537643433) {
                if (features[6] <= 435.51316833496094) {
                    classes[0] = 18; 
                    classes[1] = 0; 
                } else {
                    if (features[33] <= 1542.2937927246094) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[4] <= 121.90324974060059) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[6] <= 443.3978729248047) {
                if (features[30] <= 1.499999996212864e-06) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[19] <= 8.785349369049072) {
                        if (features[47] <= 0.4390370100736618) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 34; 
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[12] <= 484.75) {
            if (features[39] <= 347.16395568847656) {
                if (features[28] <= 321148862464.0) {
                    classes[0] = 13; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[20] <= 6.325719118118286) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        } else {
            if (features[14] <= -10.488163471221924) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 33; 
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

int RFC_inst2_0::predict_10(float features[]) {
    int classes[2];
    
    if (features[10] <= 174.9260711669922) {
        if (features[22] <= -3.0646779537200928) {
            if (features[6] <= 466.181396484375) {
                classes[0] = 10; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            classes[0] = 32; 
            classes[1] = 0; 
        }
    } else {
        if (features[7] <= 321.13067626953125) {
            if (features[35] <= 0.00012000000060652383) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 29; 
            }
        } else {
            if (features[37] <= 0.0021880000131204724) {
                if (features[31] <= 0.0005049999745097011) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[22] <= -3.184535503387451) {
                    if (features[20] <= 8.586334705352783) {
                        if (features[37] <= 0.015830999705940485) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[41] <= 2.8180729150772095) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[39] <= 454.85736083984375) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[41] <= 6.321049451828003) {
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

float RFC_inst2_0::predict (float features[]) {
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

