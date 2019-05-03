#include "RFC_inst2_2.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_2::predict_0(float features[]) {
    int classes[2];
    
    if (features[6] <= 384.72711181640625) {
        if (features[46] <= 5.497612476348877) {
            if (features[40] <= 51.607574462890625) {
                if (features[35] <= 0.00019149999570799991) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[47] <= 16.60387372970581) {
                        if (features[10] <= 400.2080841064453) {
                            classes[0] = 0; 
                            classes[1] = 24; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[16] <= -11.555452346801758) {
                    if (features[17] <= -6.320388555526733) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 7; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[24] <= -2.293891966342926) {
                if (features[18] <= 1.56204754114151) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                classes[0] = 6; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[42] <= 4.086607933044434) {
            if (features[49] <= 2.854557514190674) {
                if (features[32] <= 167.06273651123047) {
                    if (features[46] <= 4.166127562522888) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 60; 
                    classes[1] = 0; 
                }
            } else {
                if (features[37] <= 0.0073090000078082085) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[23] <= -1.829906940460205) {
                if (features[48] <= 4.200146913528442) {
                    if (features[11] <= 0.5615000128746033) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[45] <= 5.202649354934692) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        }
                    }
                } else {
                    classes[0] = 10; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 14; 
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

int RFC_inst2_2::predict_1(float features[]) {
    int classes[2];
    
    if (features[33] <= 5562.907470703125) {
        if (features[21] <= -3.7264790534973145) {
            classes[0] = 0; 
            classes[1] = 2; 
        } else {
            if (features[2] <= 1304440.0625) {
                if (features[24] <= -2.7720375061035156) {
                    if (features[13] <= 191.02389526367188) {
                        if (features[45] <= 2.2874239683151245) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                } else {
                    classes[0] = 11; 
                    classes[1] = 0; 
                }
            } else {
                if (features[35] <= 0.000575500016566366) {
                    classes[0] = 57; 
                    classes[1] = 0; 
                } else {
                    if (features[42] <= 4.618175029754639) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[51] <= 1.7538760602474213) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[32] <= 2743.15185546875) {
            if (features[33] <= 9782.146484375) {
                if (features[41] <= 5.654579401016235) {
                    classes[0] = 15; 
                    classes[1] = 0; 
                } else {
                    if (features[35] <= 0.0009700000227894634) {
                        if (features[17] <= -5.587212562561035) {
                            if (features[28] <= 137030516736.0) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                if (features[28] <= 218403405824.0) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    if (features[1] <= 16.68313503265381) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        if (features[48] <= 1.1867905259132385) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[46] <= 12.694355487823486) {
                    if (features[2] <= 1940743.0625) {
                        classes[0] = 0; 
                        classes[1] = 17; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
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

int RFC_inst2_2::predict_2(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.6457079946994781) {
        if (features[15] <= -0.9611180126667023) {
            if (features[15] <= -4.248723983764648) {
                classes[0] = 22; 
                classes[1] = 0; 
            } else {
                if (features[40] <= 40.185110092163086) {
                    if (features[31] <= 0.000255000006291084) {
                        if (features[19] <= 7.285720109939575) {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[1] <= 12.610799789428711) {
                            classes[0] = 0; 
                            classes[1] = 20; 
                        } else {
                            if (features[23] <= -3.0130059719085693) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[12] <= 329.6666564941406) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[21] <= -2.295672059059143) {
                            if (features[26] <= 3159980.125) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[17] <= -10.832446575164795) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[1] <= 4.0924694538116455) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[9] <= 0.8309879899024963) {
                        classes[0] = 0; 
                        classes[1] = 28; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[49] <= 0.7407455146312714) {
            if (features[36] <= 1950.4619140625) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                if (features[45] <= 5.202649354934692) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[33] <= 6658.839599609375) {
                classes[0] = 47; 
                classes[1] = 0; 
            } else {
                if (features[14] <= 1.9092729985713959) {
                    classes[0] = 9; 
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

int RFC_inst2_2::predict_3(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.5862080156803131) {
        if (features[0] <= 4930.633056640625) {
            if (features[41] <= 2.4843815565109253) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 18; 
                classes[1] = 0; 
            }
        } else {
            if (features[7] <= 360.21229553222656) {
                if (features[50] <= 1.3706289529800415) {
                    if (features[10] <= 272.8386688232422) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[25] <= -0.5533339977264404) {
                        if (features[20] <= 4.8626720905303955) {
                            if (features[31] <= 0.0012875000247731805) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        }
                    } else {
                        if (features[12] <= 353.4583435058594) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[2] <= 1285914.625) {
                                if (features[29] <= 0.05179549939930439) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            } else {
                if (features[44] <= 4.092865467071533) {
                    if (features[32] <= 582.7969818115234) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 10; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[23] <= -4.932600498199463) {
            if (features[8] <= 2777.9332275390625) {
                if (features[45] <= 3.2830915451049805) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
            }
        } else {
            if (features[2] <= 1271533.5) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[36] <= 7936.385498046875) {
                    if (features[6] <= 384.6178741455078) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 84; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[12] <= 558.625) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 4; 
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

int RFC_inst2_2::predict_4(float features[]) {
    int classes[2];
    
    if (features[8] <= 2405.7454833984375) {
        if (features[10] <= 167.25885772705078) {
            if (features[31] <= 0.0004535000043688342) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[25] <= -2.8791425228118896) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[27] <= 569.3339080810547) {
                        classes[0] = 21; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[49] <= 2.120641589164734) {
                if (features[43] <= 1.7200305461883545) {
                    if (features[6] <= 294.3786926269531) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[37] <= 0.005649000173434615) {
                        if (features[28] <= 144695623680.0) {
                            if (features[18] <= 1.2915349900722504) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[50] <= 0.3694175034761429) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[38] <= 1401.8577270507812) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[35] <= 0.00010799999654409476) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[40] <= 60.897865295410156) {
                                classes[0] = 0; 
                                classes[1] = 25; 
                            } else {
                                if (features[38] <= 11418.6630859375) {
                                    classes[0] = 2; 
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
        }
    } else {
        if (features[13] <= 214.7076187133789) {
            if (features[42] <= 6.183852434158325) {
                if (features[48] <= 8.616821765899658) {
                    classes[0] = 64; 
                    classes[1] = 0; 
                } else {
                    if (features[5] <= 0.24399100244045258) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[46] <= 6.650938987731934) {
                    if (features[3] <= 0.5931594967842102) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                } else {
                    if (features[1] <= 10.727612018585205) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[10] <= 139.0526828765869) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 5; 
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
    
    if (features[2] <= 1498876.0) {
        if (features[3] <= 0.5033700168132782) {
            if (features[48] <= 1.3310660123825073) {
                if (features[9] <= 0.8719624876976013) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[37] <= 0.01936499960720539) {
                    classes[0] = 14; 
                    classes[1] = 0; 
                } else {
                    if (features[11] <= 0.47316649556159973) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[45] <= 4.484817981719971) {
                if (features[16] <= -9.555778503417969) {
                    if (features[22] <= -1.7437255382537842) {
                        if (features[36] <= 3479.279296875) {
                            if (features[3] <= 0.8031599819660187) {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[12] <= 361.5416564941406) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[29] <= 0.06539350003004074) {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[16] <= -9.898760795593262) {
                    if (features[18] <= 0.8242494910955429) {
                        if (features[25] <= -1.5765720009803772) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 26; 
                    }
                } else {
                    if (features[9] <= 0.8457959890365601) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        }
    } else {
        if (features[21] <= 1.616046965122223) {
            if (features[11] <= 0.6745834946632385) {
                if (features[18] <= 1.7965629696846008) {
                    if (features[41] <= 6.939239263534546) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 17; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 42; 
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

int RFC_inst2_2::predict_6(float features[]) {
    int classes[2];
    
    if (features[33] <= 4243.4267578125) {
        if (features[45] <= 6.738659620285034) {
            if (features[5] <= 0.21391800045967102) {
                if (features[28] <= 60375070720.0) {
                    if (features[13] <= 195.37979888916016) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 51; 
                    classes[1] = 0; 
                }
            } else {
                if (features[13] <= 214.39130401611328) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[49] <= 0.6697575151920319) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[9] <= 0.7041795253753662) {
            if (features[15] <= -3.014528512954712) {
                if (features[23] <= -2.696444034576416) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 22; 
            }
        } else {
            if (features[9] <= 0.8084544837474823) {
                if (features[15] <= -0.9304989874362946) {
                    if (features[45] <= 1.5336329936981201) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 32; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[48] <= 4.635777950286865) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[23] <= -4.758224964141846) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[13] <= 186.25698852539062) {
                        if (features[39] <= 671.5550537109375) {
                            if (features[34] <= 237788.5) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[0] <= 7389.1806640625) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
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
                        if (features[39] <= 567.7582550048828) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
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

int RFC_inst2_2::predict_7(float features[]) {
    int classes[2];
    
    if (features[37] <= 0.005161999957635999) {
        if (features[38] <= 10342.232421875) {
            if (features[8] <= 2158.3038330078125) {
                if (features[26] <= 4709024.875) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 62; 
                classes[1] = 0; 
            }
        } else {
            if (features[28] <= 113505751040.0) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[40] <= 8.956133365631104) {
                    if (features[5] <= 0.13249550014734268) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 9; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[5] <= 0.23235449939966202) {
            if (features[16] <= -11.930270671844482) {
                if (features[13] <= 179.1999282836914) {
                    if (features[36] <= 9120.462890625) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[22] <= -1.5751910209655762) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        if (features[18] <= 2.305030047893524) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[42] <= 6.183852434158325) {
                    if (features[49] <= 8.465289115905762) {
                        if (features[38] <= 1744.24658203125) {
                            if (features[43] <= 8.288629591464996) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[9] <= 0.8536694943904877) {
                                classes[0] = 28; 
                                classes[1] = 0; 
                            } else {
                                if (features[34] <= 844062.34375) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[40] <= 25.487919807434082) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[12] <= 328.6666717529297) {
                if (features[47] <= 0.9412359893321991) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[33] <= 9586.00244140625) {
                    classes[0] = 0; 
                    classes[1] = 12; 
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

int RFC_inst2_2::predict_8(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.5903330147266388) {
        if (features[47] <= 2.2884055376052856) {
            if (features[23] <= -3.813603401184082) {
                if (features[29] <= 0.04526800103485584) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 8; 
                    classes[1] = 0; 
                }
            } else {
                if (features[19] <= 4.46169900894165) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[46] <= 7.921526193618774) {
                        if (features[23] <= -2.2092570066452026) {
                            classes[0] = 0; 
                            classes[1] = 26; 
                        } else {
                            if (features[31] <= 0.0004954999967594631) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    } else {
                        if (features[48] <= 3.537827968597412) {
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
            if (features[20] <= 5.207716941833496) {
                classes[0] = 0; 
                classes[1] = 8; 
            } else {
                if (features[18] <= 2.413809061050415) {
                    if (features[5] <= 0.24087749421596527) {
                        if (features[26] <= 4641108.25) {
                            classes[0] = 33; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 6509.0537109375) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        }
    } else {
        if (features[6] <= 384.3008728027344) {
            classes[0] = 0; 
            classes[1] = 1; 
        } else {
            if (features[26] <= 3999140.375) {
                classes[0] = 55; 
                classes[1] = 0; 
            } else {
                if (features[5] <= 0.13539300113916397) {
                    if (features[45] <= 3.7780014276504517) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    classes[0] = 16; 
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

int RFC_inst2_2::predict_9(float features[]) {
    int classes[2];
    
    if (features[15] <= -3.4904614686965942) {
        if (features[21] <= -4.480986952781677) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            classes[0] = 52; 
            classes[1] = 0; 
        }
    } else {
        if (features[10] <= 86.59513854980469) {
            classes[0] = 22; 
            classes[1] = 0; 
        } else {
            if (features[48] <= 1.6642204523086548) {
                if (features[42] <= 2.7597360610961914) {
                    if (features[20] <= 10.145908832550049) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 18; 
                }
            } else {
                if (features[11] <= 0.6683749854564667) {
                    if (features[12] <= 515.7500152587891) {
                        if (features[7] <= 335.22283935546875) {
                            if (features[34] <= 1231368.625) {
                                if (features[34] <= 476732.359375) {
                                    if (features[48] <= 8.698789596557617) {
                                        if (features[0] <= 9258.6005859375) {
                                            if (features[34] <= 158125.2734375) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 10; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[23] <= -5.198577880859375) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[8] <= 2152.5) {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[2] <= 1296464.9375) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    }
                } else {
                    classes[0] = 16; 
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

int RFC_inst2_2::predict_10(float features[]) {
    int classes[2];
    
    if (features[44] <= 2.2955280542373657) {
        if (features[0] <= 5859.504150390625) {
            if (features[34] <= 384802.078125) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[40] <= 13.1591477394104) {
                classes[0] = 44; 
                classes[1] = 0; 
            } else {
                if (features[7] <= 266.06446075439453) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[8] <= 2563.7325439453125) {
            if (features[12] <= 452.6666717529297) {
                if (features[33] <= 8743.9970703125) {
                    if (features[37] <= 0.007517500082030892) {
                        if (features[0] <= 7165.747802734375) {
                            if (features[44] <= 8.562578201293945) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[7] <= 281.3499755859375) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[26] <= 4641108.25) {
                                if (features[15] <= -1.4791350662708282) {
                                    classes[0] = 20; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[21] <= -0.51807901263237) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[7] <= 396.3476867675781) {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[44] <= 2.438714027404785) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[33] <= 11230.6455078125) {
                        classes[0] = 20; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 0.11371149867773056) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[47] <= 10.32828140258789) {
                if (features[34] <= 355268.78125) {
                    if (features[47] <= 1.6895554661750793) {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    } else {
                        if (features[18] <= 2.73839408159256) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 25; 
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

