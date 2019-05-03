#include "RFC_inst2_0.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_0::predict_0(float features[]) {
    int classes[2];
    
    if (features[28] <= 277619212288.0) {
        if (features[49] <= 0.6184830069541931) {
            if (features[0] <= 5077.002685546875) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[12] <= 465.6666717529297) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[15] <= -6.402966022491455) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[40] <= 2.406980037689209) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[47] <= 0.4007299989461899) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[28] <= 76179554304.0) {
                            if (features[47] <= 3.2904858589172363) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[51] <= 0.36897601187229156) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 99; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[15] <= -1.250793993473053) {
            if (features[7] <= 164.87020111083984) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[48] <= 0.4985384941101074) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[6] <= 369.76341247558594) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[47] <= 0.32778200507164) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 26; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[50] <= 1.778648018836975) {
                classes[0] = 0; 
                classes[1] = 18; 
            } else {
                if (features[18] <= 3.4976985454559326) {
                    classes[0] = 2; 
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

int RFC_inst2_0::predict_1(float features[]) {
    int classes[2];
    
    if (features[48] <= 15.649703025817871) {
        if (features[15] <= -6.314420938491821) {
            if (features[29] <= 0.06389500200748444) {
                if (features[24] <= -4.510647535324097) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 11; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[33] <= 14889.51708984375) {
                if (features[25] <= 2.6561189889907837) {
                    if (features[48] <= 0.8010765016078949) {
                        if (features[46] <= 2.4936856031417847) {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[8] <= 3464.5589599609375) {
                            if (features[36] <= 8030.36279296875) {
                                if (features[41] <= 2.245297431945801) {
                                    if (features[7] <= 407.2896270751953) {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                    } else {
                                        if (features[38] <= 4451.8824462890625) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 104; 
                                }
                            } else {
                                if (features[3] <= 0.6444949805736542) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[27] <= 628.9143829345703) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    if (features[28] <= 178635845632.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[40] <= 24.799281120300293) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                } else {
                    if (features[2] <= 1950924.9375) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        classes[0] = 5; 
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

int RFC_inst2_0::predict_2(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.46045850217342377) {
        classes[0] = 0; 
        classes[1] = 57; 
    } else {
        if (features[2] <= 2018570.375) {
            if (features[19] <= 7.2092320919036865) {
                if (features[39] <= 517.6623687744141) {
                    if (features[36] <= 8022.30615234375) {
                        classes[0] = 0; 
                        classes[1] = 57; 
                    } else {
                        if (features[12] <= 468.5833435058594) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[44] <= 3.6346620321273804) {
                    if (features[7] <= 421.3656768798828) {
                        if (features[21] <= 0.6170854922384024) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[6] <= 426.9899597167969) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[6] <= 468.41053771972656) {
                if (features[17] <= -6.773960590362549) {
                    if (features[43] <= 7.078977823257446) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[32] <= 140.58964157104492) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 15; 
                        classes[1] = 0; 
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

int RFC_inst2_0::predict_3(float features[]) {
    int classes[2];
    
    if (features[2] <= 1333434.125) {
        if (features[13] <= 175.5224838256836) {
            if (features[8] <= 1909.2852172851562) {
                if (features[35] <= 0.00010549999933573417) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 10; 
                }
            } else {
                if (features[34] <= 420886.84375) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 7; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 59; 
        }
    } else {
        if (features[14] <= 3.4609185457229614) {
            if (features[1] <= 14.430866241455078) {
                if (features[20] <= 8.728904247283936) {
                    if (features[51] <= 0.3184240013360977) {
                        if (features[37] <= 0.00040299999818671495) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[20] <= 8.289253234863281) {
                            if (features[32] <= 896.8143920898438) {
                                classes[0] = 0; 
                                classes[1] = 46; 
                            } else {
                                if (features[32] <= 1517.3364562988281) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        } else {
                            if (features[8] <= 3213.970947265625) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 7; 
                classes[1] = 0; 
            }
        } else {
            if (features[47] <= 1.7721785306930542) {
                if (features[13] <= 214.7076187133789) {
                    classes[0] = 20; 
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
    
    if (features[50] <= 0.4663655012845993) {
        if (features[21] <= 0.6643735021352768) {
            classes[0] = 0; 
            classes[1] = 6; 
        } else {
            classes[0] = 18; 
            classes[1] = 0; 
        }
    } else {
        if (features[26] <= 7936771.5) {
            if (features[28] <= 273781497856.0) {
                if (features[15] <= -7.826149940490723) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[39] <= 25.632033348083496) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[21] <= 3.961135983467102) {
                            if (features[27] <= 103.98058319091797) {
                                if (features[45] <= 5.301807641983032) {
                                    classes[0] = 0; 
                                    classes[1] = 21; 
                                } else {
                                    if (features[14] <= 3.3456249237060547) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 75; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[7] <= 201.17105865478516) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    if (features[42] <= 2.636581540107727) {
                        if (features[27] <= 168.83757781982422) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        if (features[9] <= 0.7600899934768677) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[32] <= 1216.7997436523438) {
                classes[0] = 5; 
                classes[1] = 0; 
            } else {
                if (features[41] <= 7.947525501251221) {
                    classes[0] = 1; 
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

int RFC_inst2_0::predict_5(float features[]) {
    int classes[2];
    
    if (features[26] <= 4769793.5) {
        if (features[24] <= -2.849614977836609) {
            if (features[21] <= 1.4974715113639832) {
                classes[0] = 0; 
                classes[1] = 23; 
            } else {
                classes[0] = 19; 
                classes[1] = 0; 
            }
        } else {
            if (features[45] <= 1.3790035247802734) {
                if (features[19] <= 0.05981099605560303) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            } else {
                if (features[44] <= 11.48798131942749) {
                    if (features[48] <= 1.1332535147666931) {
                        if (features[40] <= 7.014949083328247) {
                            if (features[45] <= 4.2362589836120605) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 78; 
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[21] <= 1.4448959827423096) {
            if (features[32] <= 3130.779052734375) {
                if (features[36] <= 10482.5947265625) {
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
            if (features[18] <= 2.2945079803466797) {
                if (features[22] <= -2.2994015216827393) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 3; 
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

int RFC_inst2_0::predict_6(float features[]) {
    int classes[2];
    
    if (features[47] <= 0.7461699843406677) {
        if (features[21] <= 1.762185513973236) {
            if (features[13] <= 206.90520477294922) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        } else {
            if (features[36] <= 4444.9892578125) {
                classes[0] = 12; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[26] <= 9863748.0) {
            if (features[2] <= 1993185.75) {
                if (features[38] <= 24455.5556640625) {
                    if (features[44] <= 13.011842727661133) {
                        if (features[28] <= 302555480064.0) {
                            classes[0] = 0; 
                            classes[1] = 111; 
                        } else {
                            if (features[42] <= 3.158658981323242) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            }
                        }
                    } else {
                        if (features[2] <= 1569565.75) {
                            classes[0] = 0; 
                            classes[1] = 2; 
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
                if (features[22] <= -1.3496429920196533) {
                    if (features[8] <= 2953.5567626953125) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[31] <= 0.00036550000368151814) {
                            if (features[11] <= 0.730958491563797) {
                                classes[0] = 1; 
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
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[22] <= -2.3150464296340942) {
                if (features[35] <= 0.0007700000132899731) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                classes[0] = 6; 
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
    
    if (features[26] <= 4719516.0) {
        if (features[47] <= 0.693105012178421) {
            if (features[5] <= 0.16711950302124023) {
                classes[0] = 0; 
                classes[1] = 7; 
            } else {
                if (features[17] <= -5.924498558044434) {
                    if (features[10] <= 240.92235565185547) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 9; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[10] <= 262.5868377685547) {
                if (features[2] <= 2037668.0) {
                    if (features[47] <= 0.743667483329773) {
                        if (features[43] <= 3.9259084463119507) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[25] <= 2.6543015241622925) {
                            classes[0] = 0; 
                            classes[1] = 94; 
                        } else {
                            if (features[20] <= 8.75705337524414) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[11] <= 0.7087920010089874) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                }
            } else {
                if (features[35] <= 7.099999857018702e-05) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    if (features[39] <= 105.38406753540039) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            }
        }
    } else {
        if (features[40] <= 18.498004913330078) {
            if (features[43] <= 2.1473745107650757) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                classes[0] = 11; 
                classes[1] = 0; 
            }
        } else {
            if (features[35] <= 0.0004219999973429367) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                if (features[32] <= 6159.60205078125) {
                    if (features[48] <= 11.602975130081177) {
                        classes[0] = 0; 
                        classes[1] = 15; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
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

int RFC_inst2_0::predict_8(float features[]) {
    int classes[2];
    
    if (features[10] <= 232.2113800048828) {
        if (features[2] <= 1505919.5) {
            classes[0] = 0; 
            classes[1] = 86; 
        } else {
            if (features[14] <= -4.751594543457031) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                if (features[35] <= 0.000752499996451661) {
                    if (features[37] <= 0.02929799910634756) {
                        classes[0] = 0; 
                        classes[1] = 22; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[38] <= 8042.30029296875) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[39] <= 430.4839859008789) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[11] <= 0.6412500143051147) {
            if (features[6] <= 371.39434814453125) {
                classes[0] = 0; 
                classes[1] = 10; 
            } else {
                if (features[23] <= -3.813603401184082) {
                    if (features[5] <= 0.15997649729251862) {
                        if (features[36] <= 12332.00244140625) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 18; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[49] <= 3.590370535850525) {
                classes[0] = 0; 
                classes[1] = 13; 
            } else {
                classes[0] = 1; 
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

int RFC_inst2_0::predict_9(float features[]) {
    int classes[2];
    
    if (features[28] <= 237446930432.0) {
        if (features[2] <= 2236513.875) {
            if (features[47] <= 0.5358240008354187) {
                if (features[27] <= 113.83365249633789) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[22] <= -0.2640174999833107) {
                    if (features[20] <= 8.637277603149414) {
                        classes[0] = 0; 
                        classes[1] = 91; 
                    } else {
                        if (features[40] <= 24.217115879058838) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                } else {
                    if (features[2] <= 1616351.125) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[8] <= 3301.509765625) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[21] <= 1.4519914984703064) {
            classes[0] = 0; 
            classes[1] = 20; 
        } else {
            if (features[24] <= -1.4885950088500977) {
                if (features[29] <= 0.06213400140404701) {
                    classes[0] = 24; 
                    classes[1] = 0; 
                } else {
                    if (features[0] <= 8041.84912109375) {
                        if (features[11] <= 0.5138749927282333) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
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

int RFC_inst2_0::predict_10(float features[]) {
    int classes[2];
    
    if (features[15] <= -5.090270042419434) {
        if (features[2] <= 1504315.4375) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            if (features[23] <= -4.545159101486206) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[20] <= 8.1444091796875) {
                    if (features[9] <= 0.8299239873886108) {
                        classes[0] = 20; 
                        classes[1] = 0; 
                    } else {
                        if (features[35] <= 0.00036150000960333273) {
                            classes[0] = 0; 
                            classes[1] = 1; 
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
    } else {
        if (features[28] <= 313526747136.0) {
            if (features[21] <= 2.537780523300171) {
                if (features[33] <= 13141.6318359375) {
                    classes[0] = 0; 
                    classes[1] = 83; 
                } else {
                    if (features[41] <= 7.409385919570923) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                }
            } else {
                if (features[41] <= 2.1244605779647827) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[24] <= -2.662331461906433) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 0.846732497215271) {
                            if (features[27] <= 140.9169807434082) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[24] <= -3.0296285152435303) {
                if (features[0] <= 5888.4501953125) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 10; 
                    classes[1] = 0; 
                }
            } else {
                if (features[44] <= 3.4986255168914795) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    if (features[50] <= 2.8250155448913574) {
                        if (features[20] <= 8.956568956375122) {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
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

