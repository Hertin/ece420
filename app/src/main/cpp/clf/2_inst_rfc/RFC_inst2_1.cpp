#include "RFC_inst2_1.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_1::predict_0(float features[]) {
    int classes[2];
    
    if (features[5] <= 0.17337050288915634) {
        if (features[48] <= 3.5125625133514404) {
            if (features[12] <= 377.25) {
                classes[0] = 7; 
                classes[1] = 0; 
            } else {
                if (features[6] <= 348.6157989501953) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[23] <= -5.201233625411987) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[51] <= 3.1553584337234497) {
                            if (features[50] <= 1.2703759670257568) {
                                classes[0] = 0; 
                                classes[1] = 54; 
                            } else {
                                if (features[9] <= 0.8233354985713959) {
                                    if (features[35] <= 0.0008019999950192869) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                }
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[39] <= 714.4198913574219) {
                if (features[14] <= -2.5254350304603577) {
                    if (features[37] <= 0.001823499915190041) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 13; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 5; 
            }
        }
    } else {
        if (features[48] <= 0.7639424800872803) {
            classes[0] = 0; 
            classes[1] = 5; 
        } else {
            if (features[40] <= 4.011439085006714) {
                if (features[41] <= 2.290732502937317) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[6] <= 387.4541778564453) {
                    classes[0] = 47; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= 511.4166717529297) {
                        if (features[31] <= 0.00023350000265054405) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 11; 
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

int RFC_inst2_1::predict_1(float features[]) {
    int classes[2];
    
    if (features[5] <= 0.11561200022697449) {
        if (features[24] <= -1.297669529914856) {
            classes[0] = 0; 
            classes[1] = 35; 
        } else {
            if (features[10] <= 65.71248435974121) {
                classes[0] = 0; 
                classes[1] = 5; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[2] <= 1474356.25) {
            classes[0] = 60; 
            classes[1] = 0; 
        } else {
            if (features[26] <= 7582960.75) {
                if (features[25] <= -1.0562595129013062) {
                    if (features[22] <= -1.0333985090255737) {
                        if (features[15] <= -3.0730589628219604) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 16; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    if (features[8] <= 2285.985595703125) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[12] <= 489.5) {
                            if (features[25] <= -0.041043500415980816) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 30; 
                        }
                    }
                }
            } else {
                if (features[33] <= 31417.4208984375) {
                    classes[0] = 7; 
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

int RFC_inst2_1::predict_2(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7869095206260681) {
        if (features[1] <= 25.631975173950195) {
            if (features[51] <= 8.321719646453857) {
                if (features[34] <= 146949.2265625) {
                    if (features[23] <= -0.7839809358119965) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 80; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 3; 
        }
    } else {
        if (features[41] <= 9.035503387451172) {
            if (features[37] <= 0.018581499345600605) {
                if (features[1] <= 5.476161479949951) {
                    if (features[35] <= 0.0006714999908581376) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 59; 
                }
            } else {
                if (features[39] <= 766.7704315185547) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[13] <= 180.02667236328125) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                if (features[2] <= 1403847.0) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
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

int RFC_inst2_1::predict_3(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7749164998531342) {
        if (features[14] <= -7.572064638137817) {
            if (features[18] <= 4.439609050750732) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[9] <= 0.7717549800872803) {
                if (features[50] <= 7.327245473861694) {
                    classes[0] = 73; 
                    classes[1] = 0; 
                } else {
                    if (features[10] <= 185.96588134765625) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[10] <= 221.71302032470703) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        }
    } else {
        if (features[19] <= 9.090988636016846) {
            if (features[32] <= 155.41666412353516) {
                if (features[29] <= 0.0825555007904768) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[32] <= 651.494140625) {
                    if (features[31] <= 0.0001320000010309741) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[15] <= 1.7636194825172424) {
                            classes[0] = 0; 
                            classes[1] = 66; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[25] <= -0.9244195222854614) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            }
        } else {
            if (features[13] <= 210.278076171875) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
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

int RFC_inst2_1::predict_4(float features[]) {
    int classes[2];
    
    if (features[49] <= 1.5340870022773743) {
        if (features[22] <= -4.872001886367798) {
            classes[0] = 7; 
            classes[1] = 0; 
        } else {
            if (features[25] <= -1.1221719980239868) {
                if (features[41] <= 2.730031967163086) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[10] <= 81.38205623626709) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 44; 
            }
        }
    } else {
        if (features[10] <= 213.1845245361328) {
            if (features[38] <= 28387.4130859375) {
                if (features[37] <= 0.0035229999339208007) {
                    if (features[28] <= 249960677376.0) {
                        if (features[9] <= 0.7781364917755127) {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        } else {
                            if (features[26] <= 1659540.28125) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 47; 
                    classes[1] = 0; 
                }
            } else {
                if (features[41] <= 8.738540649414062) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            }
        } else {
            if (features[51] <= 1.471180498600006) {
                if (features[47] <= 3.4628429412841797) {
                    if (features[45] <= 1.5383325219154358) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[6] <= 388.7466735839844) {
                    classes[0] = 12; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
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

int RFC_inst2_1::predict_5(float features[]) {
    int classes[2];
    
    if (features[35] <= 0.00036249999538995326) {
        if (features[9] <= 0.7418610155582428) {
            classes[0] = 6; 
            classes[1] = 0; 
        } else {
            if (features[23] <= -5.142273426055908) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[15] <= 1.8129454851150513) {
                    classes[0] = 0; 
                    classes[1] = 63; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[12] <= 610.0833435058594) {
            if (features[50] <= 0.6092735230922699) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[11] <= 0.5685830116271973) {
                    classes[0] = 51; 
                    classes[1] = 0; 
                } else {
                    if (features[46] <= 4.035851716995239) {
                        if (features[3] <= 0.8013754785060883) {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[43] <= 2.9659085273742676) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[18] <= 3.2941110134124756) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[25] <= -2.288686513900757) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[23] <= -3.5575605630874634) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 26; 
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

int RFC_inst2_1::predict_6(float features[]) {
    int classes[2];
    
    if (features[6] <= 359.5056610107422) {
        classes[0] = 56; 
        classes[1] = 0; 
    } else {
        if (features[9] <= 0.8202604949474335) {
            if (features[7] <= 373.93846130371094) {
                if (features[51] <= 0.4530339986085892) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[10] <= 59.49691200256348) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[48] <= 6.549014091491699) {
                            if (features[1] <= 11.03139591217041) {
                                classes[0] = 24; 
                                classes[1] = 0; 
                            } else {
                                if (features[38] <= 20898.1953125) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 7; 
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
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 66; 
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
    
    if (features[40] <= 19.63589859008789) {
        if (features[49] <= 1.5918514728546143) {
            if (features[11] <= 0.3969999998807907) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 71; 
            }
        } else {
            if (features[25] <= -1.3282495141029358) {
                if (features[7] <= 329.49658203125) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[29] <= 0.01614800002425909) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[45] <= 16.690149784088135) {
                        if (features[41] <= 7.820506811141968) {
                            classes[0] = 0; 
                            classes[1] = 26; 
                        } else {
                            if (features[26] <= 1193499.96875) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[6] <= 425.8432312011719) {
            classes[0] = 58; 
            classes[1] = 0; 
        } else {
            if (features[29] <= 0.05219950154423714) {
                if (features[17] <= -6.529803514480591) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
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

int RFC_inst2_1::predict_8(float features[]) {
    int classes[2];
    
    if (features[50] <= 0.8347364962100983) {
        if (features[16] <= -12.455029010772705) {
            classes[0] = 4; 
            classes[1] = 0; 
        } else {
            if (features[49] <= 2.0777310132980347) {
                classes[0] = 0; 
                classes[1] = 54; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[6] <= 383.46058654785156) {
            if (features[32] <= 6159.60205078125) {
                classes[0] = 49; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[25] <= -2.0544344186782837) {
                if (features[11] <= 0.6079170107841492) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 9; 
                    classes[1] = 0; 
                }
            } else {
                if (features[6] <= 426.5580596923828) {
                    if (features[44] <= 0.6230850070714951) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[17] <= -4.179418087005615) {
                            if (features[23] <= -2.361870527267456) {
                                classes[0] = 0; 
                                classes[1] = 22; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[12] <= 655.7083435058594) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 24; 
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

int RFC_inst2_1::predict_9(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7875000238418579) {
        if (features[11] <= 0.602042019367218) {
            classes[0] = 66; 
            classes[1] = 0; 
        } else {
            if (features[7] <= 338.817626953125) {
                if (features[9] <= 0.7781364917755127) {
                    classes[0] = 11; 
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
    } else {
        if (features[23] <= -4.829869031906128) {
            if (features[45] <= 2.571259021759033) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[39] <= 922.7888641357422) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[17] <= -4.077438116073608) {
                classes[0] = 0; 
                classes[1] = 51; 
            } else {
                if (features[12] <= 666.4166564941406) {
                    if (features[10] <= 185.12995147705078) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 32; 
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
    
    if (features[41] <= 2.7938045263290405) {
        classes[0] = 0; 
        classes[1] = 39; 
    } else {
        if (features[40] <= 19.387001991271973) {
            if (features[22] <= -4.244482517242432) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[6] <= 383.97776794433594) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    if (features[19] <= 8.542532920837402) {
                        if (features[39] <= 149.71546173095703) {
                            if (features[35] <= 0.0003549999964889139) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                if (features[50] <= 4.408323049545288) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 33; 
                        }
                    } else {
                        if (features[38] <= 9403.638671875) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 0.5341669917106628) {
                if (features[27] <= 29.78035831451416) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 65; 
                    classes[1] = 0; 
                }
            } else {
                if (features[46] <= 7.224853515625) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    if (features[28] <= 333126270976.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
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

