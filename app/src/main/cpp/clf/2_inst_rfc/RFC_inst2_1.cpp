#include "RFC_inst2_1.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_1::predict_0(float features[]) {
    int classes[2];
    
    if (features[49] <= 3.2613295316696167) {
        if (features[51] <= 1.125963032245636) {
            if (features[25] <= -3.8934595584869385) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 52; 
            }
        } else {
            if (features[16] <= -9.65267276763916) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                if (features[23] <= -3.487483501434326) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 10; 
                }
            }
        }
    } else {
        if (features[26] <= 6270134.75) {
            classes[0] = 37; 
            classes[1] = 0; 
        } else {
            if (features[15] <= -0.359143003821373) {
                classes[0] = 0; 
                classes[1] = 8; 
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

int RFC_inst2_1::predict_1(float features[]) {
    int classes[2];
    
    if (features[51] <= 1.3945459723472595) {
        if (features[15] <= -0.8521279990673065) {
            if (features[27] <= 1238.9939270019531) {
                classes[0] = 0; 
                classes[1] = 60; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        } else {
            if (features[43] <= 2.3858864307403564) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                classes[0] = 6; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[20] <= 8.420307159423828) {
            if (features[43] <= 3.3176865577697754) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[5] <= 0.11768800020217896) {
                    if (features[3] <= 0.5300379991531372) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 34; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[37] <= 0.0103345001116395) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                classes[0] = 5; 
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

int RFC_inst2_1::predict_2(float features[]) {
    int classes[2];
    
    if (features[51] <= 0.9197290241718292) {
        if (features[6] <= 330.7889099121094) {
            classes[0] = 1; 
            classes[1] = 0; 
        } else {
            if (features[16] <= -11.101887226104736) {
                if (features[6] <= 402.1944885253906) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 57; 
            }
        }
    } else {
        if (features[51] <= 6.166267395019531) {
            if (features[36] <= 7776.203857421875) {
                if (features[39] <= 183.45089721679688) {
                    classes[0] = 28; 
                    classes[1] = 0; 
                } else {
                    if (features[31] <= 0.0005575000104727224) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[30] <= 4.6999999540275894e-05) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[3] <= 0.6960495114326477) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                }
            } else {
                if (features[39] <= 438.76483154296875) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[14] <= -1.1617174744606018) {
                if (features[6] <= 428.7565612792969) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
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

int RFC_inst2_1::predict_3(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7747920155525208) {
        if (features[41] <= 3.5564050674438477) {
            if (features[45] <= 3.4626054763793945) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[9] <= 0.7662490010261536) {
                classes[0] = 43; 
                classes[1] = 0; 
            } else {
                if (features[19] <= 9.992364883422852) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    } else {
        if (features[22] <= -3.403312563896179) {
            if (features[6] <= 401.9066925048828) {
                if (features[9] <= 0.7908969819545746) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[50] <= 1.9561644196510315) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 50; 
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

int RFC_inst2_1::predict_4(float features[]) {
    int classes[2];
    
    if (features[50] <= 1.1243619918823242) {
        if (features[23] <= -5.139395475387573) {
            if (features[39] <= 466.89488983154297) {
                classes[0] = 7; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[1] <= 5.485517978668213) {
                if (features[38] <= 5778.357666015625) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 35; 
            }
        }
    } else {
        if (features[9] <= 0.8175309896469116) {
            if (features[28] <= 654736850944.0) {
                if (features[9] <= 0.7611985206604004) {
                    classes[0] = 40; 
                    classes[1] = 0; 
                } else {
                    if (features[20] <= 7.0628204345703125) {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[31] <= 0.0028699999675154686) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
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

int RFC_inst2_1::predict_5(float features[]) {
    int classes[2];
    
    if (features[49] <= 5.136445045471191) {
        if (features[47] <= 1.6647379994392395) {
            if (features[9] <= 0.75484898686409) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[33] <= 3315.06201171875) {
                    if (features[47] <= 1.1046909987926483) {
                        classes[0] = 0; 
                        classes[1] = 10; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 50; 
                }
            }
        } else {
            if (features[4] <= 10.595508575439453) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[15] <= -3.5257725715637207) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 18; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[20] <= 9.583086013793945) {
            classes[0] = 26; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 2; 
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

int RFC_inst2_1::predict_6(float features[]) {
    int classes[2];
    
    if (features[51] <= 0.9197290241718292) {
        if (features[41] <= 7.703960657119751) {
            if (features[16] <= -11.181222438812256) {
                if (features[23] <= -6.506798505783081) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 56; 
            }
        } else {
            if (features[49] <= 2.1075449883937836) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[0] <= 8934.634765625) {
            if (features[4] <= 10.928159236907959) {
                if (features[15] <= -0.5358909964561462) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 31; 
                classes[1] = 0; 
            }
        } else {
            if (features[21] <= 1.4041775166988373) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[9] <= 0.7049995064735413) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 14; 
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

int RFC_inst2_1::predict_7(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7730284929275513) {
        if (features[16] <= -12.689281463623047) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            if (features[41] <= 2.3604955077171326) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 39; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[1] <= 5.581304550170898) {
            if (features[35] <= 0.00025100000493694097) {
                classes[0] = 0; 
                classes[1] = 19; 
            } else {
                classes[0] = 12; 
                classes[1] = 0; 
            }
        } else {
            if (features[43] <= 7.74782657623291) {
                if (features[50] <= 2.823581039905548) {
                    classes[0] = 0; 
                    classes[1] = 39; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[46] <= 4.347988486289978) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
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

int RFC_inst2_1::predict_8(float features[]) {
    int classes[2];
    
    if (features[49] <= 5.859280347824097) {
        if (features[23] <= -5.619610071182251) {
            classes[0] = 6; 
            classes[1] = 0; 
        } else {
            if (features[6] <= 375.52149963378906) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[39] <= 106.39376831054688) {
                    if (features[24] <= -3.372323989868164) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[16] <= -9.51977252960205) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[18] <= -1.3270370364189148) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 18; 
                            }
                        }
                    }
                } else {
                    if (features[18] <= 3.7689679861068726) {
                        classes[0] = 0; 
                        classes[1] = 57; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[38] <= 60783.12109375) {
            classes[0] = 26; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 1; 
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

int RFC_inst2_1::predict_9(float features[]) {
    int classes[2];
    
    if (features[51] <= 1.125963032245636) {
        if (features[50] <= 2.270208477973938) {
            if (features[36] <= 5623.1416015625) {
                classes[0] = 0; 
                classes[1] = 48; 
            } else {
                if (features[10] <= 240.7986602783203) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[1] <= 5.578914284706116) {
                        classes[0] = 0; 
                        classes[1] = 1; 
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
    } else {
        if (features[4] <= 10.928603172302246) {
            if (features[39] <= 122.22546005249023) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
            }
        } else {
            if (features[18] <= 2.47434401512146) {
                classes[0] = 26; 
                classes[1] = 0; 
            } else {
                if (features[0] <= 9359.1904296875) {
                    if (features[2] <= 2004471.1875) {
                        if (features[4] <= 131.8652458190918) {
                            classes[0] = 16; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
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

int RFC_inst2_1::predict_10(float features[]) {
    int classes[2];
    
    if (features[51] <= 1.125963032245636) {
        if (features[8] <= 1380.5921020507812) {
            classes[0] = 2; 
            classes[1] = 0; 
        } else {
            if (features[24] <= -0.743031021207571) {
                if (features[1] <= 13.21375036239624) {
                    classes[0] = 0; 
                    classes[1] = 55; 
                } else {
                    if (features[45] <= 3.3124455213546753) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[10] <= 202.34967041015625) {
            classes[0] = 32; 
            classes[1] = 0; 
        } else {
            if (features[41] <= 6.745232582092285) {
                if (features[4] <= 111.46601295471191) {
                    if (features[14] <= 2.509748935699463) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        if (features[6] <= 403.52362060546875) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[34] <= 1527293.125) {
                    classes[0] = 10; 
                    classes[1] = 0; 
                } else {
                    if (features[37] <= 0.0425075008533895) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
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

float RFC_inst2_1::predict (float features[]) {
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

