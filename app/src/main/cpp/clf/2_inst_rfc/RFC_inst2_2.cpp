#include "RFC_inst2_2.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_2::predict_0(float features[]) {
    int classes[2];
    
    if (features[33] <= 10767.76806640625) {
        if (features[14] <= 10.173155307769775) {
            if (features[7] <= 353.32403564453125) {
                if (features[8] <= 2515.367919921875) {
                    if (features[21] <= 1.7851585149765015) {
                        if (features[19] <= 1.9710055589675903) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            if (features[27] <= 617.5635986328125) {
                                if (features[18] <= -0.3642149865627289) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[23] <= -0.6771425008773804) {
                                        classes[0] = 40; 
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
                        }
                    } else {
                        if (features[42] <= 3.4549179077148438) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            if (features[25] <= 0.37146748788654804) {
                                if (features[11] <= 0.5080834925174713) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 42; 
                                }
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[22] <= -4.52299165725708) {
                        if (features[51] <= 4.541070938110352) {
                            if (features[26] <= 4871976.375) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        if (features[39] <= 140.89849853515625) {
                            if (features[45] <= 5.582718372344971) {
                                if (features[19] <= 1.3931759595870972) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[11] <= 0.660333514213562) {
                                        if (features[8] <= 2980.860107421875) {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[16] <= -10.471071243286133) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 45; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[16] <= -9.120924472808838) {
                                    if (features[25] <= -2.02245956659317) {
                                        if (features[32] <= 838.4135894775391) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 13; 
                                }
                            }
                        } else {
                            if (features[15] <= 0.35077598690986633) {
                                classes[0] = 61; 
                                classes[1] = 0; 
                            } else {
                                if (features[25] <= -0.33217449486255646) {
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
            } else {
                if (features[39] <= 42.925249099731445) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[17] <= -4.358461618423462) {
                        if (features[9] <= 0.8633590042591095) {
                            if (features[30] <= 1.499999996212864e-06) {
                                if (features[49] <= 2.059572994709015) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 91; 
                                classes[1] = 0; 
                            }
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
            if (features[2] <= 647991.625) {
                classes[0] = 5; 
                classes[1] = 0; 
            } else {
                if (features[1] <= 8.428923606872559) {
                    if (features[45] <= 10.693621158599854) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[8] <= 2084.7704467773438) {
                        classes[0] = 0; 
                        classes[1] = 23; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[28] <= 139114655744.0) {
            classes[0] = 0; 
            classes[1] = 13; 
        } else {
            if (features[47] <= 0.835735023021698) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[51] <= 8.821739673614502) {
                    if (features[41] <= 3.784206986427307) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[24] <= -3.4886205196380615) {
                            if (features[5] <= 0.2212499976158142) {
                                if (features[21] <= 1.6254445314407349) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[32] <= 701.2545166015625) {
                                if (features[4] <= 18.97527837753296) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[43] <= 3.3578234910964966) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[43] <= 5.56455659866333) {
                                        if (features[49] <= 4.418305993080139) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 22; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
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
    
    if (features[3] <= 0.6617000102996826) {
        if (features[9] <= 0.8511455059051514) {
            if (features[0] <= 6129.99609375) {
                if (features[33] <= 8608.984375) {
                    if (features[26] <= 571944.078125) {
                        if (features[13] <= 182.58372497558594) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 28; 
                    }
                } else {
                    if (features[17] <= -13.012931823730469) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        if (features[15] <= 0.6937344968318939) {
                            classes[0] = 22; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[33] <= 8067.85546875) {
                    if (features[7] <= 104.32375717163086) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[32] <= 1335.57373046875) {
                            classes[0] = 71; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 56.82889270782471) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                } else {
                    if (features[39] <= 230.39505767822266) {
                        if (features[51] <= 2.524155020713806) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[37] <= 0.03461799956858158) {
                            if (features[25] <= -0.3378239944577217) {
                                classes[0] = 19; 
                                classes[1] = 0; 
                            } else {
                                if (features[25] <= 0.23460649698972702) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 0.5383335053920746) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[29] <= 0.03289249911904335) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[27] <= 58.1224250793457) {
                    if (features[25] <= -0.8414790034294128) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[44] <= 2.691918969154358) {
                            if (features[6] <= 391.4845428466797) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[14] <= 6.769314289093018) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 27; 
                }
            }
        }
    } else {
        if (features[6] <= 318.15916442871094) {
            if (features[37] <= 0.013513999991118908) {
                classes[0] = 0; 
                classes[1] = 10; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            if (features[22] <= -5.993508338928223) {
                if (features[9] <= 0.665571004152298) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                }
            } else {
                if (features[29] <= 0.08100400120019913) {
                    if (features[15] <= 1.252334475517273) {
                        if (features[33] <= 15335.8330078125) {
                            if (features[41] <= 5.856385946273804) {
                                if (features[20] <= 7.629966497421265) {
                                    classes[0] = 118; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[17] <= -4.888068437576294) {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[16] <= -7.2166969776153564) {
                                    if (features[38] <= 6372.218505859375) {
                                        if (features[45] <= 4.265649914741516) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            if (features[45] <= 7.9177470207214355) {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    } else {
                                        if (features[39] <= 68.81598854064941) {
                                            if (features[33] <= 5577.981201171875) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            classes[0] = 52; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[42] <= 8.781200170516968) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[27] <= 494.24192810058594) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[37] <= 0.006102000130340457) {
                            if (features[0] <= 7994.912109375) {
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
                } else {
                    if (features[5] <= 0.15447700023651123) {
                        classes[0] = 0; 
                        classes[1] = 4; 
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

int RFC_inst2_2::predict_2(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.5697914958000183) {
        if (features[6] <= 318.15916442871094) {
            if (features[21] <= 3.0207929611206055) {
                classes[0] = 0; 
                classes[1] = 26; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            if (features[7] <= 369.31878662109375) {
                if (features[29] <= 0.043804001063108444) {
                    if (features[25] <= -0.5890794992446899) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[42] <= 2.1064175367355347) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[22] <= -1.6913095116615295) {
                            classes[0] = 0; 
                            classes[1] = 42; 
                        } else {
                            if (features[11] <= 0.5435000061988831) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            } else {
                if (features[45] <= 19.38109016418457) {
                    classes[0] = 23; 
                    classes[1] = 0; 
                } else {
                    if (features[9] <= 0.7292799949645996) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[14] <= 12.323540210723877) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[22] <= -5.534626483917236) {
            if (features[46] <= 18.762873649597168) {
                if (features[15] <= -6.112518072128296) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 12; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        } else {
            if (features[17] <= -4.54890251159668) {
                if (features[30] <= 11525.604736328125) {
                    if (features[9] <= 0.8696934878826141) {
                        if (features[38] <= 50677.57421875) {
                            if (features[41] <= 6.470376968383789) {
                                if (features[25] <= 0.8072589933872223) {
                                    classes[0] = 186; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[45] <= 6.4149980545043945) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[4] <= 163.6938934326172) {
                                    if (features[50] <= 0.7846895158290863) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[48] <= 1.3820520043373108) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[15] <= 1.8194829821586609) {
                                                classes[0] = 63; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[29] <= 0.03520950023084879) {
                                                    classes[0] = 2; 
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
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[22] <= -3.1472190618515015) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
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
            } else {
                if (features[13] <= 188.1191864013672) {
                    if (features[45] <= 2.4152565002441406) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    }
                } else {
                    if (features[15] <= -2.0823569893836975) {
                        if (features[19] <= 1.296011507511139) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 29; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
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

int RFC_inst2_2::predict_3(float features[]) {
    int classes[2];
    
    if (features[2] <= 1348475.3125) {
        if (features[32] <= 919.0366516113281) {
            if (features[47] <= 1.649849534034729) {
                if (features[19] <= 6.148684978485107) {
                    if (features[31] <= 0.0009224999812431633) {
                        classes[0] = 21; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[35] <= 0.0005079999973531812) {
                        if (features[51] <= 1.4557480216026306) {
                            if (features[10] <= 306.2135009765625) {
                                classes[0] = 0; 
                                classes[1] = 27; 
                            } else {
                                if (features[4] <= 54.69852828979492) {
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
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[10] <= 261.429931640625) {
                    classes[0] = 0; 
                    classes[1] = 34; 
                } else {
                    if (features[42] <= 4.338484525680542) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            }
        } else {
            if (features[13] <= 157.12239837646484) {
                classes[0] = 0; 
                classes[1] = 5; 
            } else {
                if (features[33] <= 21631.9423828125) {
                    if (features[36] <= 2727.1749267578125) {
                        if (features[40] <= 40.48014831542969) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 25; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        }
    } else {
        if (features[9] <= 0.8511035144329071) {
            if (features[15] <= -0.36754900217056274) {
                if (features[16] <= -7.0122294425964355) {
                    if (features[33] <= 1621.9591674804688) {
                        if (features[8] <= 2863.7203369140625) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[13] <= 184.069091796875) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[25] <= 0.2546809986233711) {
                                if (features[17] <= -10.047896385192871) {
                                    if (features[20] <= 5.435234546661377) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[8] <= 2397.360107421875) {
                                        if (features[8] <= 2396.200927734375) {
                                            classes[0] = 31; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 181; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[32] <= 251.9624481201172) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[47] <= 1.187608540058136) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 15; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[22] <= -1.3344529867172241) {
                        if (features[14] <= -2.8338974714279175) {
                            if (features[18] <= 5.792303681373596) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[39] <= 89.19287490844727) {
                                if (features[31] <= 0.00022799999715061858) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 12; 
                            }
                        }
                    } else {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[41] <= 6.042980670928955) {
                    if (features[22] <= -4.198652029037476) {
                        if (features[24] <= -1.3228445425629616) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[25] <= 0.6881459951400757) {
                            classes[0] = 24; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[8] <= 2916.1483154296875) {
                        if (features[25] <= 2.077756941318512) {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[19] <= 6.8299477100372314) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[18] <= 1.0060495436191559) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[3] <= 0.6594429910182953) {
                    classes[0] = 0; 
                    classes[1] = 16; 
                } else {
                    if (features[0] <= 6754.6162109375) {
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
    
    if (features[42] <= 3.3270539045333862) {
        if (features[33] <= 797.7484436035156) {
            if (features[18] <= 1.3051679730415344) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
            }
        } else {
            if (features[33] <= 8426.08984375) {
                if (features[18] <= 3.819177031517029) {
                    if (features[32] <= 174.94713592529297) {
                        if (features[18] <= -0.38334499299526215) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 131; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[13] <= 194.2145233154297) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[50] <= 1.830938458442688) {
                    if (features[22] <= -3.389586091041565) {
                        if (features[9] <= 0.8554485142230988) {
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
                    classes[0] = 0; 
                    classes[1] = 8; 
                }
            }
        }
    } else {
        if (features[35] <= 0.0007340000011026859) {
            if (features[44] <= 2.0542160272598267) {
                if (features[9] <= 0.8518054783344269) {
                    if (features[41] <= 11.162092685699463) {
                        classes[0] = 21; 
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
                if (features[50] <= 1.1809614896774292) {
                    if (features[15] <= 2.108576536178589) {
                        if (features[50] <= 0.44976601004600525) {
                            if (features[49] <= 1.3690540194511414) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[7] <= 329.5670623779297) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[31] <= 0.0016429999959655106) {
                                if (features[6] <= 428.4212646484375) {
                                    classes[0] = 0; 
                                    classes[1] = 37; 
                                } else {
                                    if (features[12] <= 557.7916564941406) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
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
                    if (features[51] <= 4.261729955673218) {
                        if (features[43] <= 6.9312379360198975) {
                            if (features[38] <= 9498.205078125) {
                                if (features[12] <= 463.0833282470703) {
                                    classes[0] = 16; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[17] <= -5.329729080200195) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[0] <= 7632.915283203125) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[26] <= 4564782.0) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            } else {
                                if (features[29] <= 0.05755399912595749) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[17] <= -5.28157651424408) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            }
        } else {
            if (features[17] <= -9.961711883544922) {
                if (features[11] <= 0.4121669977903366) {
                    classes[0] = 0; 
                    classes[1] = 25; 
                } else {
                    if (features[42] <= 9.285094738006592) {
                        if (features[16] <= -9.464208602905273) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[15] <= 2.142143487930298) {
                    if (features[18] <= 4.730358362197876) {
                        if (features[0] <= 4098.8455810546875) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[2] <= 2326558.25) {
                                if (features[47] <= 8.034875869750977) {
                                    if (features[5] <= 0.11080599948763847) {
                                        if (features[22] <= -1.2508459985256195) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 81; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[15] <= -0.5183975026011467) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[49] <= 3.6566054821014404) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    } else {
                        if (features[10] <= 154.2239227294922) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
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

int RFC_inst2_2::predict_5(float features[]) {
    int classes[2];
    
    if (features[9] <= 0.8552284836769104) {
        if (features[29] <= 0.08897450193762779) {
            if (features[2] <= 1082406.5625) {
                if (features[0] <= 4625.979736328125) {
                    if (features[32] <= 1456.1536865234375) {
                        if (features[27] <= 198.90335083007812) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[29] <= 0.04672200046479702) {
                        classes[0] = 0; 
                        classes[1] = 18; 
                    } else {
                        if (features[17] <= -5.977529525756836) {
                            if (features[28] <= 121784217600.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                }
            } else {
                if (features[10] <= 55.89914512634277) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[44] <= 3.002209424972534) {
                        if (features[9] <= 0.7347695231437683) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[2] <= 1283034.5625) {
                                if (features[17] <= -4.536026477813721) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                if (features[10] <= 155.1400146484375) {
                                    if (features[8] <= 2422.3177490234375) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 15; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 134; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[19] <= 5.571605443954468) {
                            if (features[34] <= 516496.28125) {
                                if (features[11] <= 0.6030420064926147) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[51] <= 0.6269735097885132) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 21; 
                                    }
                                }
                            } else {
                                if (features[51] <= 5.5711915493011475) {
                                    if (features[39] <= 127.99744033813477) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        } else {
                            if (features[25] <= -2.9671884775161743) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[29] <= 0.0124719999730587) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[22] <= -5.953939437866211) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[21] <= 1.794487476348877) {
                                            if (features[14] <= 5.196223974227905) {
                                                if (features[4] <= 89.66630935668945) {
                                                    if (features[9] <= 0.6830840110778809) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 25; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[49] <= 6.517141342163086) {
                                                        classes[0] = 0; 
                                                        classes[1] = 5; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 7; 
                                            }
                                        } else {
                                            if (features[13] <= 176.61363220214844) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 119; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[7] <= 475.06617736816406) {
                classes[0] = 0; 
                classes[1] = 15; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[27] <= 30.819862365722656) {
            if (features[19] <= 5.8261895179748535) {
                classes[0] = 9; 
                classes[1] = 0; 
            } else {
                if (features[34] <= 725289.765625) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[44] <= 1.5628460049629211) {
                if (features[51] <= 0.8294200003147125) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 23; 
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
    
    if (features[11] <= 0.5825000107288361) {
        if (features[42] <= 2.6628395318984985) {
            if (features[15] <= -3.203157067298889) {
                classes[0] = 20; 
                classes[1] = 0; 
            } else {
                if (features[27] <= 29.92868137359619) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[39] <= 225.78250122070312) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[7] <= 383.20306396484375) {
                if (features[32] <= 1621.3180541992188) {
                    if (features[16] <= -8.555438041687012) {
                        if (features[31] <= 0.0005070000188425183) {
                            classes[0] = 0; 
                            classes[1] = 16; 
                        } else {
                            if (features[20] <= 6.3527796268463135) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                if (features[0] <= 7379.825927734375) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 43; 
                    }
                } else {
                    if (features[25] <= 2.7809659838676453) {
                        if (features[5] <= 0.10276300087571144) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[23] <= 1.091516524553299) {
                                classes[0] = 12; 
                                classes[1] = 0; 
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
            } else {
                if (features[21] <= 1.9254900217056274) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    if (features[28] <= 1653109161984.0) {
                        if (features[29] <= 0.042516499757766724) {
                            if (features[25] <= -1.1702075004577637) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[45] <= 6.52726411819458) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[28] <= 48089781248.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[4] <= 12.422989845275879) {
                                if (features[2] <= 998759.65625) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 16; 
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
    } else {
        if (features[12] <= 450.0416717529297) {
            if (features[43] <= 8.846578598022461) {
                if (features[48] <= 4.372594594955444) {
                    classes[0] = 82; 
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
            if (features[2] <= 1364982.375) {
                if (features[48] <= 3.1269900798797607) {
                    if (features[18] <= 0.7093539834022522) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 23; 
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[7] <= 99.0665168762207) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[36] <= 3008.7808837890625) {
                        if (features[5] <= 0.23049750179052353) {
                            if (features[33] <= 503.55906677246094) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[14] <= 4.571726560592651) {
                                    classes[0] = 80; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[31] <= 0.0011479999811854213) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[15] <= -0.5040955096483231) {
                            if (features[13] <= 184.3137664794922) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[51] <= 0.30060700327157974) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[27] <= 105.57475280761719) {
                                        if (features[51] <= 0.88526251912117) {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[13] <= 186.43389129638672) {
                                            if (features[16] <= -10.808903694152832) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[8] <= 2492.6346435546875) {
                                                if (features[40] <= 4.530063629150391) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 6; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 68; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[39] <= 142.64232635498047) {
                                if (features[11] <= 0.7072084844112396) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                } else {
                                    if (features[5] <= 0.1875320002436638) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[42] <= 3.7050623893737793) {
                                    if (features[18] <= 2.3077030181884766) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    }
                                } else {
                                    if (features[46] <= 2.947811484336853) {
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
    
    if (features[39] <= 222.30902099609375) {
        if (features[28] <= 41303429120.0) {
            if (features[15] <= 1.9991530776023865) {
                classes[0] = 0; 
                classes[1] = 11; 
            } else {
                if (features[22] <= -6.2720136642456055) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[40] <= 30.39456844329834) {
                if (features[17] <= -4.252184152603149) {
                    if (features[48] <= 30.96763038635254) {
                        if (features[8] <= 1715.5415649414062) {
                            if (features[44] <= 3.0522735118865967) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        } else {
                            if (features[19] <= 12.132165908813477) {
                                if (features[4] <= 163.8304214477539) {
                                    if (features[15] <= -2.804865002632141) {
                                        if (features[22] <= -6.083783864974976) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 134; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[6] <= 395.44117736816406) {
                                            if (features[25] <= -0.4405975043773651) {
                                                classes[0] = 7; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[37] <= 0.010612000245600939) {
                                                    classes[0] = 0; 
                                                    classes[1] = 8; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[13] <= 175.0207977294922) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 82; 
                                                classes[1] = 0; 
                                            }
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
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    if (features[2] <= 1842519.3125) {
                        if (features[21] <= 0.32960548996925354) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 19; 
                        }
                    } else {
                        if (features[19] <= 1.6979550123214722) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 16; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[11] <= 0.5737079977989197) {
                    if (features[45] <= 3.320244550704956) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 21; 
                    }
                } else {
                    if (features[15] <= 0.3762560039758682) {
                        classes[0] = 17; 
                        classes[1] = 0; 
                    } else {
                        if (features[23] <= -1.1233889609575272) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[38] <= 41143.052734375) {
            if (features[9] <= 0.8586010038852692) {
                if (features[2] <= 1508978.0) {
                    if (features[25] <= -0.4568694978952408) {
                        if (features[32] <= 640.1402282714844) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[3] <= 0.6676180064678192) {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[27] <= 178.90036010742188) {
                            if (features[47] <= 1.0905914902687073) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= 3.3060359954833984) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                }
                            }
                        } else {
                            if (features[12] <= 295.5) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[17] <= -7.313472032546997) {
                                    classes[0] = 0; 
                                    classes[1] = 23; 
                                } else {
                                    if (features[41] <= 12.369110584259033) {
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
                    if (features[51] <= 0.29282549768686295) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[23] <= -4.823621034622192) {
                            if (features[30] <= 0.0005785000203104573) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 23; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[31] <= 0.0001984999980777502) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 30; 
                }
            }
        } else {
            classes[0] = 12; 
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

int RFC_inst2_2::predict_8(float features[]) {
    int classes[2];
    
    if (features[13] <= 187.52662658691406) {
        if (features[31] <= 0.00020450000010896474) {
            if (features[17] <= -4.2516255378723145) {
                if (features[39] <= 37.765780448913574) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[18] <= 5.023955345153809) {
                        if (features[25] <= -0.7942860126495361) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 30; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
            }
        } else {
            if (features[20] <= 10.362489700317383) {
                if (features[47] <= 2.419835925102234) {
                    if (features[13] <= 175.1838607788086) {
                        if (features[41] <= 8.203125476837158) {
                            if (features[50] <= 1.5560129880905151) {
                                classes[0] = 0; 
                                classes[1] = 29; 
                            } else {
                                if (features[44] <= 7.398239612579346) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 0.3736664950847626) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[40] <= 7.245176076889038) {
                            if (features[24] <= -1.4099149852991104) {
                                classes[0] = 0; 
                                classes[1] = 17; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[16] <= -10.069167613983154) {
                                if (features[43] <= 6.0459558963775635) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[28] <= 99415615488.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 18; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 26; 
                }
            } else {
                if (features[36] <= 1387.3025512695312) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[35] <= 0.001357999979518354) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        }
    } else {
        if (features[6] <= 385.0247497558594) {
            if (features[39] <= 153.97166442871094) {
                if (features[9] <= 0.7705624997615814) {
                    if (features[32] <= 919.4192810058594) {
                        if (features[50] <= 5.291555166244507) {
                            classes[0] = 0; 
                            classes[1] = 22; 
                        } else {
                            if (features[48] <= 6.0278260707855225) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[40] <= 36.54314994812012) {
                            if (features[5] <= 0.24351350218057632) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            } else {
                if (features[47] <= 1.4303665161132812) {
                    if (features[30] <= 0.5359304761514068) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 11; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[17] <= -3.0080825090408325) {
                if (features[51] <= 7.932461977005005) {
                    if (features[19] <= 12.132165908813477) {
                        if (features[47] <= 4.768613576889038) {
                            if (features[22] <= -7.057309865951538) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[3] <= 0.8950744867324829) {
                                    if (features[19] <= 5.687387466430664) {
                                        if (features[24] <= -3.1094419956207275) {
                                            if (features[40] <= 15.107008934020996) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            if (features[5] <= 0.20697200298309326) {
                                                classes[0] = 51; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[26] <= 2036539.9375) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 163; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[38] <= 5099.520263671875) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[17] <= -6.579204559326172) {
                                if (features[24] <= -2.2132710218429565) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[22] <= -5.366389274597168) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[13] <= 202.32514190673828) {
                    classes[0] = 0; 
                    classes[1] = 11; 
                } else {
                    if (features[22] <= -1.3152214884757996) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 10; 
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
    
    if (features[29] <= 0.04461649991571903) {
        if (features[14] <= 12.443122386932373) {
            if (features[36] <= 9171.81640625) {
                if (features[19] <= 12.484198570251465) {
                    if (features[43] <= 0.4887855052947998) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[17] <= -12.751125812530518) {
                            if (features[32] <= 1477.6305236816406) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[33] <= 12308.3896484375) {
                                if (features[36] <= 1650.8326416015625) {
                                    classes[0] = 75; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[13] <= 219.79901123046875) {
                                        if (features[15] <= 0.9531034827232361) {
                                            if (features[16] <= -5.227708101272583) {
                                                if (features[24] <= -3.3279030323028564) {
                                                    if (features[46] <= 2.938385486602783) {
                                                        if (features[0] <= 9069.80078125) {
                                                            classes[0] = 0; 
                                                            classes[1] = 4; 
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 20; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[45] <= 1.9857594966888428) {
                                                        if (features[2] <= 1949151.125) {
                                                            if (features[18] <= -0.26965899765491486) {
                                                                if (features[30] <= 0.07306249926386954) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 14; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        }
                                                    } else {
                                                        if (features[9] <= 0.8611975014209747) {
                                                            classes[0] = 128; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[46] <= 3.238465428352356) {
                                                                classes[0] = 11; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (features[20] <= 4.65386688709259) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[25] <= 1.249698519706726) {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[33] <= 2713.09619140625) {
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
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                if (features[1] <= 11.630399703979492) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[36] <= 11107.142578125) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[37] <= 0.03204199951142073) {
                if (features[50] <= 5.291555166244507) {
                    classes[0] = 0; 
                    classes[1] = 21; 
                } else {
                    if (features[42] <= 15.924216747283936) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[13] <= 187.9955825805664) {
            if (features[4] <= 24.283313751220703) {
                if (features[4] <= 8.279645919799805) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    if (features[28] <= 858665353216.0) {
                        if (features[44] <= 1.0425159931182861) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[42] <= 2.1064175367355347) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 57; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[15] <= -7.081557512283325) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[45] <= 3.2669509947299957) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[28] <= 80278806528.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[1] <= 3.209675908088684) {
                                if (features[26] <= 3568657.75) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 16; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[18] <= 1.4646700024604797) {
                if (features[32] <= 107.92764282226562) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[17] <= -3.233386993408203) {
                        classes[0] = 24; 
                        classes[1] = 0; 
                    } else {
                        if (features[13] <= 210.65174102783203) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[39] <= 122.91668319702148) {
                    if (features[26] <= 1622047.4375) {
                        if (features[51] <= 0.4327999949455261) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    }
                } else {
                    if (features[13] <= 210.09522247314453) {
                        if (features[9] <= 0.7815684974193573) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            if (features[35] <= 0.00018649999401532114) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                if (features[26] <= 1847968.9375) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
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
    
    if (features[2] <= 1399748.0625) {
        if (features[42] <= 2.922123432159424) {
            if (features[12] <= 326.9583435058594) {
                classes[0] = 0; 
                classes[1] = 5; 
            } else {
                if (features[47] <= 3.2174559831619263) {
                    if (features[32] <= 288.91062927246094) {
                        if (features[26] <= 1336644.03125) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[39] <= 174.57709503173828) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[41] <= 7.538447618484497) {
                            classes[0] = 25; 
                            classes[1] = 0; 
                        } else {
                            if (features[50] <= 1.9808380007743835) {
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
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[17] <= -5.637292861938477) {
                if (features[10] <= 199.07675170898438) {
                    if (features[32] <= 1442.6556396484375) {
                        if (features[47] <= 2.3859130144119263) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 19; 
                        }
                    } else {
                        if (features[2] <= 1049689.53125) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[21] <= 1.9254900217056274) {
                        if (features[19] <= 6.48143196105957) {
                            if (features[30] <= 2.5000000505315256e-06) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    } else {
                        if (features[36] <= 10376.65478515625) {
                            if (features[27] <= 1285.1617126464844) {
                                if (features[24] <= -4.3684070110321045) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 27; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[6] <= 365.7040710449219) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[6] <= 387.0057678222656) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 47; 
                }
            }
        }
    } else {
        if (features[32] <= 118.32529830932617) {
            if (features[25] <= -1.16354101896286) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 9; 
            }
        } else {
            if (features[41] <= 4.235941410064697) {
                if (features[5] <= 0.2530135065317154) {
                    if (features[39] <= 261.1790771484375) {
                        if (features[29] <= 0.012394499965012074) {
                            if (features[10] <= 218.4877700805664) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 134; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[11] <= 0.6425829827785492) {
                            classes[0] = 4; 
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
                if (features[14] <= 2.495368480682373) {
                    if (features[15] <= 1.252334475517273) {
                        if (features[5] <= 0.1290994957089424) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[39] <= 73.48877334594727) {
                                if (features[5] <= 0.17674200236797333) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                if (features[16] <= -6.070666074752808) {
                                    if (features[11] <= 0.620250016450882) {
                                        if (features[27] <= 170.7039566040039) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 90; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[51] <= 2.9826420545578003) {
                            if (features[23] <= -5.008569419384003) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    }
                } else {
                    if (features[7] <= 337.2195129394531) {
                        if (features[32] <= 1544.5056457519531) {
                            classes[0] = 0; 
                            classes[1] = 18; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[35] <= 0.000524500006577) {
                            if (features[20] <= 6.891930341720581) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            classes[0] = 15; 
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
    return class_idx;
}

