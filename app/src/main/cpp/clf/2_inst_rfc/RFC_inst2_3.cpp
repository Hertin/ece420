#include "RFC_inst2_3.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_3::predict_0(float features[]) {
    int classes[2];
    
    if (features[15] <= -4.248723983764648) {
        if (features[18] <= 3.36661696434021) {
            if (features[34] <= 1169219.15625) {
                if (features[12] <= 729.0416870117188) {
                    if (features[9] <= 0.8249324858188629) {
                        classes[0] = 0; 
                        classes[1] = 27; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 5; 
            classes[1] = 0; 
        }
    } else {
        if (features[9] <= 0.7884975075721741) {
            if (features[18] <= 0.5108685046434402) {
                if (features[25] <= -1.3528715372085571) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                } else {
                    if (features[10] <= 176.30096435546875) {
                        if (features[47] <= 2.176204025745392) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    } else {
                        if (features[42] <= 2.057356059551239) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[3] <= 0.7291670143604279) {
                    if (features[32] <= 3286.5177001953125) {
                        if (features[2] <= 816248.90625) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[45] <= 3.388761043548584) {
                                if (features[24] <= -4.475876450538635) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 27; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[27] <= 154.49961853027344) {
                        if (features[40] <= 4.255175590515137) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        } else {
            if (features[49] <= 5.389424085617065) {
                classes[0] = 62; 
                classes[1] = 0; 
            } else {
                if (features[28] <= 133064187904.0) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
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

int RFC_inst2_3::predict_1(float features[]) {
    int classes[2];
    
    if (features[42] <= 1.53661048412323) {
        if (features[35] <= 0.00023050000163493678) {
            classes[0] = 3; 
            classes[1] = 0; 
        } else {
            if (features[40] <= 14.399479389190674) {
                classes[0] = 0; 
                classes[1] = 14; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[32] <= 1135.9306640625) {
            if (features[15] <= -5.682743549346924) {
                if (features[34] <= 1451546.1875) {
                    if (features[9] <= 0.813788503408432) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[12] <= 341.3333282470703) {
                    if (features[50] <= 2.4835914373397827) {
                        if (features[1] <= 7.8530988693237305) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    if (features[31] <= 0.00014650000230176374) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[36] <= 1104.0713195800781) {
                            if (features[24] <= -2.6193054914474487) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 18; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 65; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[25] <= -0.7339684963226318) {
                if (features[26] <= 3164163.0) {
                    if (features[48] <= 2.5223940908908844) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    classes[0] = 11; 
                    classes[1] = 0; 
                }
            } else {
                if (features[47] <= 1.7408339977264404) {
                    if (features[24] <= -2.7813425064086914) {
                        if (features[26] <= 2452497.1875) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 13; 
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

int RFC_inst2_3::predict_2(float features[]) {
    int classes[2];
    
    if (features[6] <= 344.6565246582031) {
        if (features[40] <= 42.57338523864746) {
            if (features[42] <= 7.637899160385132) {
                if (features[21] <= -1.630551517009735) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                } else {
                    if (features[41] <= 13.586567401885986) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        if (features[44] <= 3.882124423980713) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 5; 
            }
        } else {
            if (features[42] <= 3.073757529258728) {
                if (features[40] <= 54.927804946899414) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[16] <= -12.040989875793457) {
                    if (features[32] <= 2139.2590942382812) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 14; 
                }
            }
        }
    } else {
        if (features[41] <= 3.601477026939392) {
            if (features[19] <= 7.549106121063232) {
                if (features[28] <= 67519324160.0) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[12] <= 588.4166564941406) {
                        classes[0] = 23; 
                        classes[1] = 0; 
                    } else {
                        if (features[12] <= 758.0833129882812) {
                            if (features[38] <= 7405.746826171875) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 12; 
            }
        } else {
            if (features[22] <= -5.879560470581055) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[2] <= 2318215.75) {
                    if (features[31] <= 0.0002784999960567802) {
                        if (features[17] <= -8.114945888519287) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 67; 
                        classes[1] = 0; 
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

int RFC_inst2_3::predict_3(float features[]) {
    int classes[2];
    
    if (features[13] <= 207.15090942382812) {
        if (features[47] <= 2.3281235694885254) {
            if (features[32] <= 1243.3718872070312) {
                if (features[25] <= -2.180904984474182) {
                    if (features[39] <= 188.32403182983398) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[14] <= 7.041904449462891) {
                        classes[0] = 78; 
                        classes[1] = 0; 
                    } else {
                        if (features[48] <= 0.82310351729393) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[44] <= 4.715621471405029) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[21] <= 0.5797570049762726) {
                if (features[47] <= 2.965127468109131) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[23] <= -3.0897324085235596) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[28] <= 262634012672.0) {
                            if (features[42] <= 3.017451524734497) {
                                if (features[15] <= -3.7216345071792603) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                classes[0] = 16; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[49] <= 4.018629550933838) {
            if (features[32] <= 203.51195526123047) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[35] <= 0.00022449999960372224) {
                    if (features[18] <= 1.263180524110794) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
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

int RFC_inst2_3::predict_4(float features[]) {
    int classes[2];
    
    if (features[2] <= 893662.4375) {
        if (features[9] <= 0.7071880102157593) {
            classes[0] = 4; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 13; 
        }
    } else {
        if (features[8] <= 2334.300537109375) {
            if (features[40] <= 78.57727813720703) {
                classes[0] = 68; 
                classes[1] = 0; 
            } else {
                if (features[47] <= 3.7779641151428223) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[6] <= 393.51043701171875) {
                if (features[45] <= 6.345653533935547) {
                    classes[0] = 0; 
                    classes[1] = 15; 
                } else {
                    if (features[36] <= 4386.650146484375) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[29] <= 0.028114499524235725) {
                    if (features[51] <= 0.6267554759979248) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[23] <= -2.7355130910873413) {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[1] <= 3.9038885831832886) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 44; 
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

int RFC_inst2_3::predict_5(float features[]) {
    int classes[2];
    
    if (features[45] <= 5.791062593460083) {
        if (features[43] <= 3.2430695295333862) {
            if (features[19] <= 7.930891513824463) {
                if (features[23] <= -5.0749499797821045) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 44; 
                    classes[1] = 0; 
                }
            } else {
                if (features[37] <= 0.008377000223845243) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[29] <= 0.0288114994764328) {
                if (features[36] <= 5648.65478515625) {
                    if (features[38] <= 11213.4931640625) {
                        classes[0] = 0; 
                        classes[1] = 19; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[50] <= 2.0410940647125244) {
                    classes[0] = 20; 
                    classes[1] = 0; 
                } else {
                    if (features[20] <= 4.810259580612183) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    }
                }
            }
        }
    } else {
        if (features[26] <= 22395682.0) {
            if (features[42] <= 1.9698269963264465) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[11] <= 0.4537079930305481) {
                    if (features[49] <= 2.342352509498596) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 56; 
                    classes[1] = 0; 
                }
            }
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

int RFC_inst2_3::predict_6(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.8198589980602264) {
        if (features[45] <= 4.484817981719971) {
            if (features[15] <= -3.962764024734497) {
                if (features[39] <= 349.3166198730469) {
                    classes[0] = 0; 
                    classes[1] = 21; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[29] <= 0.018823000602424145) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[26] <= 2607857.625) {
                        if (features[1] <= 6.874039173126221) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[49] <= 5.153620004653931) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            }
        } else {
            if (features[50] <= 1.3862555027008057) {
                if (features[31] <= 0.0006144999933894724) {
                    if (features[5] <= 0.28915849328041077) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[1] <= 8.877559661865234) {
                    if (features[18] <= 3.3406405448913574) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[7] <= 264.5036315917969) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    if (features[41] <= 1.9702845215797424) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 28; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[13] <= 209.66070556640625) {
            classes[0] = 62; 
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

int RFC_inst2_3::predict_7(float features[]) {
    int classes[2];
    
    if (features[12] <= 380.1666717529297) {
        if (features[15] <= -0.5145815033465624) {
            if (features[23] <= -3.6260745525360107) {
                classes[0] = 0; 
                classes[1] = 10; 
            } else {
                if (features[32] <= 624.2181091308594) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[47] <= 2.1906285285949707) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            }
        } else {
            if (features[29] <= 0.01375999953597784) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 8; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[13] <= 198.0200958251953) {
            if (features[40] <= 41.503767013549805) {
                classes[0] = 70; 
                classes[1] = 0; 
            } else {
                if (features[25] <= -0.05683450028300285) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    if (features[51] <= 3.1100471019744873) {
                        if (features[19] <= 9.462404727935791) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            }
        } else {
            if (features[3] <= 0.6885550022125244) {
                if (features[48] <= 5.769906997680664) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[42] <= 1.5464835166931152) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[16] <= -13.065345764160156) {
                        if (features[9] <= 0.6566869914531708) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[21] <= 0.21064900420606136) {
                            if (features[34] <= 197323.40625) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[6] <= 399.2557373046875) {
                                if (features[15] <= -4.906141519546509) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 30; 
                                classes[1] = 0; 
                            }
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

int RFC_inst2_3::predict_8(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.8082005083560944) {
        if (features[27] <= 134.7896270751953) {
            if (features[6] <= 449.50840759277344) {
                if (features[45] <= 4.867312908172607) {
                    classes[0] = 0; 
                    classes[1] = 17; 
                } else {
                    if (features[31] <= 0.0003775000077439472) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        } else {
            if (features[39] <= 253.26738739013672) {
                if (features[33] <= 3930.3173828125) {
                    if (features[3] <= 0.7856909930706024) {
                        if (features[22] <= -4.025990962982178) {
                            if (features[48] <= 2.161969542503357) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    if (features[0] <= 6173.578369140625) {
                        if (features[47] <= 2.12678599357605) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        classes[0] = 33; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[44] <= 7.4955360889434814) {
                    if (features[47] <= 3.195733904838562) {
                        classes[0] = 10; 
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
    } else {
        classes[0] = 77; 
        classes[1] = 0; 
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
    
    if (features[29] <= 0.018823000602424145) {
        if (features[9] <= 0.8087175190448761) {
            classes[0] = 0; 
            classes[1] = 18; 
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    } else {
        if (features[14] <= 5.542941570281982) {
            if (features[15] <= -5.952923536300659) {
                if (features[36] <= 4948.938720703125) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[43] <= 13.7262601852417) {
                    if (features[26] <= 688082.953125) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 74; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[46] <= 4.979942083358765) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        } else {
            if (features[49] <= 1.7925159931182861) {
                if (features[23] <= -4.144600510597229) {
                    if (features[2] <= 1541655.5625) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[28] <= 59085844480.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 19; 
                    }
                }
            } else {
                if (features[2] <= 937410.09375) {
                    if (features[7] <= 324.81910705566406) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[34] <= 433875.375) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 0.5526635050773621) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[43] <= 5.380037069320679) {
                        classes[0] = 18; 
                        classes[1] = 0; 
                    } else {
                        if (features[6] <= 342.4536437988281) {
                            if (features[51] <= 4.437583327293396) {
                                if (features[47] <= 7.547051906585693) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 8; 
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

int RFC_inst2_3::predict_10(float features[]) {
    int classes[2];
    
    if (features[15] <= -4.1048970222473145) {
        if (features[14] <= 4.863018989562988) {
            if (features[24] <= -0.6331380158662796) {
                if (features[46] <= 1.3704450130462646) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 23; 
        }
    } else {
        if (features[11] <= 0.45704200863838196) {
            if (features[12] <= 415.0833282470703) {
                if (features[33] <= 8147.59716796875) {
                    if (features[46] <= 2.511922001838684) {
                        if (features[41] <= 11.783731460571289) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[1] <= 5.6482319831848145) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    }
                } else {
                    classes[0] = 12; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
            }
        } else {
            if (features[38] <= 2396.90283203125) {
                if (features[2] <= 1442616.75) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[38] <= 40851.787109375) {
                    if (features[25] <= -2.690106511116028) {
                        if (features[12] <= 521.7916564941406) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 99; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[11] <= 0.6539165079593658) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
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

