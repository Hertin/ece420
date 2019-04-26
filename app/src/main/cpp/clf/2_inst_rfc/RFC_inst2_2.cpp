#include "RFC_inst2_2.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_2::predict_0(float features[]) {
    int classes[2];
    
    if (features[2] <= 763505.90625) {
        if (features[6] <= 238.2147979736328) {
            if (features[49] <= 5.413714408874512) {
                if (features[19] <= -3.608453154563904) {
                    if (features[18] <= -2.713400363922119) {
                        if (features[23] <= 1.8922457098960876) {
                            if (features[44] <= 11.814630031585693) {
                                classes[0] = 4; 
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
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                } else {
                    if (features[16] <= 8.080751180648804) {
                        if (features[51] <= 0.3437703847885132) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[0] <= 2808.3348388671875) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[30] <= 2794.953125) {
                                    if (features[51] <= 4.705770015716553) {
                                        classes[0] = 88; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[33] <= 5652.04345703125) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[32] <= 1032.1625671386719) {
                                        if (features[36] <= 550.9199829101562) {
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
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            } else {
                if (features[40] <= 47.471923828125) {
                    if (features[50] <= 8.165635585784912) {
                        if (features[9] <= 0.6342095136642456) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[35] <= 0.007170705823227763) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        if (features[28] <= 48705982464.0) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        } else {
                            if (features[25] <= -2.1373490593396127) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    if (features[35] <= 0.01271428121253848) {
                        if (features[26] <= 9719167.75) {
                            if (features[43] <= 5.327666163444519) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 24; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[2] <= 368571.3125) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[7] <= 147.8491973876953) {
                if (features[11] <= 0.31966666877269745) {
                    if (features[38] <= 6444.0802001953125) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[25] <= -0.4754895195364952) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            } else {
                if (features[44] <= 29.215890884399414) {
                    if (features[16] <= -4.612347602844238) {
                        if (features[48] <= 16.878955841064453) {
                            classes[0] = 0; 
                            classes[1] = 33; 
                        } else {
                            if (features[39] <= 108.52276992797852) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        }
                    } else {
                        if (features[30] <= 893.7186584472656) {
                            if (features[37] <= 0.006930390372872353) {
                                if (features[36] <= 17349.03662109375) {
                                    if (features[9] <= 0.6503365337848663) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 16; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            if (features[24] <= -0.8166562020778656) {
                                if (features[41] <= 152.5224380493164) {
                                    classes[0] = 0; 
                                    classes[1] = 20; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[33] <= 5580.671630859375) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[13] <= 184.03945922851562) {
                                        if (features[21] <= 5.391710162162781) {
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
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 32; 
                }
            }
        }
    } else {
        if (features[21] <= 3.0220041275024414) {
            if (features[48] <= 5.929138422012329) {
                if (features[41] <= 25.42476463317871) {
                    if (features[33] <= 1949.0206298828125) {
                        if (features[38] <= 4845.8157958984375) {
                            if (features[14] <= 29.64974308013916) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[10] <= 33.624874114990234) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[12] <= 314.5833435058594) {
                            if (features[19] <= -1.3257196843624115) {
                                if (features[48] <= 1.7226263582706451) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[39] <= 23.65941047668457) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 57; 
                            }
                        }
                    }
                } else {
                    if (features[30] <= 11.40374892950058) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[16] <= -1.4639052152633667) {
                            if (features[15] <= -3.842324376106262) {
                                if (features[45] <= 10.808092594146729) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[30] <= 1059.828369140625) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[35] <= 0.004641411360353231) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            }
                        } else {
                            if (features[22] <= -1.5859160423278809) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 26; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[6] <= 237.8094024658203) {
                    if (features[49] <= 5.873227119445801) {
                        if (features[48] <= 9.770915746688843) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[5] <= 0.14965598285198212) {
                        if (features[49] <= 5.638911485671997) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[43] <= 11.436441421508789) {
                            if (features[44] <= 2.4436744451522827) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[15] <= 0.9285766584798694) {
                                    classes[0] = 0; 
                                    classes[1] = 30; 
                                } else {
                                    if (features[27] <= 830.3575744628906) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[12] <= 397.3333282470703) {
                                if (features[12] <= 395.7083282470703) {
                                    classes[0] = 0; 
                                    classes[1] = 18; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 90; 
                            }
                        }
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 98; 
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
    
    if (features[6] <= 245.51051330566406) {
        if (features[33] <= 24541.8544921875) {
            if (features[33] <= 744.8737182617188) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[49] <= 8.785241603851318) {
                    if (features[16] <= -2.760505437850952) {
                        if (features[24] <= 0.9739484488964081) {
                            if (features[41] <= 12.906208992004395) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[20] <= -0.009844421409070492) {
                                    if (features[40] <= 18.086008071899414) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    if (features[20] <= 6.0752599239349365) {
                                        if (features[37] <= 0.006085465662181377) {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[27] <= 1573.4054565429688) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
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
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        if (features[51] <= 13.321662425994873) {
                            if (features[29] <= 0.009539961349219084) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[17] <= -8.992310762405396) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[43] <= 23.483914375305176) {
                                        if (features[2] <= 168343.015625) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[11] <= 0.3487499952316284) {
                                                classes[0] = 149; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[17] <= -2.425716817378998) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[44] <= 10.094456672668457) {
                                            if (features[24] <= 0.009320974349975586) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            }
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    if (features[22] <= 2.8879780769348145) {
                        if (features[30] <= 883.2529296875) {
                            if (features[25] <= -0.23586484789848328) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[51] <= 4.35925817489624) {
                                if (features[46] <= 10.730758666992188) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 21; 
                            }
                        }
                    } else {
                        if (features[5] <= 0.17815973609685898) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[36] <= 2120.6499633789062) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[46] <= 7.156499147415161) {
                if (features[36] <= 56415.880859375) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[38] <= 9443.356689453125) {
                    classes[0] = 0; 
                    classes[1] = 17; 
                } else {
                    if (features[43] <= 10.732301592826843) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            }
        }
    } else {
        if (features[14] <= 16.051931381225586) {
            if (features[0] <= 3798.9500732421875) {
                if (features[29] <= 0.042753176763653755) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                if (features[13] <= 142.29387664794922) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[41] <= 4.649794340133667) {
                        if (features[24] <= -1.8811898827552795) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[4] <= 43.36319160461426) {
                            if (features[51] <= 1.5876485705375671) {
                                if (features[5] <= 0.19239184260368347) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[0] <= 7541.370849609375) {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                } else {
                                    if (features[18] <= -2.105988949537277) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[25] <= -3.745788097381592) {
                                if (features[40] <= 22.851902961730957) {
                                    if (features[24] <= -4.158391833305359) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[2] <= 671199.8125) {
                                        if (features[39] <= 288.3072738647461) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 16; 
                                    }
                                }
                            } else {
                                if (features[16] <= 15.344997882843018) {
                                    if (features[13] <= 159.0240249633789) {
                                        if (features[34] <= 159345.9375) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        }
                                    } else {
                                        if (features[44] <= 2.2589486837387085) {
                                            if (features[12] <= 518.0833587646484) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            if (features[2] <= 1733360.5625) {
                                                classes[0] = 0; 
                                                classes[1] = 207; 
                                            } else {
                                                if (features[39] <= 52.77188587188721) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 8; 
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[9] <= 0.6275067627429962) {
                if (features[47] <= 1.0399552583694458) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[32] <= 2382.5965576171875) {
                        classes[0] = 0; 
                        classes[1] = 49; 
                    } else {
                        if (features[22] <= 6.48054051399231) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                }
            } else {
                if (features[20] <= 0.5036679357290268) {
                    if (features[21] <= -0.012799402233213186) {
                        if (features[39] <= 232.8587646484375) {
                            if (features[23] <= 2.425918936729431) {
                                if (features[4] <= 123.31009674072266) {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            if (features[41] <= 30.260589599609375) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                if (features[35] <= 0.005480338353663683) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 284.2999267578125) {
                            classes[0] = 0; 
                            classes[1] = 22; 
                        } else {
                            if (features[23] <= 0.21064239740371704) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[49] <= 2.792511820793152) {
                        if (features[19] <= -2.163580298423767) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 34; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[38] <= 3811.7740478515625) {
                            if (features[13] <= 199.926513671875) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[36] <= 1517.4806518554688) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 11; 
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

int RFC_inst2_2::predict_2(float features[]) {
    int classes[2];
    
    if (features[47] <= 15.576810836791992) {
        if (features[47] <= 2.4658602476119995) {
            if (features[21] <= 2.189170002937317) {
                if (features[20] <= -1.1744577884674072) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    if (features[36] <= 7470.08984375) {
                        if (features[3] <= 1.3075044751167297) {
                            if (features[33] <= 750.5519409179688) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[30] <= 2.5095790503546596) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[7] <= 230.64093017578125) {
                                        classes[0] = 63; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[12] <= 413.6666564941406) {
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
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[7] <= 164.16883087158203) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[16] <= -2.4529781341552734) {
                if (features[19] <= -0.311165913939476) {
                    if (features[15] <= 8.903377294540405) {
                        if (features[10] <= 45.77026557922363) {
                            if (features[39] <= 318.9690628051758) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[47] <= 15.129583358764648) {
                                if (features[4] <= 55.642282485961914) {
                                    if (features[47] <= 11.792166709899902) {
                                        if (features[7] <= 193.87369537353516) {
                                            if (features[27] <= 1799.1250610351562) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 19; 
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[6] <= 244.88394165039062) {
                                        if (features[14] <= 24.270564079284668) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 15; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 87; 
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[13] <= 183.60089111328125) {
                        if (features[4] <= 78.87556457519531) {
                            if (features[32] <= 330.81214904785156) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 18; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[22] <= 1.2093111872673035) {
                                if (features[47] <= 5.994884729385376) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        }
                    } else {
                        if (features[6] <= 237.87109375) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[34] <= 185906.7421875) {
                                if (features[51] <= 5.7539427280426025) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 33; 
                            }
                        }
                    }
                }
            } else {
                if (features[12] <= 441.4166717529297) {
                    if (features[20] <= 7.241376876831055) {
                        if (features[32] <= 1050.0361328125) {
                            if (features[37] <= 0.004008871503174305) {
                                if (features[0] <= 6447.8388671875) {
                                    if (features[10] <= 67.02168273925781) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[22] <= 0.8983239829540253) {
                                            if (features[31] <= 0.004385159118101001) {
                                                if (features[38] <= 8393.263427734375) {
                                                    classes[0] = 0; 
                                                    classes[1] = 20; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[4] <= 79.66972351074219) {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[4] <= 98.45005798339844) {
                                        if (features[50] <= 1.4102519154548645) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 24; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            } else {
                                if (features[34] <= 202178.54296875) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 13; 
                                }
                            }
                        } else {
                            if (features[42] <= 33.19670104980469) {
                                if (features[9] <= 0.7775278389453888) {
                                    if (features[48] <= 1.2423025369644165) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[2] <= 1075934.75) {
                                            if (features[38] <= 26155.380859375) {
                                                if (features[37] <= 0.0015700242947787046) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[49] <= 8.978859901428223) {
                                                        classes[0] = 79; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[36] <= 2311.9435424804688) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 6; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (features[8] <= 2228.7647705078125) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[25] <= -0.23390775546431541) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                if (features[11] <= 0.2764166593551636) {
                                    if (features[38] <= 27832.4248046875) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                } else {
                    if (features[24] <= 2.0827232599258423) {
                        if (features[15] <= -17.29895544052124) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[43] <= 9.183328628540039) {
                                if (features[45] <= 5.606088757514954) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[12] <= 721.5416564941406) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 47; 
                            }
                        }
                    } else {
                        if (features[3] <= 0.6741824448108673) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            if (features[22] <= 0.550198882818222) {
                                if (features[15] <= 3.1547751426696777) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[5] <= 0.14817602932453156) {
            if (features[50] <= 25.82266902923584) {
                if (features[41] <= 30.519782066345215) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[26] <= 1086611.96875) {
                        if (features[29] <= 0.025246483273804188) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
            }
        } else {
            if (features[29] <= 0.010637398809194565) {
                if (features[28] <= 99638833152.0) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[0] <= 5690.5205078125) {
                    if (features[0] <= 5666.6396484375) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 146; 
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
    
    if (features[49] <= 7.5326807498931885) {
        if (features[12] <= 312.9583282470703) {
            if (features[23] <= 1.853653371334076) {
                if (features[17] <= -5.338973045349121) {
                    if (features[35] <= 0.0031268522143363953) {
                        if (features[48] <= 1.1708906292915344) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 15; 
                        }
                    } else {
                        if (features[19] <= -4.747138977050781) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[1] <= 6.212278604507446) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[13] <= 215.86885833740234) {
                            if (features[29] <= 0.01032547140493989) {
                                if (features[39] <= 131.86148834228516) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[20] <= 6.692461252212524) {
                                    if (features[13] <= 122.52980041503906) {
                                        if (features[21] <= -1.2667163722217083) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[33] <= 715.8584594726562) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[4] <= 159.7662811279297) {
                                                if (features[19] <= -6.102329254150391) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 117; 
                                                    classes[1] = 0; 
                                                }
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
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                }
            } else {
                if (features[32] <= 2865.209716796875) {
                    if (features[22] <= 0.6184887588024139) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[43] <= 33.24250602722168) {
                            classes[0] = 0; 
                            classes[1] = 21; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[21] <= 0.34279492497444153) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[10] <= 47.44624137878418) {
                if (features[15] <= -9.10603380203247) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    if (features[9] <= 0.6245604455471039) {
                        if (features[20] <= 0.7677607610821724) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[25] <= 1.1735684871673584) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[34] <= 789310.53125) {
                    if (features[41] <= 28.664920806884766) {
                        if (features[15] <= -1.1374197006225586) {
                            if (features[16] <= 6.866724252700806) {
                                if (features[48] <= 22.749550819396973) {
                                    if (features[50] <= 0.9266740679740906) {
                                        if (features[33] <= 2596.0473022460938) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        if (features[14] <= 22.402446746826172) {
                                            classes[0] = 0; 
                                            classes[1] = 52; 
                                        } else {
                                            if (features[49] <= 2.42684006690979) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[13] <= 190.03065490722656) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[43] <= 15.110451698303223) {
                                if (features[32] <= 1612.9970092773438) {
                                    if (features[1] <= 27.63294506072998) {
                                        if (features[40] <= 65.02935981750488) {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    if (features[26] <= 3287999.125) {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 16; 
                            }
                        }
                    } else {
                        if (features[10] <= 140.78102111816406) {
                            if (features[6] <= 269.94447326660156) {
                                if (features[11] <= 0.3555833399295807) {
                                    classes[0] = 23; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[9] <= 0.638835221529007) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[46] <= 12.448235034942627) {
                                    if (features[0] <= 7296.621826171875) {
                                        classes[0] = 0; 
                                        classes[1] = 16; 
                                    } else {
                                        if (features[51] <= 1.6789549589157104) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[33] <= 6140.963623046875) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        }
                    }
                } else {
                    if (features[38] <= 87655.65625) {
                        if (features[15] <= 9.961665630340576) {
                            classes[0] = 0; 
                            classes[1] = 73; 
                        } else {
                            if (features[6] <= 276.6751403808594) {
                                classes[0] = 2; 
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
            }
        }
    } else {
        if (features[13] <= 189.76705169677734) {
            if (features[14] <= 28.594807624816895) {
                if (features[41] <= 81.87451934814453) {
                    if (features[9] <= 0.5899036824703217) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 0.22808334976434708) {
                            if (features[4] <= 31.25620460510254) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 74; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[14] <= 12.538608074188232) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[20] <= 1.0683217346668243) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[47] <= 10.24177885055542) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[11] <= 0.13174999132752419) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[34] <= 418771.625) {
                        if (features[1] <= 14.035006523132324) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[6] <= 226.1467056274414) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[40] <= 9.852148532867432) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                if (features[14] <= 21.156614303588867) {
                    classes[0] = 0; 
                    classes[1] = 131; 
                } else {
                    if (features[0] <= 8607.2060546875) {
                        classes[0] = 0; 
                        classes[1] = 11; 
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

int RFC_inst2_2::predict_4(float features[]) {
    int classes[2];
    
    if (features[14] <= 16.880687713623047) {
        if (features[3] <= 0.5194897055625916) {
            if (features[27] <= 372.29339599609375) {
                if (features[37] <= 0.001782621897291392) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 23; 
                }
            } else {
                if (features[40] <= 83.87834548950195) {
                    if (features[26] <= 5910803.5) {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[16] <= 9.380843162536621) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[31] <= 0.00041813212737906724) {
                if (features[47] <= 1.6352882385253906) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[42] <= 80.30042266845703) {
                    if (features[9] <= 0.7087056636810303) {
                        if (features[48] <= 5.697693347930908) {
                            if (features[28] <= 31316184064.0) {
                                if (features[33] <= 1312.1366882324219) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[5] <= 0.20013628154993057) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 66; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 177; 
                        }
                    } else {
                        if (features[0] <= 6356.55322265625) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        } else {
                            if (features[49] <= 7.808448314666748) {
                                if (features[31] <= 0.0014761467464268208) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                } else {
                    if (features[8] <= 3060.6533203125) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[49] <= 5.369262456893921) {
            if (features[26] <= 7394969.0) {
                if (features[24] <= -1.6694714426994324) {
                    if (features[5] <= 0.1365133598446846) {
                        if (features[29] <= 0.01107055228203535) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[14] <= 19.19036865234375) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[5] <= 0.32470448315143585) {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[20] <= 0.3299236446619034) {
                        if (features[23] <= 0.5548556596040726) {
                            if (features[14] <= 25.490657806396484) {
                                if (features[6] <= 295.9556579589844) {
                                    classes[0] = 0; 
                                    classes[1] = 12; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[32] <= 114.28780746459961) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[33] <= 1254.1648864746094) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[0] <= 3714.906982421875) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[1] <= 37.41837978363037) {
                                                classes[0] = 28; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[29] <= 0.07471396401524544) {
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
                        } else {
                            if (features[42] <= 19.82295513153076) {
                                if (features[28] <= 25449926656.0) {
                                    if (features[43] <= 4.405027389526367) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[3] <= 0.7735908925533295) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[38] <= 13409.77197265625) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 16; 
                            }
                        }
                    } else {
                        if (features[8] <= 3465.044677734375) {
                            if (features[26] <= 355485.3828125) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[23] <= 2.020417869091034) {
                                    if (features[10] <= 48.82173156738281) {
                                        if (features[21] <= 1.8191614747047424) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        if (features[16] <= 11.149859189987183) {
                                            if (features[19] <= -2.721203327178955) {
                                                if (features[4] <= 66.2453727722168) {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 6; 
                                                }
                                            } else {
                                                if (features[6] <= 280.6778564453125) {
                                                    classes[0] = 104; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[28] <= 10090471680.0) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 11; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[18] <= -0.2218170315027237) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                }
            } else {
                if (features[42] <= 8.754570007324219) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[15] <= -5.870692253112793) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[37] <= 0.005248398520052433) {
                if (features[15] <= -3.0412341356277466) {
                    if (features[11] <= 0.22833332419395447) {
                        if (features[19] <= -1.7251460552215576) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[21] <= -3.1388164162635803) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[48] <= 27.31949520111084) {
                            if (features[30] <= 4585.7406005859375) {
                                if (features[29] <= 0.10040733218193054) {
                                    classes[0] = 0; 
                                    classes[1] = 47; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[44] <= 12.193028926849365) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[29] <= 0.023121394217014313) {
                        if (features[41] <= 21.63145923614502) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            if (features[13] <= 187.1236343383789) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[4] <= 79.28065872192383) {
                            if (features[49] <= 12.722639083862305) {
                                if (features[23] <= -2.780969023704529) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[25] <= -3.081778883934021) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 20; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[35] <= 0.0024500975850969553) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    }
                }
            } else {
                if (features[15] <= -2.810136914253235) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[23] <= -1.975168764591217) {
                        if (features[19] <= 3.976185917854309) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[20] <= -0.6163406074047089) {
                            if (features[45] <= 13.757266998291016) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                if (features[21] <= 1.60636484780116) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[48] <= 27.5436429977417) {
                                classes[0] = 22; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
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

int RFC_inst2_2::predict_5(float features[]) {
    int classes[2];
    
    if (features[12] <= 308.83331298828125) {
        if (features[7] <= 275.3408203125) {
            if (features[19] <= -1.568693220615387) {
                if (features[38] <= 4048.263671875) {
                    if (features[12] <= 253.5833282470703) {
                        if (features[28] <= 19586239488.0) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 19; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[6] <= 243.68643188476562) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[13] <= 193.23155212402344) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[30] <= 9.549533128738403) {
                    if (features[4] <= 56.79084396362305) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[35] <= 0.018552685156464577) {
                        if (features[21] <= 2.4859715700149536) {
                            if (features[23] <= -1.4455760717391968) {
                                if (features[7] <= 238.26618194580078) {
                                    if (features[21] <= 2.0494096279144287) {
                                        if (features[35] <= 0.0016866024816408753) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 18; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                if (features[18] <= 6.551990270614624) {
                                    if (features[4] <= 101.98455047607422) {
                                        classes[0] = 112; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[12] <= 266.20833587646484) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[9] <= 0.6736150979995728) {
                                if (features[8] <= 2050.9449462890625) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        } else {
            if (features[30] <= 389.03851318359375) {
                if (features[43] <= 8.410122871398926) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                if (features[48] <= 2.0347901582717896) {
                    if (features[44] <= 16.029973030090332) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 22; 
                }
            }
        }
    } else {
        if (features[11] <= 0.26258333027362823) {
            if (features[13] <= 136.81331634521484) {
                classes[0] = 0; 
                classes[1] = 7; 
            } else {
                if (features[43] <= 51.58626365661621) {
                    if (features[38] <= 3098.9688720703125) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 26; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[11] <= 0.37708331644535065) {
                if (features[24] <= 0.29223956167697906) {
                    if (features[9] <= 0.788723349571228) {
                        if (features[48] <= 1.3530299067497253) {
                            if (features[47] <= 5.028469085693359) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[16] <= 4.948989391326904) {
                                if (features[51] <= 0.8334338068962097) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[31] <= 0.000593716511502862) {
                                        if (features[19] <= -3.462416410446167) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[16] <= 1.6210656762123108) {
                                            if (features[36] <= 1050.4067993164062) {
                                                if (features[27] <= 1852.2161254882812) {
                                                    classes[0] = 0; 
                                                    classes[1] = 9; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 74; 
                                            }
                                        } else {
                                            if (features[13] <= 171.2936248779297) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[19] <= -1.6143662929534912) {
                        if (features[48] <= 25.91415786743164) {
                            if (features[47] <= 2.1852524280548096) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 32; 
                            }
                        } else {
                            if (features[47] <= 28.652689933776855) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[38] <= 26155.380859375) {
                            if (features[28] <= 13892621312.0) {
                                if (features[17] <= 11.587597131729126) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[50] <= 12.304571151733398) {
                                    if (features[16] <= -8.344831943511963) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[20] <= 8.133702039718628) {
                                            classes[0] = 26; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
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
                }
            } else {
                if (features[33] <= 442.9237823486328) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[4] <= 41.01919174194336) {
                        if (features[18] <= -3.757463216781616) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[22] <= -1.8044949024915695) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[14] <= 17.526262283325195) {
                            if (features[3] <= 0.6173366010189056) {
                                if (features[2] <= 1364057.0) {
                                    if (features[19] <= -7.6570563316345215) {
                                        if (features[8] <= 2157.6102294921875) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[27] <= 1009.0104064941406) {
                                            classes[0] = 0; 
                                            classes[1] = 31; 
                                        } else {
                                            if (features[41] <= 18.35954999923706) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 9; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[17] <= -11.778212070465088) {
                                    if (features[41] <= 5.888636589050293) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 187; 
                                }
                            }
                        } else {
                            if (features[16] <= -6.861412763595581) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[43] <= 3.486395001411438) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[25] <= -2.0904301404953003) {
                                        if (features[16] <= -1.260115921497345) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 21; 
                                    }
                                }
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

int RFC_inst2_2::predict_6(float features[]) {
    int classes[2];
    
    if (features[12] <= 321.2083435058594) {
        if (features[7] <= 231.03306579589844) {
            if (features[37] <= 0.0013293575611896813) {
                if (features[4] <= 52.52336120605469) {
                    if (features[47] <= 6.4335644245147705) {
                        if (features[7] <= 207.0966339111328) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 0.6587636470794678) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    if (features[37] <= 0.0003597049508243799) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 15; 
                    }
                }
            } else {
                if (features[24] <= -2.6192593574523926) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[34] <= 588679.59375) {
                        if (features[14] <= 22.109329223632812) {
                            if (features[18] <= 1.2501939237117767) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            if (features[27] <= 13242.47119140625) {
                                if (features[30] <= 3576.7691650390625) {
                                    classes[0] = 74; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[31] <= 0.0008766012033447623) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[51] <= 5.227659225463867) {
                            if (features[10] <= 53.67471885681152) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[25] <= -0.8867126703262329) {
                                    if (features[5] <= 0.1558719016611576) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[44] <= 17.615478038787842) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            } else {
                                if (features[29] <= 0.058914054185152054) {
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
        } else {
            if (features[16] <= -5.580756902694702) {
                classes[0] = 0; 
                classes[1] = 23; 
            } else {
                if (features[36] <= 15825.05029296875) {
                    if (features[36] <= 10451.8232421875) {
                        if (features[1] <= 18.719717979431152) {
                            if (features[49] <= 1.9391106367111206) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 20; 
                            }
                        } else {
                            if (features[3] <= 0.689281702041626) {
                                if (features[37] <= 0.00340874248649925) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[46] <= 23.735583305358887) {
                                    if (features[4] <= 29.36692714691162) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[22] <= 4.062960684299469) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    if (features[12] <= 316.5) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[49] <= 2.4155972003936768) {
            if (features[11] <= 0.42908331751823425) {
                if (features[15] <= -1.4048722982406616) {
                    if (features[19] <= -1.2468367516994476) {
                        if (features[47] <= 2.205878257751465) {
                            if (features[11] <= 0.3584583103656769) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[37] <= 0.01135210506618023) {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[1] <= 23.099549293518066) {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[17] <= 11.847875595092773) {
                        classes[0] = 24; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[47] <= 1.3526594042778015) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[9] <= 0.6950776875019073) {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    } else {
                        if (features[32] <= 2409.05126953125) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[46] <= 10.804018020629883) {
                if (features[25] <= 0.05844864249229431) {
                    if (features[50] <= 6.164415121078491) {
                        if (features[16] <= -10.14775800704956) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        } else {
                            if (features[26] <= 3203446.0) {
                                if (features[51] <= 3.6879546642303467) {
                                    if (features[47] <= 1.9263325929641724) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 14; 
                                    }
                                } else {
                                    if (features[12] <= 413.75) {
                                        if (features[37] <= 0.007919444004073739) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[15] <= 8.595129489898682) {
                                    if (features[30] <= 1405.0563049316406) {
                                        classes[0] = 16; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[33] <= 11597.13134765625) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
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
                    } else {
                        if (features[38] <= 7309.84765625) {
                            if (features[2] <= 734090.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 22; 
                        }
                    }
                } else {
                    if (features[12] <= 331.0416717529297) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[31] <= 0.0003061364041059278) {
                            if (features[36] <= 577.2968597412109) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[32] <= 8816.544189453125) {
                                if (features[5] <= 0.14098487049341202) {
                                    if (features[0] <= 6160.343017578125) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 70; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[40] <= 13.622031211853027) {
                    if (features[20] <= -0.0040541887283325195) {
                        if (features[48] <= 29.786834239959717) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                } else {
                    if (features[9] <= 0.6598932147026062) {
                        classes[0] = 0; 
                        classes[1] = 144; 
                    } else {
                        if (features[9] <= 0.6611518561840057) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[37] <= 0.003625123295933008) {
                                if (features[34] <= 672863.59375) {
                                    if (features[45] <= 20.437705993652344) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 60; 
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

int RFC_inst2_2::predict_7(float features[]) {
    int classes[2];
    
    if (features[2] <= 763533.96875) {
        if (features[17] <= -7.575650691986084) {
            if (features[18] <= 2.8561887741088867) {
                if (features[45] <= 2.588230311870575) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 49; 
                }
            } else {
                if (features[34] <= 864858.53125) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[49] <= 5.601809024810791) {
                if (features[41] <= 5.863319396972656) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[22] <= 3.530544400215149) {
                        if (features[11] <= 0.3137083202600479) {
                            if (features[44] <= 4.908246278762817) {
                                if (features[4] <= 55.230628967285156) {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            } else {
                                if (features[36] <= 31820.25390625) {
                                    if (features[17] <= -2.57880961894989) {
                                        if (features[18] <= 2.2979512214660645) {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        if (features[24] <= 2.4834052324295044) {
                                            if (features[41] <= 11.57878589630127) {
                                                if (features[42] <= 11.532572746276855) {
                                                    classes[0] = 6; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 78; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[5] <= 0.17315316200256348) {
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
                                    classes[1] = 3; 
                                }
                            }
                        } else {
                            if (features[45] <= 7.6350319385528564) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            } else {
                if (features[1] <= 15.358181953430176) {
                    if (features[43] <= 79.623046875) {
                        if (features[6] <= 210.28594970703125) {
                            if (features[32] <= 1415.6170654296875) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[33] <= 52717.4765625) {
                                classes[0] = 0; 
                                classes[1] = 29; 
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
                    if (features[43] <= 23.95373821258545) {
                        if (features[18] <= -1.794700562953949) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            if (features[46] <= 13.436122417449951) {
                                if (features[3] <= 0.6585559546947479) {
                                    if (features[8] <= 1589.677490234375) {
                                        classes[0] = 1; 
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
                                classes[1] = 7; 
                            }
                        }
                    } else {
                        if (features[31] <= 0.002919208724051714) {
                            if (features[44] <= 24.672982692718506) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[26] <= 5152166.25) {
                                if (features[46] <= 4.827048420906067) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 20; 
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
    } else {
        if (features[6] <= 260.783447265625) {
            if (features[19] <= -0.34349800646305084) {
                if (features[4] <= 80.6639633178711) {
                    if (features[40] <= 40.3824348449707) {
                        if (features[51] <= 2.914878726005554) {
                            if (features[48] <= 3.204043745994568) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                if (features[18] <= 0.41878023743629456) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[49] <= 2.437848687171936) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        }
                    } else {
                        if (features[50] <= 9.772277116775513) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 15; 
                }
            } else {
                if (features[9] <= 0.6014714241027832) {
                    if (features[8] <= 3002.467041015625) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 26; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[47] <= 1.1241493225097656) {
                classes[0] = 5; 
                classes[1] = 0; 
            } else {
                if (features[50] <= 5.978399276733398) {
                    if (features[50] <= 5.964855432510376) {
                        if (features[7] <= 109.31176376342773) {
                            if (features[49] <= 3.7345378398895264) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            if (features[14] <= 16.072371006011963) {
                                if (features[15] <= -19.77455425262451) {
                                    if (features[18] <= 4.094491004943848) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[3] <= 0.5483059883117676) {
                                        if (features[43] <= 7.03972053527832) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 96; 
                                    }
                                }
                            } else {
                                if (features[43] <= 6.8805201053619385) {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                } else {
                                    if (features[8] <= 3186.8626708984375) {
                                        if (features[9] <= 0.6215552091598511) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 14; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[17] <= 6.434041261672974) {
                        classes[0] = 0; 
                        classes[1] = 144; 
                    } else {
                        if (features[41] <= 19.02196216583252) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 12; 
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

int RFC_inst2_2::predict_8(float features[]) {
    int classes[2];
    
    if (features[14] <= 20.072858810424805) {
        if (features[9] <= 0.7530723512172699) {
            if (features[49] <= 1.9073999524116516) {
                if (features[8] <= 2369.885009765625) {
                    if (features[36] <= 401.38746643066406) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 23; 
                    }
                } else {
                    if (features[17] <= -3.8421616554260254) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[16] <= 14.971572875976562) {
                    if (features[14] <= 15.82257604598999) {
                        if (features[9] <= 0.731573075056076) {
                            classes[0] = 0; 
                            classes[1] = 275; 
                        } else {
                            if (features[46] <= 2.928831696510315) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[44] <= 5.790491700172424) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                }
                            }
                        }
                    } else {
                        if (features[39] <= 54.2362117767334) {
                            if (features[7] <= 160.98454666137695) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[4] <= 65.79421997070312) {
                                if (features[24] <= 1.3453972935676575) {
                                    if (features[1] <= 19.234277725219727) {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    } else {
                                        if (features[6] <= 282.9198913574219) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[19] <= 2.2594178915023804) {
                                    classes[0] = 0; 
                                    classes[1] = 34; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[14] <= 2.4548805356025696) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[11] <= 0.24937500059604645) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                if (features[6] <= 306.96405029296875) {
                    if (features[35] <= 0.006119551369920373) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[5] <= 0.11098052561283112) {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        }
    } else {
        if (features[7] <= 240.24510955810547) {
            if (features[1] <= 5.877755165100098) {
                if (features[30] <= 390.13926696777344) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 12; 
                }
            } else {
                if (features[16] <= -1.5828019976615906) {
                    if (features[46] <= 6.588495254516602) {
                        if (features[4] <= 105.12941360473633) {
                            if (features[4] <= 46.789817810058594) {
                                classes[0] = 19; 
                                classes[1] = 0; 
                            } else {
                                if (features[45] <= 4.820753812789917) {
                                    if (features[10] <= 110.68914031982422) {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[45] <= 13.493922233581543) {
                                        if (features[41] <= 7.5632888078689575) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        if (features[17] <= 1.003008147701621) {
                            if (features[19] <= 0.6503644734621048) {
                                if (features[38] <= 1392.8297729492188) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[2] <= 956250.6875) {
                                        classes[0] = 0; 
                                        classes[1] = 27; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[13] <= 156.5198516845703) {
                                    if (features[50] <= 7.69587516784668) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[47] <= 15.982946395874023) {
                        if (features[21] <= 4.266057729721069) {
                            if (features[32] <= 4147.12841796875) {
                                if (features[33] <= 1240.8735961914062) {
                                    if (features[46] <= 2.1130494475364685) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                } else {
                                    if (features[37] <= 0.00098007993074134) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[51] <= 6.415062427520752) {
                                            if (features[17] <= -5.361817359924316) {
                                                if (features[25] <= -0.5448807552456856) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 122; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[6] <= 229.802001953125) {
                                                if (features[23] <= 2.8787238597869873) {
                                                    classes[0] = 9; 
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
                                    }
                                }
                            } else {
                                if (features[29] <= 0.06310121901333332) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
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
                        if (features[39] <= 538.7385101318359) {
                            if (features[30] <= 33.47344117611647) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[19] <= -0.5406474173069) {
                if (features[29] <= 0.1529378890991211) {
                    if (features[35] <= 0.011962949763983488) {
                        if (features[38] <= 1421.6216430664062) {
                            if (features[8] <= 1791.6879272460938) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 45; 
                        }
                    } else {
                        if (features[26] <= 3157099.0) {
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
                if (features[16] <= -2.7728350162506104) {
                    if (features[48] <= 12.16633653640747) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[45] <= 4.700141787528992) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 7; 
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

int RFC_inst2_2::predict_9(float features[]) {
    int classes[2];
    
    if (features[49] <= 7.328924179077148) {
        if (features[14] <= 19.5325288772583) {
            if (features[17] <= -3.972528576850891) {
                if (features[41] <= 4.56694221496582) {
                    if (features[23] <= 1.409827470779419) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[0] <= 3970.304931640625) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 66; 
                    }
                }
            } else {
                if (features[41] <= 29.717931747436523) {
                    if (features[49] <= 6.936843156814575) {
                        if (features[9] <= 0.6979223489761353) {
                            if (features[36] <= 123.58612823486328) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[31] <= 0.0004228448524372652) {
                                    if (features[32] <= 486.9212188720703) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[17] <= -2.405974268913269) {
                                        if (features[19] <= 3.2608222365379333) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 55; 
                                    }
                                }
                            }
                        } else {
                            if (features[17] <= 0.006458081305027008) {
                                if (features[40] <= 80.25780868530273) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[12] <= 637.375) {
                        if (features[7] <= 306.7459716796875) {
                            if (features[50] <= 3.3171873092651367) {
                                if (features[16] <= 0.38108187913894653) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[20] <= 4.510274171829224) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[21] <= 2.3535550832748413) {
                                    classes[0] = 22; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                }
            }
        } else {
            if (features[30] <= 105.046142578125) {
                if (features[35] <= 0.0014803640660829842) {
                    if (features[47] <= 3.668657422065735) {
                        if (features[39] <= 117.08723068237305) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 24; 
                    }
                } else {
                    if (features[30] <= 20.846861839294434) {
                        if (features[37] <= 0.0033195139840245247) {
                            if (features[40] <= 33.86674976348877) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[14] <= 25.53854751586914) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[17] <= -2.3979700803756714) {
                    if (features[41] <= 42.98765563964844) {
                        if (features[6] <= 199.66397094726562) {
                            if (features[46] <= 8.1994948387146) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            } else {
                                if (features[44] <= 7.174846410751343) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        } else {
                            if (features[48] <= 2.7891353368759155) {
                                if (features[50] <= 0.9769679605960846) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[6] <= 261.7209243774414) {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[16] <= -7.8579065799713135) {
                                    if (features[19] <= 1.2458783388137817) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 37; 
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 257.504150390625) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[37] <= 0.0005748616677010432) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[27] <= 27.108576774597168) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[23] <= 4.594748854637146) {
                                if (features[4] <= 104.23411178588867) {
                                    if (features[0] <= 11972.763671875) {
                                        if (features[41] <= 7.140369176864624) {
                                            if (features[32] <= 580.8301391601562) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[30] <= 2600.2557373046875) {
                                                classes[0] = 85; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[20] <= 2.4135578870773315) {
                                                    classes[0] = 13; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[3] <= 0.6641020178794861) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[14] <= 24.701337814331055) {
                                        if (features[27] <= 670.9105377197266) {
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
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[19] <= 1.162496030330658) {
            if (features[12] <= 347.8333282470703) {
                if (features[39] <= 90.14702987670898) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[34] <= 2854242.375) {
                        if (features[8] <= 3301.7998046875) {
                            if (features[2] <= 298102.421875) {
                                if (features[49] <= 11.727656841278076) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 44; 
                            }
                        } else {
                            if (features[23] <= 2.1269888281822205) {
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
                }
            } else {
                if (features[40] <= 7.971604108810425) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 123; 
                }
            }
        } else {
            if (features[2] <= 771322.625) {
                if (features[39] <= 717.6504821777344) {
                    if (features[18] <= 2.069147825241089) {
                        if (features[45] <= 9.122328758239746) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[2] <= 725653.6875) {
                            if (features[3] <= 0.7694405019283295) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            } else {
                                if (features[24] <= -0.3829640969634056) {
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
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 12; 
                }
            } else {
                if (features[43] <= 8.395627975463867) {
                    if (features[34] <= 712416.578125) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 49; 
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
    
    if (features[13] <= 172.66097259521484) {
        if (features[4] <= 53.250165939331055) {
            if (features[15] <= -11.587023258209229) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[48] <= 9.45136308670044) {
                    if (features[20] <= 3.6653088331222534) {
                        if (features[41] <= 7.1834399700164795) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 63; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[18] <= 3.067241072654724) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[26] <= 2193531.25) {
                if (features[39] <= 663.8695068359375) {
                    if (features[42] <= 6.533568382263184) {
                        if (features[38] <= 868.4930725097656) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        if (features[10] <= 109.52143096923828) {
                            if (features[35] <= 0.0021911937510594726) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 32; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[9] <= 0.6976368129253387) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[25] <= -0.7920701503753662) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                if (features[10] <= 106.28092956542969) {
                    if (features[27] <= 320.552978515625) {
                        if (features[38] <= 1333.3578491210938) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    } else {
                        if (features[2] <= 715108.125) {
                            if (features[24] <= 0.8532744348049164) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                if (features[26] <= 3074747.125) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[33] <= 2969.695556640625) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[48] <= 2.612222909927368) {
                        if (features[8] <= 1819.3190307617188) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 41; 
                    }
                }
            }
        }
    } else {
        if (features[4] <= 48.37047576904297) {
            if (features[50] <= 1.7488054633140564) {
                classes[0] = 29; 
                classes[1] = 0; 
            } else {
                if (features[9] <= 0.6702300608158112) {
                    if (features[32] <= 166.65687561035156) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        if (features[38] <= 1992.9547119140625) {
                            if (features[6] <= 261.73463439941406) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[9] <= 0.5500631928443909) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[4] <= 47.259517669677734) {
                                    classes[0] = 0; 
                                    classes[1] = 30; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[5] <= 0.19302038103342056) {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[4] <= 79.31911087036133) {
                if (features[2] <= 708435.6875) {
                    if (features[33] <= 2067.3666381835938) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[3] <= 0.6290499567985535) {
                            if (features[43] <= 16.76416826248169) {
                                classes[0] = 0; 
                                classes[1] = 5; 
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
                    if (features[17] <= -1.205098032951355) {
                        if (features[48] <= 0.9107542037963867) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[40] <= 145.05097198486328) {
                                if (features[46] <= 3.709869384765625) {
                                    if (features[46] <= 3.523939609527588) {
                                        if (features[1] <= 16.03476572036743) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        } else {
                                            if (features[38] <= 1898.7359008789062) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[50] <= 12.077944278717041) {
                                        classes[0] = 0; 
                                        classes[1] = 65; 
                                    } else {
                                        if (features[27] <= 1807.8666381835938) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                }
                            } else {
                                if (features[26] <= 7635687.25) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    } else {
                        if (features[50] <= 5.239486932754517) {
                            if (features[11] <= 0.44991666078567505) {
                                if (features[22] <= 5.113138675689697) {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[25] <= 1.2509775161743164) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[4] <= 77.49161529541016) {
                                classes[0] = 0; 
                                classes[1] = 17; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[31] <= 0.001035241934005171) {
                    if (features[51] <= 0.8703490793704987) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[36] <= 135.8671646118164) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[51] <= 9.581668376922607) {
                                if (features[31] <= 0.0009850100905168802) {
                                    classes[0] = 0; 
                                    classes[1] = 25; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[37] <= 0.0035348059609532356) {
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
                    if (features[11] <= 0.21441666036844254) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 0.6856338679790497) {
                            if (features[14] <= 22.373037338256836) {
                                classes[0] = 0; 
                                classes[1] = 212; 
                            } else {
                                if (features[5] <= 0.1538526639342308) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[22] <= -4.473679065704346) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[18] <= 4.926224946975708) {
                                            classes[0] = 0; 
                                            classes[1] = 15; 
                                        } else {
                                            if (features[41] <= 52.596564292907715) {
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
                            if (features[29] <= 0.06567977927625179) {
                                classes[0] = 0; 
                                classes[1] = 15; 
                            } else {
                                if (features[39] <= 761.1076202392578) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
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
    return class_idx;
}

