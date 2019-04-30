#include "RFC_inst2_1.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_1::predict_0(float features[]) {
    int classes[2];
    
    if (features[49] <= 5.31057596206665) {
        if (features[50] <= 0.638542503118515) {
            if (features[23] <= -7.483464956283569) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[44] <= 4.966625928878784) {
                    if (features[5] <= 0.25560999661684036) {
                        if (features[48] <= 2.5380775928497314) {
                            classes[0] = 0; 
                            classes[1] = 115; 
                        } else {
                            if (features[49] <= 2.0103699564933777) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[2] <= 1069559.90625) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[35] <= 0.00017949999892152846) {
                classes[0] = 0; 
                classes[1] = 52; 
            } else {
                if (features[9] <= 0.7584609985351562) {
                    if (features[8] <= 2836.2904052734375) {
                        classes[0] = 30; 
                        classes[1] = 0; 
                    } else {
                        if (features[44] <= 7.11220908164978) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            if (features[15] <= -3.6391639709472656) {
                                if (features[17] <= -6.477547883987427) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[31] <= 0.0009665000252425671) {
                        if (features[14] <= 5.33384895324707) {
                            if (features[16] <= -8.651793956756592) {
                                if (features[47] <= 0.973910003900528) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    if (features[44] <= 8.24351716041565) {
                                        if (features[20] <= 9.055696964263916) {
                                            classes[0] = 43; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[30] <= 0.8451534932937648) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[43] <= 2.855734944343567) {
                                    if (features[9] <= 0.7848755121231079) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                    }
                                } else {
                                    if (features[51] <= 1.3670055270195007) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[36] <= 5592.8006591796875) {
                                classes[0] = 0; 
                                classes[1] = 23; 
                            } else {
                                if (features[22] <= -3.4194324016571045) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[12] <= 755.1666564941406) {
                            if (features[20] <= 3.564976930618286) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 35; 
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[39] <= 54.078277587890625) {
            if (features[39] <= 42.759775161743164) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[4] <= 9.146255016326904) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[16] <= -12.1056489944458) {
                    if (features[16] <= -12.394351482391357) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[50] <= 1.455784022808075) {
                        if (features[44] <= 4.590909957885742) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 84; 
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
    
    if (features[47] <= 1.6998204588890076) {
        if (features[19] <= 8.221102237701416) {
            if (features[43] <= 5.507619380950928) {
                if (features[35] <= 0.00047400000039488077) {
                    classes[0] = 0; 
                    classes[1] = 138; 
                } else {
                    if (features[51] <= 1.5962790250778198) {
                        if (features[21] <= 2.3912659883499146) {
                            classes[0] = 0; 
                            classes[1] = 14; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[29] <= 0.028463499154895544) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[10] <= 227.27803802490234) {
                    if (features[7] <= 315.9098815917969) {
                        if (features[28] <= 144092061696.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 16; 
                }
            }
        } else {
            if (features[10] <= 258.3629608154297) {
                if (features[7] <= 280.12022399902344) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[6] <= 447.46400451660156) {
                        classes[0] = 27; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[28] <= 89678151680.0) {
                    if (features[46] <= 3.2419129610061646) {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[47] <= 1.4114750027656555) {
                        if (features[17] <= -11.20567512512207) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 43; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[30] <= 2.5499999537714757e-05) {
            if (features[15] <= -0.5199684947729111) {
                if (features[17] <= -8.334048748016357) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 28; 
                }
            } else {
                classes[0] = 10; 
                classes[1] = 0; 
            }
        } else {
            if (features[9] <= 0.8177390098571777) {
                if (features[6] <= 452.95074462890625) {
                    if (features[2] <= 2227739.25) {
                        if (features[22] <= 1.7162564396858215) {
                            if (features[37] <= 0.0036415000213310122) {
                                if (features[37] <= 0.003481500083580613) {
                                    if (features[20] <= 11.689361572265625) {
                                        classes[0] = 25; 
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
                                classes[0] = 96; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[45] <= 7.471246957778931) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[2] <= 2414219.75) {
                        if (features[16] <= -13.172607421875) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[29] <= 0.06602700054645538) {
                                classes[0] = 19; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[22] <= -4.176640510559082) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    if (features[14] <= 1.0104129388928413) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 15; 
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

int RFC_inst2_1::predict_2(float features[]) {
    int classes[2];
    
    if (features[47] <= 1.6915600299835205) {
        if (features[9] <= 0.7811200022697449) {
            if (features[45] <= 1.7344065308570862) {
                classes[0] = 0; 
                classes[1] = 5; 
            } else {
                if (features[16] <= -7.726376533508301) {
                    if (features[24] <= -2.3755459785461426) {
                        if (features[44] <= 4.748384952545166) {
                            if (features[46] <= 3.1281354427337646) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 16; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[15] <= 0.4938974976539612) {
                if (features[45] <= 14.896029949188232) {
                    if (features[51] <= 1.623657464981079) {
                        classes[0] = 0; 
                        classes[1] = 194; 
                    } else {
                        if (features[28] <= 189206937600.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[5] <= 0.15185949951410294) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[27] <= 91.87392616271973) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[4] <= 12.011292457580566) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                }
            }
        }
    } else {
        if (features[4] <= 9.220982551574707) {
            if (features[17] <= -5.284095525741577) {
                if (features[38] <= 9003.3583984375) {
                    if (features[6] <= 395.77732849121094) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 16; 
                }
            } else {
                classes[0] = 8; 
                classes[1] = 0; 
            }
        } else {
            if (features[48] <= 1.361110508441925) {
                if (features[9] <= 0.81426602602005) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[16] <= -9.380649089813232) {
                    if (features[9] <= 0.7265025079250336) {
                        classes[0] = 23; 
                        classes[1] = 0; 
                    } else {
                        if (features[50] <= 8.21664834022522) {
                            if (features[5] <= 0.172108493745327) {
                                if (features[4] <= 187.65943145751953) {
                                    if (features[24] <= -3.1695090532302856) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[12] <= 345.7083435058594) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[36] <= 12295.8623046875) {
                                                classes[0] = 33; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[37] <= 0.015551999676972628) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            } else {
                                if (features[40] <= 8.710031986236572) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    }
                } else {
                    if (features[8] <= 1476.1595458984375) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[9] <= 0.8020009994506836) {
                            classes[0] = 84; 
                            classes[1] = 0; 
                        } else {
                            if (features[30] <= 2199.5148203969) {
                                if (features[21] <= 2.0184884667396545) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
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

int RFC_inst2_1::predict_3(float features[]) {
    int classes[2];
    
    if (features[50] <= 1.3786464929580688) {
        if (features[22] <= -3.395766019821167) {
            if (features[38] <= 7108.21875) {
                if (features[10] <= 250.37508392333984) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    if (features[17] <= -10.994308948516846) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 0.7044515013694763) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 27; 
                        }
                    }
                }
            } else {
                if (features[26] <= 8874177.75) {
                    if (features[48] <= 4.682410478591919) {
                        classes[0] = 24; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[33] <= 19876.1982421875) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[40] <= 26.40513324737549) {
                if (features[43] <= 3.589913487434387) {
                    if (features[13] <= 211.42034912109375) {
                        classes[0] = 0; 
                        classes[1] = 138; 
                    } else {
                        if (features[23] <= -1.6077499985694885) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[11] <= 0.6164585053920746) {
                        classes[0] = 0; 
                        classes[1] = 31; 
                    } else {
                        if (features[47] <= 1.0586340129375458) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[38] <= 12861.013671875) {
                                if (features[44] <= 1.5670120120048523) {
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
                        }
                    }
                }
            } else {
                if (features[38] <= 9025.16015625) {
                    if (features[37] <= 0.009620999917387962) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[40] <= 18.168460845947266) {
            if (features[20] <= 7.535955905914307) {
                if (features[22] <= -3.143515467643738) {
                    classes[0] = 24; 
                    classes[1] = 0; 
                } else {
                    if (features[36] <= 3634.1678466796875) {
                        if (features[45] <= 1.679074466228485) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 20; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 18; 
                    }
                }
            } else {
                if (features[8] <= 2276.994140625) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= 692.875) {
                        classes[0] = 0; 
                        classes[1] = 17; 
                    } else {
                        if (features[38] <= 17377.52783203125) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            }
        } else {
            if (features[18] <= 2.510740041732788) {
                classes[0] = 69; 
                classes[1] = 0; 
            } else {
                if (features[24] <= -3.0316309928894043) {
                    if (features[6] <= 414.8424072265625) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[46] <= 7.442288160324097) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    }
                } else {
                    if (features[17] <= -8.25616455078125) {
                        classes[0] = 20; 
                        classes[1] = 0; 
                    } else {
                        if (features[43] <= 8.460650444030762) {
                            if (features[39] <= 190.73141479492188) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
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

int RFC_inst2_1::predict_4(float features[]) {
    int classes[2];
    
    if (features[48] <= 1.560074508190155) {
        if (features[17] <= -8.610191345214844) {
            if (features[4] <= 11.74912405014038) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[46] <= 4.9526379108428955) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                } else {
                    if (features[4] <= 43.41769504547119) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[19] <= 10.31384801864624) {
                if (features[44] <= 4.294039964675903) {
                    if (features[19] <= 1.939859926700592) {
                        if (features[9] <= 0.824354499578476) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 159; 
                    }
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[9] <= 0.7846909761428833) {
            if (features[9] <= 0.7310574948787689) {
                classes[0] = 90; 
                classes[1] = 0; 
            } else {
                if (features[36] <= 3333.8994140625) {
                    if (features[2] <= 2581140.875) {
                        if (features[21] <= 2.7842739820480347) {
                            classes[0] = 31; 
                            classes[1] = 0; 
                        } else {
                            if (features[37] <= 0.0034485000651329756) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[14] <= 11.013201832771301) {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[18] <= 2.0375274419784546) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[38] <= 9081.52392578125) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[25] <= -2.9706945419311523) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 22; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[35] <= 0.0001629999969736673) {
                classes[0] = 0; 
                classes[1] = 38; 
            } else {
                if (features[35] <= 0.0006210000137798488) {
                    if (features[23] <= -4.791469573974609) {
                        if (features[50] <= 0.3645550012588501) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 25; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[44] <= 1.3419020175933838) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[23] <= -2.033913016319275) {
                                if (features[26] <= 14094708.0) {
                                    if (features[11] <= 0.6671249866485596) {
                                        classes[0] = 0; 
                                        classes[1] = 23; 
                                    } else {
                                        if (features[46] <= 6.465236186981201) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[41] <= 8.235981225967407) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
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
    
    if (features[41] <= 6.447096347808838) {
        if (features[49] <= 3.2613295316696167) {
            if (features[25] <= -1.3421844840049744) {
                if (features[48] <= 2.8934199810028076) {
                    if (features[2] <= 1548000.25) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[29] <= 0.011018500197678804) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 32; 
                        }
                    }
                } else {
                    classes[0] = 14; 
                    classes[1] = 0; 
                }
            } else {
                if (features[51] <= 1.2267400026321411) {
                    if (features[18] <= 4.818126440048218) {
                        if (features[13] <= 155.09230041503906) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[6] <= 383.46058654785156) {
                                if (features[10] <= 224.49832153320312) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                }
                            } else {
                                if (features[45] <= 10.973172664642334) {
                                    classes[0] = 0; 
                                    classes[1] = 157; 
                                } else {
                                    if (features[19] <= 4.622639060020447) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[12] <= 454.125) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        if (features[20] <= 6.524188041687012) {
                            if (features[30] <= 5.999999984851456e-06) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[7] <= 323.8920593261719) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                if (features[34] <= 568580.71875) {
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
            }
        } else {
            if (features[21] <= 1.389091968536377) {
                classes[0] = 12; 
                classes[1] = 0; 
            } else {
                if (features[45] <= 6.877368450164795) {
                    if (features[23] <= -2.7921719551086426) {
                        if (features[11] <= 0.6987084746360779) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[40] <= 58.38129997253418) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    } else {
                        if (features[26] <= 24573450.5) {
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
    } else {
        if (features[9] <= 0.7560565173625946) {
            if (features[22] <= 0.6613364815711975) {
                if (features[20] <= 10.896366119384766) {
                    if (features[19] <= 10.249372959136963) {
                        classes[0] = 82; 
                        classes[1] = 0; 
                    } else {
                        if (features[26] <= 6711424.25) {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        } else {
                            if (features[23] <= -3.503493010997772) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                } else {
                    if (features[18] <= 4.448346853256226) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[25] <= 1.1367340087890625) {
                if (features[9] <= 0.8252390027046204) {
                    if (features[29] <= 0.03015349991619587) {
                        if (features[25] <= -0.43299253284931183) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            if (features[0] <= 10236.52978515625) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[0] <= 8195.38134765625) {
                            classes[0] = 24; 
                            classes[1] = 0; 
                        } else {
                            if (features[43] <= 10.318767070770264) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                } else {
                    if (features[51] <= 2.2789535522460938) {
                        if (features[17] <= -4.035345554351807) {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        } else {
                            if (features[50] <= 0.6945730149745941) {
                                classes[0] = 0; 
                                classes[1] = 1; 
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
            } else {
                classes[0] = 0; 
                classes[1] = 14; 
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
    
    if (features[48] <= 1.6409915089607239) {
        if (features[20] <= 13.40554141998291) {
            if (features[51] <= 1.5928130149841309) {
                if (features[24] <= -4.475250482559204) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[9] <= 0.7604544758796692) {
                        if (features[6] <= 358.3409729003906) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 147; 
                    }
                }
            } else {
                if (features[14] <= 4.447424054145813) {
                    if (features[30] <= 67.83977031707764) {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 0.7960689961910248) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[19] <= 16.337361335754395) {
                classes[0] = 7; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[51] <= 0.6066240072250366) {
            if (features[28] <= 66021109760.0) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                if (features[47] <= 2.740440011024475) {
                    if (features[44] <= 5.65686297416687) {
                        classes[0] = 0; 
                        classes[1] = 37; 
                    } else {
                        if (features[29] <= 0.04877549968659878) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    if (features[44] <= 3.280137538909912) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[43] <= 8.000738382339478) {
                if (features[18] <= 1.7190455198287964) {
                    if (features[30] <= 5.000000101063051e-06) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[9] <= 0.7939299941062927) {
                            classes[0] = 52; 
                            classes[1] = 0; 
                        } else {
                            if (features[26] <= 3469794.6875) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                } else {
                    if (features[20] <= 7.855207920074463) {
                        if (features[22] <= -1.5900424718856812) {
                            if (features[10] <= 261.9627990722656) {
                                if (features[23] <= -2.3560049533843994) {
                                    classes[0] = 35; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[6] <= 391.50909423828125) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        if (features[6] <= 374.25856018066406) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[29] <= 0.0875525027513504) {
                                classes[0] = 0; 
                                classes[1] = 27; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[32] <= 550.3807678222656) {
                    if (features[39] <= 436.76776123046875) {
                        if (features[15] <= -2.0755655169487) {
                            if (features[8] <= 3526.56640625) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[2] <= 1738965.375) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[50] <= 1.2057979702949524) {
                        if (features[43] <= 10.937049865722656) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[17] <= -7.728203535079956) {
                            classes[0] = 54; 
                            classes[1] = 0; 
                        } else {
                            if (features[7] <= 370.0046844482422) {
                                if (features[19] <= 8.068544387817383) {
                                    classes[0] = 28; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[4] <= 84.01880073547363) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 2; 
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
    
    if (features[24] <= -1.2933300137519836) {
        if (features[48] <= 3.563156485557556) {
            if (features[43] <= 7.755529403686523) {
                if (features[25] <= -0.13397900015115738) {
                    if (features[49] <= 2.1983214616775513) {
                        if (features[51] <= 1.9296979904174805) {
                            if (features[31] <= 4.2499999835854396e-05) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[38] <= 9059.19091796875) {
                                    classes[0] = 0; 
                                    classes[1] = 156; 
                                } else {
                                    if (features[47] <= 2.1936259269714355) {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[26] <= 2238005.21875) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[9] <= 0.8177089989185333) {
                            if (features[0] <= 7732.644775390625) {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        }
                    }
                } else {
                    if (features[19] <= 1.9710055589675903) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[22] <= -6.2720136642456055) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[13] <= 203.28885650634766) {
                                if (features[9] <= 0.6960614919662476) {
                                    if (features[7] <= 575.4039916992188) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 37; 
                                }
                            } else {
                                if (features[38] <= 8456.41357421875) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[44] <= 5.276347398757935) {
                    if (features[33] <= 10079.9677734375) {
                        if (features[47] <= 0.9613040089607239) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                } else {
                    if (features[36] <= 11558.46484375) {
                        if (features[9] <= 0.8553610146045685) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[20] <= 6.8509840965271) {
                if (features[9] <= 0.8135955035686493) {
                    if (features[16] <= -12.779626369476318) {
                        if (features[10] <= 125.15737533569336) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 57; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[4] <= 104.0918197631836) {
                    if (features[6] <= 418.02711486816406) {
                        if (features[18] <= 2.5422359704971313) {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        } else {
                            if (features[31] <= 0.00023749999672872946) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                if (features[11] <= 0.6296665072441101) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                } else {
                                    if (features[42] <= 12.890978813171387) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[12] <= 664.125) {
                            classes[0] = 0; 
                            classes[1] = 21; 
                        } else {
                            if (features[50] <= 10.438606977462769) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 12; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[10] <= 80.88275146484375) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            if (features[9] <= 0.797883003950119) {
                classes[0] = 51; 
                classes[1] = 0; 
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

int RFC_inst2_1::predict_8(float features[]) {
    int classes[2];
    
    if (features[35] <= 0.000331000002915971) {
        if (features[47] <= 1.407571017742157) {
            if (features[11] <= 0.38191650807857513) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                if (features[24] <= -3.321943521499634) {
                    if (features[25] <= -0.17072799801826477) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 121; 
                }
            }
        } else {
            if (features[48] <= 3.6385124921798706) {
                if (features[17] <= -8.355386734008789) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[22] <= -4.267740964889526) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[23] <= -4.400286436080933) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 31; 
                        }
                    }
                }
            } else {
                if (features[26] <= 8533241.75) {
                    classes[0] = 11; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    } else {
        if (features[43] <= 8.756903648376465) {
            if (features[22] <= -3.0002315044403076) {
                if (features[20] <= 8.312273979187012) {
                    if (features[9] <= 0.8270689845085144) {
                        classes[0] = 47; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[11] <= 0.6034165024757385) {
                        if (features[1] <= 13.166973114013672) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            if (features[11] <= 0.4075000137090683) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[31] <= 0.0002465000070515089) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 18; 
                        }
                    }
                }
            } else {
                if (features[23] <= -3.980368971824646) {
                    if (features[26] <= 4401931.5) {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    } else {
                        if (features[12] <= 623.875) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[6] <= 350.02996826171875) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[15] <= -0.4959245026111603) {
                            if (features[21] <= 4.106841325759888) {
                                if (features[17] <= -10.038999080657959) {
                                    if (features[51] <= 0.7158994972705841) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[31] <= 0.0028994999593123794) {
                                        if (features[38] <= 30841.5498046875) {
                                            if (features[35] <= 0.0003394999948795885) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[28] <= 207460663296.0) {
                                                    if (features[34] <= 510554.734375) {
                                                        if (features[24] <= -4.562153577804565) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[41] <= 1.4627324938774109) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 27; 
                                                            }
                                                        }
                                                    } else {
                                                        if (features[24] <= -2.329303503036499) {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 50; 
                                                }
                                            }
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
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[18] <= 4.774404525756836) {
                if (features[16] <= -12.241926670074463) {
                    if (features[2] <= 1589185.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                } else {
                    if (features[41] <= 3.4336135387420654) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[51] <= 1.8449829816818237) {
                            if (features[51] <= 1.7503705024719238) {
                                classes[0] = 14; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 73; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[9] <= 0.7126710116863251) {
                    classes[0] = 2; 
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

int RFC_inst2_1::predict_9(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.7595210075378418) {
        if (features[29] <= 0.01838099956512451) {
            if (features[26] <= 3078455.5) {
                if (features[31] <= 7.000000096013537e-06) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 10; 
                    classes[1] = 0; 
                }
            } else {
                if (features[33] <= 2501.024169921875) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            }
        } else {
            if (features[11] <= 0.2765830010175705) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[20] <= 10.915637493133545) {
                    if (features[51] <= 13.784171104431152) {
                        if (features[10] <= 80.20627975463867) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 114; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[26] <= 4791439.625) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                }
            }
        }
    } else {
        if (features[11] <= 0.726791501045227) {
            if (features[2] <= 926549.5625) {
                if (features[4] <= 11.192198276519775) {
                    if (features[10] <= 320.8616485595703) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[7] <= 538.9594421386719) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    classes[0] = 13; 
                    classes[1] = 0; 
                }
            } else {
                if (features[15] <= 0.2441049963235855) {
                    if (features[21] <= 3.207240581512451) {
                        if (features[50] <= 1.5066465139389038) {
                            if (features[43] <= 4.106393098831177) {
                                if (features[44] <= 5.142541885375977) {
                                    classes[0] = 0; 
                                    classes[1] = 176; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[25] <= 0.6592345088720322) {
                                    if (features[24] <= -1.4197139739990234) {
                                        classes[0] = 0; 
                                        classes[1] = 27; 
                                    } else {
                                        if (features[27] <= 171.07915115356445) {
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
                            if (features[32] <= 260.4523468017578) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                if (features[25] <= -1.6981899738311768) {
                                    if (features[7] <= 336.8705749511719) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[18] <= 4.616735458374023) {
                                        if (features[27] <= 82.63753128051758) {
                                            if (features[15] <= -1.49663844704628) {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 35; 
                                        }
                                    } else {
                                        if (features[41] <= 4.008729457855225) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[44] <= 2.2631388902664185) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 0.620930016040802) {
                                if (features[42] <= 6.307233095169067) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        }
                    }
                } else {
                    if (features[19] <= 5.83339262008667) {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    } else {
                        if (features[22] <= -2.3468645811080933) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            classes[0] = 15; 
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

int RFC_inst2_1::predict_10(float features[]) {
    int classes[2];
    
    if (features[48] <= 1.709840476512909) {
        if (features[50] <= 1.8306905031204224) {
            if (features[44] <= 3.8936344385147095) {
                if (features[5] <= 0.24425200372934341) {
                    if (features[23] <= -4.492398023605347) {
                        if (features[21] <= 1.867554485797882) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[33] <= 7143.3251953125) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[19] <= 9.386481285095215) {
                            classes[0] = 0; 
                            classes[1] = 155; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[42] <= 0.5433944910764694) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[5] <= 0.10819200053811073) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[5] <= 0.19955649971961975) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[7] <= 372.611328125) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            }
        } else {
            if (features[10] <= 226.0098876953125) {
                classes[0] = 9; 
                classes[1] = 0; 
            } else {
                if (features[42] <= 4.498433470726013) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        }
    } else {
        if (features[49] <= 5.934329032897949) {
            if (features[10] <= 239.43573760986328) {
                if (features[12] <= 572.25) {
                    if (features[41] <= 14.335155487060547) {
                        if (features[29] <= 0.10706700012087822) {
                            if (features[45] <= 2.1417205333709717) {
                                if (features[47] <= 1.6764699816703796) {
                                    if (features[22] <= -3.1353964805603027) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[5] <= 0.0987205021083355) {
                                    if (features[19] <= 5.183511018753052) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 54; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[35] <= 0.0030574999982491136) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[41] <= 16.012487411499023) {
                        if (features[31] <= 0.0020029999432154) {
                            if (features[38] <= 5550.55224609375) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 26; 
                            }
                        } else {
                            if (features[36] <= 6154.84228515625) {
                                if (features[1] <= 24.029136657714844) {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    } else {
                        if (features[32] <= 819.6770629882812) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[27] <= 964.9710998535156) {
                    if (features[4] <= 149.77056503295898) {
                        if (features[5] <= 0.1296599954366684) {
                            if (features[22] <= -4.109905481338501) {
                                if (features[43] <= 8.079513311386108) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            }
                        } else {
                            if (features[25] <= -1.7572720050811768) {
                                if (features[4] <= 84.02807235717773) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 46; 
                            }
                        }
                    } else {
                        if (features[50] <= 2.4538999795913696) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[23] <= -4.953184604644775) {
                if (features[11] <= 0.6346249878406525) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                if (features[22] <= 1.7162564396858215) {
                    if (features[39] <= 1344.8899536132812) {
                        classes[0] = 80; 
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
    return class_idx;
}

