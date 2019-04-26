#include "RFC_inst2_1.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_1::predict_0(float features[]) {
    int classes[2];
    
    if (features[21] <= 1.6088075637817383) {
        if (features[38] <= 15616.0234375) {
            if (features[10] <= 49.89854049682617) {
                if (features[47] <= 4.518351078033447) {
                    if (features[11] <= 0.4935833811759949) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        if (features[16] <= -0.05947834253311157) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[27] <= 478.0738983154297) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            } else {
                if (features[33] <= 92773.9609375) {
                    if (features[18] <= 1.2799792289733887) {
                        if (features[42] <= 85.13687515258789) {
                            if (features[2] <= 1777092.8125) {
                                if (features[14] <= 1.660184621810913) {
                                    if (features[33] <= 2357.8906860351562) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[32] <= 4444.82275390625) {
                                        if (features[36] <= 601.5064392089844) {
                                            if (features[35] <= 0.005666991230100393) {
                                                classes[0] = 0; 
                                                classes[1] = 14; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[39] <= 62.64293670654297) {
                                                if (features[0] <= 9295.40234375) {
                                                    if (features[15] <= -8.378004312515259) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[9] <= 0.7160934209823608) {
                                                            classes[0] = 0; 
                                                            classes[1] = 9; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 14; 
                                                }
                                            } else {
                                                if (features[4] <= 153.21641540527344) {
                                                    classes[0] = 0; 
                                                    classes[1] = 229; 
                                                } else {
                                                    if (features[7] <= 168.32901000976562) {
                                                        if (features[8] <= 3271.98974609375) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 20; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[38] <= 5331.1246337890625) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[5] <= 0.19744542241096497) {
                            if (features[22] <= 2.147200644016266) {
                                if (features[45] <= 16.484692096710205) {
                                    if (features[10] <= 58.292734146118164) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[28] <= 50409402368.0) {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                        } else {
                                            if (features[2] <= 832946.1875) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[42] <= 15.5322585105896) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[25] <= 1.2936934232711792) {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[33] <= 38649.91015625) {
                                if (features[30] <= 9912.58447265625) {
                                    if (features[47] <= 1.72804856300354) {
                                        if (features[1] <= 24.371456146240234) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        if (features[46] <= 33.84871482849121) {
                                            classes[0] = 0; 
                                            classes[1] = 35; 
                                        } else {
                                            if (features[0] <= 11298.71826171875) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
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
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[3] <= 0.7591922283172607) {
                if (features[41] <= 65.7790412902832) {
                    if (features[13] <= 133.2601089477539) {
                        if (features[31] <= 0.0008867551587172784) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[50] <= 25.00353240966797) {
                            classes[0] = 0; 
                            classes[1] = 47; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[13] <= 172.20703887939453) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[36] <= 793.5279541015625) {
                    if (features[14] <= 21.747543334960938) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[33] <= 7292.57958984375) {
                        classes[0] = 18; 
                        classes[1] = 0; 
                    } else {
                        if (features[13] <= 186.1906280517578) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[26] <= 2278166.125) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[11] <= 0.4779582917690277) {
            if (features[48] <= 20.623539924621582) {
                if (features[40] <= 21.683165550231934) {
                    if (features[12] <= 282.6666564941406) {
                        if (features[38] <= 1065.6492614746094) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    } else {
                        if (features[1] <= 14.551158905029297) {
                            if (features[31] <= 0.0017063754494301975) {
                                if (features[34] <= 166944.0859375) {
                                    classes[0] = 3; 
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
                            if (features[39] <= 130.49563598632812) {
                                if (features[50] <= 3.523510217666626) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[33] <= 12299.593994140625) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[4] <= 49.5189094543457) {
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
                    if (features[32] <= 1216.65283203125) {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    } else {
                        if (features[4] <= 57.36563682556152) {
                            if (features[19] <= -7.28937554359436) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 15; 
                            }
                        } else {
                            if (features[9] <= 0.5874935686588287) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                if (features[35] <= 0.002193137421272695) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[14] <= 19.635330200195312) {
                                        if (features[3] <= 0.5154829025268555) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= -2.4230116605758667) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            if (features[21] <= 2.3302364349365234) {
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
                        }
                    }
                }
            } else {
                if (features[8] <= 4285.04541015625) {
                    if (features[15] <= -6.850800275802612) {
                        if (features[0] <= 5910.477294921875) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        if (features[48] <= 27.961505889892578) {
                            classes[0] = 27; 
                            classes[1] = 0; 
                        } else {
                            if (features[9] <= 0.6032666563987732) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[17] <= -11.476525783538818) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[44] <= 42.798683166503906) {
                    classes[0] = 46; 
                    classes[1] = 0; 
                } else {
                    if (features[47] <= 47.53996467590332) {
                        classes[0] = 0; 
                        classes[1] = 3; 
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

int RFC_inst2_1::predict_1(float features[]) {
    int classes[2];
    
    if (features[14] <= 16.51786518096924) {
        if (features[45] <= 17.079282760620117) {
            if (features[25] <= 1.344377040863037) {
                if (features[41] <= 15.651397705078125) {
                    if (features[19] <= 8.352668285369873) {
                        if (features[13] <= 169.6139678955078) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[33] <= 1072.674575805664) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[6] <= 321.0340881347656) {
                                    classes[0] = 0; 
                                    classes[1] = 45; 
                                } else {
                                    if (features[37] <= 0.004353316035121679) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[51] <= 2.2213209867477417) {
                        if (features[15] <= 3.6611467599868774) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            if (features[28] <= 86960123904.0) {
                                if (features[9] <= 0.7538819313049316) {
                                    classes[0] = 5; 
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
                    } else {
                        if (features[3] <= 0.8473867774009705) {
                            if (features[19] <= -1.362613320350647) {
                                if (features[34] <= 139222.09765625) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 32; 
                                }
                            } else {
                                if (features[31] <= 0.0030124689219519496) {
                                    if (features[50] <= 12.376370429992676) {
                                        if (features[39] <= 98.96319198608398) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[25] <= 0.31094174087047577) {
                                                classes[0] = 0; 
                                                classes[1] = 6; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 12; 
                                }
                            }
                        } else {
                            if (features[16] <= -5.139189720153809) {
                                if (features[17] <= -1.3132735341787338) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[22] <= -3.9153438806533813) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[17] <= -9.981021404266357) {
                    if (features[48] <= 1.8254863023757935) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                } else {
                    if (features[10] <= 163.17887115478516) {
                        if (features[41] <= 3.21386456489563) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[44] <= 21.575252532958984) {
                                classes[0] = 25; 
                                classes[1] = 0; 
                            } else {
                                if (features[32] <= 1907.8811645507812) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            }
        } else {
            if (features[16] <= -10.980586528778076) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[18] <= 1.462062954902649) {
                    if (features[11] <= 0.3436666280031204) {
                        if (features[42] <= 17.41704034805298) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    } else {
                        if (features[42] <= 24.714439392089844) {
                            if (features[20] <= 3.9162919521331787) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            } else {
                                if (features[27] <= 803.1135559082031) {
                                    if (features[49] <= 16.471261501312256) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[21] <= -2.657334566116333) {
                                if (features[28] <= 134149267456.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[15] <= -6.97846531867981) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 42; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[4] <= 110.67431640625) {
            if (features[32] <= 3733.4495849609375) {
                if (features[21] <= 5.581402778625488) {
                    if (features[23] <= 5.124317169189453) {
                        if (features[33] <= 80750.5625) {
                            if (features[30] <= 0.0013563642860390246) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[26] <= 1357916.5625) {
                                    if (features[21] <= 1.6934506297111511) {
                                        if (features[49] <= 5.5504655838012695) {
                                            classes[0] = 0; 
                                            classes[1] = 46; 
                                        } else {
                                            if (features[28] <= 9983114240.0) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[30] <= 4297.310791015625) {
                                                    classes[0] = 0; 
                                                    classes[1] = 11; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[40] <= 18.126975059509277) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[23] <= 0.2252015471458435) {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[2] <= 1605474.75) {
                                        if (features[28] <= 62768521216.0) {
                                            classes[0] = 0; 
                                            classes[1] = 182; 
                                        } else {
                                            if (features[36] <= 2054.0873413085938) {
                                                if (features[25] <= -0.7261943221092224) {
                                                    if (features[46] <= 11.818958640098572) {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    if (features[30] <= 3335.44970703125) {
                                                        classes[0] = 0; 
                                                        classes[1] = 21; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 66; 
                                            }
                                        }
                                    } else {
                                        if (features[28] <= 85283653632.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[43] <= 22.05561923980713) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[24] <= -0.2777240537106991) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[46] <= 11.308370590209961) {
                    if (features[36] <= 4827.53564453125) {
                        classes[0] = 0; 
                        classes[1] = 9; 
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
            if (features[21] <= -3.1563295125961304) {
                classes[0] = 0; 
                classes[1] = 12; 
            } else {
                if (features[32] <= 891.0479736328125) {
                    if (features[10] <= 65.30109977722168) {
                        if (features[1] <= 20.70347785949707) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                } else {
                    if (features[44] <= 18.78011417388916) {
                        classes[0] = 18; 
                        classes[1] = 0; 
                    } else {
                        if (features[50] <= 2.7741472721099854) {
                            classes[0] = 1; 
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
    
    if (features[20] <= 7.351109027862549) {
        if (features[42] <= 35.90058135986328) {
            if (features[11] <= 0.4672916531562805) {
                if (features[16] <= 6.383455991744995) {
                    if (features[44] <= 23.437600135803223) {
                        if (features[49] <= 24.763288497924805) {
                            if (features[4] <= 144.121826171875) {
                                if (features[4] <= 59.22801971435547) {
                                    if (features[8] <= 1349.28662109375) {
                                        if (features[40] <= 19.215555667877197) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[34] <= 169495.375) {
                                            if (features[25] <= 0.5140198916196823) {
                                                classes[0] = 0; 
                                                classes[1] = 13; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[51] <= 7.753920078277588) {
                                                classes[0] = 0; 
                                                classes[1] = 164; 
                                            } else {
                                                if (features[18] <= -1.4113249778747559) {
                                                    classes[0] = 0; 
                                                    classes[1] = 6; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (features[10] <= 99.67263412475586) {
                                        if (features[44] <= 4.273125886917114) {
                                            if (features[38] <= 4387.0555419921875) {
                                                if (features[8] <= 3811.1834716796875) {
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
                                        } else {
                                            if (features[0] <= 8444.1953125) {
                                                if (features[25] <= 1.101988136768341) {
                                                    if (features[23] <= 2.718607187271118) {
                                                        classes[0] = 0; 
                                                        classes[1] = 55; 
                                                    } else {
                                                        if (features[43] <= 15.809668779373169) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[43] <= 20.515822410583496) {
                                                        if (features[30] <= 3936.677490234375) {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[23] <= 0.24675077199935913) {
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
                                                }
                                            } else {
                                                if (features[5] <= 0.222740039229393) {
                                                    if (features[34] <= 361789.65625) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 10; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 16; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[9] <= 0.7053800523281097) {
                                            if (features[27] <= 14715.2353515625) {
                                                classes[0] = 0; 
                                                classes[1] = 73; 
                                            } else {
                                                if (features[34] <= 929470.53125) {
                                                    classes[0] = 0; 
                                                    classes[1] = 6; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[29] <= 0.01037231832742691) {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            } else {
                                                if (features[3] <= 0.427309051156044) {
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
                            } else {
                                if (features[39] <= 101.29876708984375) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[10] <= 61.55229187011719) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[36] <= 16599.11083984375) {
                                            if (features[26] <= 1499041.6875) {
                                                if (features[3] <= 0.632922500371933) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 18; 
                                            }
                                        } else {
                                            if (features[2] <= 626628.71875) {
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
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[49] <= 17.154481887817383) {
                            if (features[51] <= 0.9549532830715179) {
                                if (features[22] <= 1.2746922075748444) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[7] <= 197.34842681884766) {
                                    if (features[46] <= 12.823162078857422) {
                                        if (features[29] <= 0.009873032569885254) {
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
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 20; 
                                }
                            }
                        } else {
                            if (features[1] <= 16.241478443145752) {
                                if (features[49] <= 26.923233032226562) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[10] <= 67.47945785522461) {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    } else {
                        if (features[51] <= 12.898931622505188) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[29] <= 0.018188053742051125) {
                    if (features[17] <= 2.5765557289123535) {
                        if (features[16] <= -8.914758205413818) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 22; 
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[18] <= 3.0278427600860596) {
                        if (features[39] <= 139.65216827392578) {
                            if (features[22] <= -7.581544876098633) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[13] <= 226.27904510498047) {
                                    classes[0] = 32; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[31] <= 0.0015067216008901596) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                if (features[10] <= 122.55132675170898) {
                                    if (features[45] <= 26.252267837524414) {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[18] <= 6.705001592636108) {
                            classes[0] = 0; 
                            classes[1] = 28; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[49] <= 7.851163148880005) {
                if (features[23] <= 1.2808760404586792) {
                    if (features[48] <= 6.729106903076172) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        if (features[30] <= 1212.27587890625) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[34] <= 969992.3125) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[26] <= 17329416.0) {
                    if (features[7] <= 283.14251708984375) {
                        if (features[32] <= 8016.055908203125) {
                            if (features[17] <= -4.875301361083984) {
                                if (features[17] <= -7.962810277938843) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 30; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[6] <= 245.4512939453125) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        }
    } else {
        if (features[37] <= 0.0018545970669947565) {
            if (features[51] <= 5.798815965652466) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        } else {
            if (features[16] <= -11.218743562698364) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[21] <= -5.733701229095459) {
                    if (features[21] <= -10.837457656860352) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    classes[0] = 40; 
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

int RFC_inst2_1::predict_3(float features[]) {
    int classes[2];
    
    if (features[48] <= 32.47167205810547) {
        if (features[14] <= 14.64091157913208) {
            if (features[34] <= 692132.875) {
                if (features[35] <= 0.0012805682490579784) {
                    if (features[0] <= 5535.971923828125) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[23] <= -6.642910480499268) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[26] <= 6187607.0) {
                                if (features[51] <= 17.25265407562256) {
                                    if (features[47] <= 16.554268836975098) {
                                        classes[0] = 0; 
                                        classes[1] = 30; 
                                    } else {
                                        if (features[20] <= 0.7583615779876709) {
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
                    }
                } else {
                    if (features[9] <= 0.5890980064868927) {
                        if (features[28] <= 80583368704.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    } else {
                        if (features[3] <= 0.6841217875480652) {
                            if (features[21] <= 4.116689205169678) {
                                if (features[22] <= -4.690999507904053) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[35] <= 0.003960721893236041) {
                                        if (features[38] <= 3996.90966796875) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[15] <= 18.64445924758911) {
                                                classes[0] = 0; 
                                                classes[1] = 23; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[22] <= -2.6296441555023193) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            if (features[17] <= 4.18188738822937) {
                                                classes[0] = 12; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[9] <= 0.6520065069198608) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 14; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[51] <= 10.571862697601318) {
                                if (features[5] <= 0.15717079490423203) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[29] <= 0.013689964544028044) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 46; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[17] <= -2.6734525561332703) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[9] <= 0.6718646883964539) {
                    if (features[7] <= 113.23517227172852) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[41] <= 55.04753112792969) {
                            classes[0] = 0; 
                            classes[1] = 56; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[45] <= 7.627855539321899) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[25] <= -3.4784003496170044) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[3] <= 0.6214770972728729) {
                                classes[0] = 14; 
                                classes[1] = 0; 
                            } else {
                                if (features[28] <= 86062854144.0) {
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
            }
        } else {
            if (features[26] <= 1802225.1875) {
                if (features[44] <= 20.822250366210938) {
                    if (features[4] <= 137.55613708496094) {
                        if (features[22] <= 3.886078715324402) {
                            if (features[29] <= 0.08200449496507645) {
                                if (features[25] <= 1.0917516946792603) {
                                    if (features[44] <= 2.663253903388977) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[12] <= 139.375) {
                                            if (features[15] <= 7.881243944168091) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[16] <= 6.149919271469116) {
                                                if (features[22] <= -5.074606895446777) {
                                                    if (features[6] <= 262.2873840332031) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 91; 
                                                }
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[15] <= 5.912232875823975) {
                                        if (features[17] <= 2.6325279474258423) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[19] <= -0.5536463856697083) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[5] <= 0.1475810781121254) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[50] <= 1.6195859909057617) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[17] <= 9.42767596244812) {
                    if (features[23] <= 2.5885009765625) {
                        if (features[51] <= 19.800188064575195) {
                            if (features[43] <= 35.00124931335449) {
                                if (features[29] <= 0.009574881289154291) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[8] <= 3311.43359375) {
                                        classes[0] = 0; 
                                        classes[1] = 186; 
                                    } else {
                                        if (features[9] <= 0.591046541929245) {
                                            classes[0] = 0; 
                                            classes[1] = 22; 
                                        } else {
                                            if (features[33] <= 5181.501220703125) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 6; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[11] <= 0.2627499997615814) {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                } else {
                                    if (features[31] <= 0.01259529939852655) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[10] <= 97.69632339477539) {
                            if (features[3] <= 0.784307062625885) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                if (features[12] <= 451.2083435058594) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[47] <= 4.570533990859985) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[43] <= 5.887514710426331) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[24] <= 3.8386298418045044) {
                                        classes[0] = 0; 
                                        classes[1] = 15; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[26] <= 1032020.5625) {
            classes[0] = 0; 
            classes[1] = 3; 
        } else {
            if (features[15] <= -8.395235300064087) {
                if (features[45] <= 32.31228256225586) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[3] <= 0.9825712740421295) {
                    if (features[9] <= 0.5802345275878906) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[26] <= 7828184.5) {
                            classes[0] = 36; 
                            classes[1] = 0; 
                        } else {
                            if (features[46] <= 44.622819900512695) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 3; 
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
    
    if (features[41] <= 61.26656913757324) {
        if (features[23] <= 5.249985694885254) {
            if (features[12] <= 390.7083282470703) {
                if (features[11] <= 0.2991666793823242) {
                    if (features[24] <= -8.363098859786987) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[15] <= 6.157539367675781) {
                            if (features[4] <= 223.93453216552734) {
                                if (features[42] <= 44.67205238342285) {
                                    if (features[7] <= 103.13430786132812) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[38] <= 7752.5380859375) {
                                            classes[0] = 0; 
                                            classes[1] = 152; 
                                        } else {
                                            if (features[24] <= 3.808498740196228) {
                                                classes[0] = 0; 
                                                classes[1] = 26; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[26] <= 748877.5625) {
                                if (features[20] <= 1.5691518485546112) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[27] <= 355.5941925048828) {
                                    if (features[31] <= 0.0015730505110695958) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[11] <= 0.25975000858306885) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 21; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[4] <= 41.729244232177734) {
                        classes[0] = 0; 
                        classes[1] = 30; 
                    } else {
                        if (features[9] <= 0.6959463059902191) {
                            if (features[24] <= 1.2964740991592407) {
                                if (features[26] <= 1438616.375) {
                                    if (features[32] <= 1427.2144165039062) {
                                        if (features[21] <= 4.286585688591003) {
                                            if (features[16] <= 6.292802572250366) {
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
                                        if (features[41] <= 10.17051362991333) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[46] <= 16.00481414794922) {
                                        if (features[27] <= 13555.01025390625) {
                                            if (features[49] <= 9.99182653427124) {
                                                classes[0] = 0; 
                                                classes[1] = 38; 
                                            } else {
                                                if (features[43] <= 13.235679149627686) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[49] <= 16.36789560317993) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[49] <= 6.410475254058838) {
                                    if (features[21] <= -1.010856568813324) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[19] <= -4.177495718002319) {
                    if (features[32] <= 1971.0610961914062) {
                        if (features[10] <= 42.51180839538574) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[41] <= 54.10345268249512) {
                                if (features[23] <= -3.0723220109939575) {
                                    if (features[41] <= 26.7829008102417) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 38; 
                                }
                            } else {
                                if (features[31] <= 0.007589942077174783) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[43] <= 13.395409107208252) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[34] <= 675428.28125) {
                        if (features[38] <= 19435.859375) {
                            if (features[40] <= 10.125577449798584) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[16] <= -4.727023363113403) {
                                    if (features[39] <= 67.28937911987305) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[42] <= 26.85840129852295) {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                        } else {
                                            if (features[17] <= -5.99917459487915) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                if (features[30] <= 159.1381072998047) {
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
                                    if (features[6] <= 268.3073272705078) {
                                        if (features[7] <= 120.71235275268555) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    } else {
                                        if (features[50] <= 1.20467209815979) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[40] <= 102.5843276977539) {
                                                if (features[3] <= 0.4510613679885864) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[8] <= 1789.4780883789062) {
                                                        if (features[48] <= 2.5762208700180054) {
                                                            classes[0] = 4; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        classes[0] = 49; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[28] <= 37218696192.0) {
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
                            if (features[16] <= -3.073728919029236) {
                                classes[0] = 0; 
                                classes[1] = 23; 
                            } else {
                                if (features[2] <= 1469132.125) {
                                    if (features[32] <= 4453.3929443359375) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        if (features[20] <= 0.43502476811408997) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[11] <= 0.6321250200271606) {
                            if (features[20] <= 8.661023139953613) {
                                if (features[16] <= 2.2376773953437805) {
                                    if (features[46] <= 4.83592677116394) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 47; 
                                    }
                                } else {
                                    if (features[21] <= 1.6643218398094177) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[7] <= 312.56813049316406) {
                if (features[30] <= 0.01999316643923521) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[34] <= 2315115.5625) {
                        classes[0] = 22; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[26] <= 1505947.84375) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        }
    } else {
        if (features[12] <= 389.4583282470703) {
            if (features[35] <= 0.018397090956568718) {
                if (features[15] <= 8.994585514068604) {
                    if (features[28] <= 9613512960.0) {
                        if (features[7] <= 192.93472290039062) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[45] <= 81.41106414794922) {
                            if (features[36] <= 523.1622161865234) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[19] <= -6.542815446853638) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 35; 
                                }
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 6; 
                classes[1] = 0; 
            }
        } else {
            if (features[47] <= 2.7809267044067383) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[3] <= 0.31869179010391235) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[2] <= 1720436.6875) {
                        if (features[13] <= 188.46974182128906) {
                            classes[0] = 42; 
                            classes[1] = 0; 
                        } else {
                            if (features[15] <= -9.215686082839966) {
                                classes[0] = 0; 
                                classes[1] = 3; 
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
    
    if (features[14] <= 14.86737060546875) {
        if (features[17] <= 10.791568279266357) {
            if (features[41] <= 56.723236083984375) {
                if (features[30] <= 1338.0604248046875) {
                    if (features[3] <= 0.7682309150695801) {
                        if (features[6] <= 265.34442138671875) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[1] <= 19.06607437133789) {
                                if (features[24] <= -1.7805084586143494) {
                                    if (features[17] <= -0.17673420906066895) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[48] <= 14.568786144256592) {
                                        classes[0] = 0; 
                                        classes[1] = 33; 
                                    } else {
                                        if (features[4] <= 264.82969665527344) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[34] <= 221351.875) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[32] <= 2694.4749755859375) {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                    } else {
                                        if (features[23] <= 0.6856911778450012) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 311.51527404785156) {
                            if (features[34] <= 570864.8125) {
                                if (features[5] <= 0.24465824663639069) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            }
                        } else {
                            if (features[17] <= -10.88368272781372) {
                                if (features[26] <= 4920423.125) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[0] <= 10952.552734375) {
                                    classes[0] = 15; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[47] <= 12.86846113204956) {
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
                    if (features[26] <= 4241886.5) {
                        if (features[11] <= 0.3954583406448364) {
                            if (features[43] <= 10.254651069641113) {
                                if (features[18] <= -11.053054809570312) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                }
                            } else {
                                if (features[9] <= 0.6702915132045746) {
                                    if (features[17] <= -2.7057809829711914) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 163.1273193359375) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[38] <= 18776.5546875) {
                                if (features[29] <= 0.013188811019062996) {
                                    if (features[25] <= 1.1653808578848839) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[45] <= 7.420360326766968) {
                                        if (features[42] <= 14.344307661056519) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 38; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[27] <= 432.87469482421875) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[50] <= 17.070348262786865) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        if (features[21] <= 2.2435247004032135) {
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
                    } else {
                        if (features[49] <= 6.42220664024353) {
                            if (features[37] <= 0.003664496005512774) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[36] <= 13297.236572265625) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[41] <= 5.637886047363281) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 20; 
                            }
                        }
                    }
                }
            } else {
                if (features[9] <= 0.7627306878566742) {
                    if (features[42] <= 22.073533058166504) {
                        if (features[25] <= -1.5549358129501343) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[42] <= 17.594308853149414) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[11] <= 0.265708327293396) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[18] <= 8.375303745269775) {
                                classes[0] = 31; 
                                classes[1] = 0; 
                            } else {
                                if (features[20] <= -7.024966537952423) {
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
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            classes[0] = 27; 
            classes[1] = 0; 
        }
    } else {
        if (features[14] <= 26.917566299438477) {
            if (features[3] <= 0.5103981196880341) {
                if (features[4] <= 89.78380966186523) {
                    if (features[40] <= 20.01981210708618) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 0.13809534162282944) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[7] <= 232.5063247680664) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[29] <= 0.09259343892335892) {
                    if (features[44] <= 3.2971378564834595) {
                        if (features[40] <= 12.222133159637451) {
                            if (features[18] <= -2.0004783272743225) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[6] <= 275.2879333496094) {
                                classes[0] = 0; 
                                classes[1] = 12; 
                            } else {
                                if (features[48] <= 1.729310542345047) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[11] <= 0.4871666878461838) {
                            if (features[51] <= 0.49637457728385925) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[48] <= 43.16207504272461) {
                                    if (features[21] <= 1.6159974932670593) {
                                        if (features[14] <= 15.624134063720703) {
                                            if (features[48] <= 25.731950283050537) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[0] <= 4514.15478515625) {
                                                if (features[30] <= 1335.2608795166016) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                if (features[49] <= 8.074082136154175) {
                                                    classes[0] = 0; 
                                                    classes[1] = 73; 
                                                } else {
                                                    if (features[48] <= 9.42389965057373) {
                                                        if (features[16] <= -1.5986647307872772) {
                                                            classes[0] = 0; 
                                                            classes[1] = 3; 
                                                        } else {
                                                            if (features[38] <= 8513.69482421875) {
                                                                classes[0] = 2; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 27; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[12] <= 347.6666564941406) {
                                            if (features[38] <= 1638.604248046875) {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            } else {
                                                if (features[42] <= 70.51799583435059) {
                                                    if (features[27] <= 622.3428192138672) {
                                                        if (features[50] <= 2.6290568709373474) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        }
                                                    } else {
                                                        if (features[13] <= 197.6461181640625) {
                                                            classes[0] = 10; 
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
                                            }
                                        } else {
                                            if (features[3] <= 1.0128508508205414) {
                                                if (features[6] <= 241.47058868408203) {
                                                    if (features[45] <= 16.329156398773193) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 28; 
                                                }
                                            } else {
                                                if (features[2] <= 1491084.875) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            }
                                        }
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
                    if (features[46] <= 27.725261688232422) {
                        if (features[26] <= 5034873.5) {
                            if (features[30] <= 0.764305405318737) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 17; 
                                classes[1] = 0; 
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
            if (features[24] <= 3.7716816663742065) {
                if (features[21] <= 2.535715103149414) {
                    if (features[11] <= 0.12674999609589577) {
                        if (features[30] <= 406.22157287597656) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[49] <= 16.688045501708984) {
                            if (features[17] <= -5.292840957641602) {
                                if (features[27] <= 2040.4624633789062) {
                                    classes[0] = 0; 
                                    classes[1] = 28; 
                                } else {
                                    if (features[19] <= -0.8512764871120453) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 148; 
                            }
                        } else {
                            if (features[49] <= 17.33646583557129) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        }
                    }
                } else {
                    if (features[15] <= -3.2444326877593994) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[14] <= 28.70770263671875) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 4; 
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

int RFC_inst2_1::predict_6(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.4571250081062317) {
        if (features[50] <= 18.99088478088379) {
            if (features[44] <= 35.92729187011719) {
                if (features[5] <= 0.20597869902849197) {
                    if (features[15] <= -3.1351475715637207) {
                        if (features[0] <= 8742.166015625) {
                            if (features[14] <= 19.729619026184082) {
                                if (features[32] <= 1896.0100708007812) {
                                    if (features[20] <= 6.157983779907227) {
                                        if (features[26] <= 894517.65625) {
                                            if (features[14] <= 16.37550687789917) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 46; 
                                        }
                                    } else {
                                        if (features[4] <= 112.35340118408203) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 551997.90625) {
                                        if (features[37] <= 0.0027533163083717227) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[46] <= 12.718782901763916) {
                                            if (features[8] <= 2169.2892456054688) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 67; 
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[42] <= 25.337350845336914) {
                            if (features[21] <= 1.8585217595100403) {
                                if (features[4] <= 104.72473526000977) {
                                    if (features[0] <= 3573.643310546875) {
                                        if (features[3] <= 0.4555867314338684) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[16] <= 6.149919271469116) {
                                            if (features[23] <= 2.2449545860290527) {
                                                if (features[8] <= 3195.77783203125) {
                                                    if (features[4] <= 37.57608604431152) {
                                                        if (features[0] <= 6624.59521484375) {
                                                            classes[0] = 0; 
                                                            classes[1] = 22; 
                                                        } else {
                                                            if (features[23] <= -1.0489782840013504) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 65; 
                                                    }
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[43] <= 18.196129322052002) {
                                                    if (features[39] <= 95.88064193725586) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 5; 
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
                                    }
                                } else {
                                    if (features[43] <= 5.734036922454834) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[18] <= 1.2297831512987614) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            if (features[20] <= -0.8698064386844635) {
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
                                if (features[9] <= 0.6241641044616699) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    if (features[28] <= 16637534720.0) {
                                        if (features[25] <= 1.64638090133667) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 0.19887210428714752) {
                                            if (features[43] <= 6.586306810379028) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 16; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[18] <= 3.237177848815918) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[26] <= 4279075.75) {
                                if (features[22] <= 1.3143399953842163) {
                                    if (features[47] <= 6.35248589515686) {
                                        if (features[47] <= 3.6742827892303467) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                        }
                                    } else {
                                        if (features[16] <= -3.7366937398910522) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 191.6223602294922) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[39] <= 202.46661376953125) {
                                            if (features[48] <= 5.389933466911316) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            }
                        }
                    }
                } else {
                    if (features[10] <= 317.3592987060547) {
                        if (features[47] <= 0.5651034712791443) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[49] <= 21.10117816925049) {
                                if (features[43] <= 30.101665496826172) {
                                    if (features[2] <= 1377549.4375) {
                                        if (features[46] <= 12.994821548461914) {
                                            classes[0] = 0; 
                                            classes[1] = 119; 
                                        } else {
                                            if (features[5] <= 0.2180946171283722) {
                                                if (features[49] <= 5.169940710067749) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 21; 
                                            }
                                        }
                                    } else {
                                        if (features[39] <= 228.5913314819336) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[17] <= -1.1503478288650513) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[18] <= 1.3468647003173828) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[38] <= 12587.06494140625) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[34] <= 779258.53125) {
                    classes[0] = 17; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            }
        } else {
            if (features[9] <= 0.750768780708313) {
                if (features[48] <= 7.934889554977417) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 21; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    } else {
        if (features[1] <= 11.453723907470703) {
            if (features[1] <= 10.546603202819824) {
                if (features[0] <= 8406.58984375) {
                    if (features[14] <= 2.7402491569519043) {
                        if (features[14] <= -21.275057792663574) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[35] <= 0.0013950300635769963) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 11; 
            }
        } else {
            if (features[30] <= 974.0646362304688) {
                if (features[4] <= 36.44871711730957) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[42] <= 22.244234085083008) {
                        if (features[44] <= 11.114979267120361) {
                            if (features[35] <= 0.0040414443938061595) {
                                classes[0] = 16; 
                                classes[1] = 0; 
                            } else {
                                if (features[17] <= -3.113640435039997) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[27] <= 514.8482513427734) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 16; 
                            }
                        }
                    } else {
                        if (features[29] <= 0.03645368292927742) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[31] <= 0.004929635673761368) {
                    if (features[17] <= -5.0096025466918945) {
                        if (features[33] <= 4710.5069580078125) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[12] <= 729.75) {
                            classes[0] = 61; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[31] <= 0.00770262093283236) {
                        if (features[43] <= 27.57066249847412) {
                            classes[0] = 0; 
                            classes[1] = 5; 
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
    
    if (features[47] <= 17.781851768493652) {
        if (features[11] <= 0.4568750411272049) {
            if (features[9] <= 0.6257485449314117) {
                if (features[5] <= 0.3569370359182358) {
                    if (features[22] <= -4.426192760467529) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[24] <= -8.749863386154175) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[1] <= 16.31132411956787) {
                                if (features[50] <= 5.331974506378174) {
                                    classes[0] = 0; 
                                    classes[1] = 27; 
                                } else {
                                    if (features[46] <= 37.3790168762207) {
                                        if (features[43] <= 9.466551303863525) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 103; 
                            }
                        }
                    }
                } else {
                    if (features[38] <= 3180.371337890625) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[43] <= 16.192246437072754) {
                    if (features[20] <= 6.399827480316162) {
                        if (features[40] <= 22.04237461090088) {
                            if (features[4] <= 55.230628967285156) {
                                classes[0] = 0; 
                                classes[1] = 22; 
                            } else {
                                if (features[18] <= 1.5033295154571533) {
                                    if (features[3] <= 0.8335824608802795) {
                                        if (features[37] <= 0.0019033264834433794) {
                                            if (features[11] <= 0.31320832669734955) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 20; 
                                        }
                                    } else {
                                        if (features[19] <= -1.827618032693863) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[9] <= 0.6274567544460297) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[14] <= 40.223995208740234) {
                                    if (features[1] <= 5.703703880310059) {
                                        if (features[10] <= 90.12417602539062) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[25] <= 3.7651692628860474) {
                                            if (features[38] <= 50841.91796875) {
                                                classes[0] = 0; 
                                                classes[1] = 113; 
                                            } else {
                                                if (features[50] <= 0.8304877579212189) {
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
                                    if (features[21] <= -1.3693704456090927) {
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
                        if (features[12] <= 316.125) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            if (features[19] <= 3.6486592292785645) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        }
                    }
                } else {
                    if (features[27] <= 852.0979919433594) {
                        if (features[15] <= -2.042383313179016) {
                            if (features[23] <= 5.662886142730713) {
                                if (features[51] <= 1.2160305678844452) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[9] <= 0.6283916532993317) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 31; 
                                    }
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[49] <= 7.251580238342285) {
                                if (features[0] <= 4516.738525390625) {
                                    if (features[23] <= -0.9080903232097626) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[22] <= 5.156790733337402) {
                                        classes[0] = 0; 
                                        classes[1] = 17; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[17] <= -2.2431116104125977) {
                            if (features[27] <= 1279.4104614257812) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[22] <= 6.589954614639282) {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[12] <= 234.83333587646484) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[18] <= -2.716009736061096) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[37] <= 0.0012531318934634328) {
                                        if (features[12] <= 421.45833587646484) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[29] <= 0.11673036217689514) {
                                            classes[0] = 29; 
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
                }
            }
        } else {
            if (features[1] <= 21.04837417602539) {
                if (features[30] <= 1113.4103088378906) {
                    if (features[20] <= 8.661023139953613) {
                        if (features[41] <= 43.61384963989258) {
                            if (features[27] <= 155.2162208557129) {
                                if (features[4] <= 88.85904216766357) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[0] <= 8923.37109375) {
                                    classes[0] = 0; 
                                    classes[1] = 26; 
                                } else {
                                    if (features[16] <= -5.481571316719055) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[5] <= 0.21024590730667114) {
                        if (features[27] <= 219.31731414794922) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[18] <= 5.439065933227539) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                if (features[24] <= -2.2634257078170776) {
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
                }
            } else {
                if (features[18] <= -12.70875072479248) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[12] <= 712.3333435058594) {
                        if (features[50] <= 12.047994136810303) {
                            classes[0] = 29; 
                            classes[1] = 0; 
                        } else {
                            if (features[17] <= -4.279772520065308) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        if (features[13] <= 200.4798583984375) {
                            classes[0] = 4; 
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
        if (features[42] <= 26.929877281188965) {
            if (features[20] <= 5.836408615112305) {
                if (features[29] <= 0.029281241819262505) {
                    if (features[48] <= 2.844480276107788) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[31] <= 0.0007504723616875708) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[17] <= 4.5775146484375) {
                                if (features[47] <= 82.47946548461914) {
                                    if (features[18] <= 7.463169813156128) {
                                        classes[0] = 0; 
                                        classes[1] = 29; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
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
                    }
                } else {
                    if (features[51] <= 2.205045223236084) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        if (features[20] <= 2.245879054069519) {
                            if (features[39] <= 682.0391235351562) {
                                if (features[0] <= 6115.370849609375) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[46] <= 58.76415824890137) {
                                        if (features[50] <= 24.902637481689453) {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[3] <= 0.8808155655860901) {
                                                classes[0] = 1; 
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
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            if (features[11] <= 0.2953333407640457) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[45] <= 31.62026596069336) {
                                    if (features[39] <= 62.86039733886719) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 13; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 13; 
                classes[1] = 0; 
            }
        } else {
            if (features[15] <= -8.8351411819458) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                if (features[48] <= 13.663366317749023) {
                    if (features[29] <= 0.01989094726741314) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[33] <= 52717.4765625) {
                        if (features[40] <= 141.59555053710938) {
                            classes[0] = 43; 
                            classes[1] = 0; 
                        } else {
                            if (features[24] <= -2.4023579359054565) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 10; 
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
    
    if (features[17] <= 1.694362461566925) {
        if (features[49] <= 9.450678825378418) {
            if (features[9] <= 0.7049506604671478) {
                if (features[18] <= -8.619633674621582) {
                    if (features[46] <= 5.1731507778167725) {
                        if (features[44] <= 9.044703483581543) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[23] <= -6.0606396198272705) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[20] <= 5.060379505157471) {
                            if (features[42] <= 39.924922943115234) {
                                if (features[25] <= 5.302517890930176) {
                                    if (features[32] <= 3915.804443359375) {
                                        if (features[10] <= 234.69641876220703) {
                                            if (features[6] <= 276.2234191894531) {
                                                if (features[31] <= 0.019626514054834843) {
                                                    if (features[40] <= 12.913976669311523) {
                                                        if (features[40] <= 12.230440139770508) {
                                                            if (features[44] <= 3.2537471055984497) {
                                                                if (features[25] <= 0.8003091514110565) {
                                                                    if (features[9] <= 0.641352504491806) {
                                                                        classes[0] = 0; 
                                                                        classes[1] = 1; 
                                                                    } else {
                                                                        classes[0] = 4; 
                                                                        classes[1] = 0; 
                                                                    }
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 6; 
                                                                }
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 36; 
                                                            }
                                                        } else {
                                                            if (features[30] <= 1271.954345703125) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 3; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 171; 
                                                    }
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[6] <= 280.6106262207031) {
                                                    if (features[27] <= 1017.452880859375) {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    if (features[3] <= 0.9052551090717316) {
                                                        if (features[26] <= 1247670.625) {
                                                            if (features[16] <= -1.4209339395165443) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 4; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 47; 
                                                        }
                                                    } else {
                                                        if (features[4] <= 132.4250831604004) {
                                                            classes[0] = 0; 
                                                            classes[1] = 5; 
                                                        } else {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[30] <= 719.2870361544192) {
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
                            } else {
                                if (features[4] <= 50.742942810058594) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[13] <= 148.29713439941406) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[44] <= 12.891948699951172) {
                                if (features[5] <= 0.2044631987810135) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[34] <= 260174.28125) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[1] <= 13.713745594024658) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[24] <= 3.7172067165374756) {
                                    if (features[5] <= 0.18179332464933395) {
                                        if (features[4] <= 86.74346923828125) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 16; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[27] <= 484.6855010986328) {
                    if (features[6] <= 233.75555419921875) {
                        if (features[22] <= 1.5838311910629272) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[0] <= 3567.3319091796875) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[4] <= 43.221503257751465) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 26; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[37] <= 0.002190705097746104) {
                        if (features[49] <= 2.4920015931129456) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[34] <= 865945.84375) {
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
            if (features[16] <= -3.10970139503479) {
                if (features[15] <= 0.860203206539154) {
                    if (features[46] <= 3.77300488948822) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[10] <= 58.8499870300293) {
                            if (features[51] <= 10.887221336364746) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[24] <= -2.7400872707366943) {
                                if (features[33] <= 15912.63134765625) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[6] <= 326.6306457519531) {
                                    classes[0] = 0; 
                                    classes[1] = 51; 
                                } else {
                                    if (features[17] <= -6.11998176574707) {
                                        if (features[27] <= 268.9384460449219) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[39] <= 142.56450653076172) {
                                            if (features[16] <= -9.789691925048828) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[7] <= 175.0210189819336) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[42] <= 27.503448486328125) {
                    if (features[48] <= 32.383286476135254) {
                        if (features[34] <= 1117687.8125) {
                            if (features[0] <= 3990.2955322265625) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[46] <= 2.6688441038131714) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[18] <= -3.8102784156799316) {
                                        if (features[10] <= 199.09468841552734) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 21; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[4] <= 42.19653034210205) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[43] <= 6.737705707550049) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 30; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[48] <= 14.55211877822876) {
            if (features[10] <= 52.74091148376465) {
                if (features[30] <= 213.8163948059082) {
                    if (features[46] <= 22.02401828765869) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 14; 
                    classes[1] = 0; 
                }
            } else {
                if (features[11] <= 0.4454999715089798) {
                    if (features[45] <= 47.503684997558594) {
                        if (features[46] <= 33.210899353027344) {
                            if (features[44] <= 4.085574626922607) {
                                if (features[38] <= 5112.3577880859375) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    if (features[11] <= 0.3336666524410248) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= 363467.359375) {
                                    if (features[50] <= 1.8455426096916199) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 53; 
                                }
                            }
                        } else {
                            if (features[48] <= 7.843286752700806) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[1] <= 30.534236907958984) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[51] <= 4.88397216796875) {
                        if (features[39] <= 688.9703369140625) {
                            classes[0] = 20; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[33] <= 26360.478515625) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 0.32087500393390656) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                if (features[16] <= -8.250138759613037) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 35; 
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

int RFC_inst2_1::predict_9(float features[]) {
    int classes[2];
    
    if (features[20] <= 5.62218451499939) {
        if (features[20] <= -7.624211549758911) {
            if (features[12] <= 462.5416717529297) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[42] <= 6.185032606124878) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 20; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[14] <= 15.751587867736816) {
                if (features[11] <= 0.4619166851043701) {
                    if (features[50] <= 16.111923694610596) {
                        if (features[19] <= 2.7836586236953735) {
                            if (features[12] <= 383.0) {
                                if (features[19] <= -2.374813199043274) {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[0] <= 9664.85107421875) {
                                    if (features[12] <= 423.5833435058594) {
                                        if (features[19] <= -7.0583508014678955) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 50; 
                                    }
                                } else {
                                    if (features[17] <= -6.006743907928467) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[8] <= 1602.4408569335938) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[34] <= 921070.03125) {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    if (features[9] <= 0.616262823343277) {
                        if (features[38] <= 5470.5694580078125) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 19; 
                        }
                    } else {
                        if (features[17] <= -2.3597750663757324) {
                            if (features[38] <= 12780.78759765625) {
                                if (features[16] <= 4.327296614646912) {
                                    if (features[49] <= 2.1577113270759583) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            } else {
                                if (features[35] <= 0.0027166114887222648) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[43] <= 7.635286569595337) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[15] <= -9.619897842407227) {
                                    if (features[32] <= 2575.5374755859375) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[7] <= 115.83028793334961) {
                                        if (features[8] <= 3470.24365234375) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[40] <= 277.51731872558594) {
                                            classes[0] = 37; 
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
                }
            } else {
                if (features[46] <= 59.49760437011719) {
                    if (features[18] <= 1.3124767541885376) {
                        if (features[4] <= 141.44507598876953) {
                            if (features[10] <= 283.4776840209961) {
                                if (features[9] <= 0.7733502388000488) {
                                    if (features[26] <= 428072.375) {
                                        if (features[9] <= 0.6685214042663574) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 22.074442863464355) {
                                            if (features[4] <= 74.64230728149414) {
                                                classes[0] = 0; 
                                                classes[1] = 46; 
                                            } else {
                                                if (features[25] <= 0.2702384740114212) {
                                                    classes[0] = 0; 
                                                    classes[1] = 23; 
                                                } else {
                                                    if (features[48] <= 7.801498651504517) {
                                                        if (features[40] <= 51.24203681945801) {
                                                            classes[0] = 7; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[31] <= 0.0020951629267074168) {
                                                                classes[0] = 1; 
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
                                                }
                                            }
                                        } else {
                                            if (features[26] <= 4429247.0) {
                                                if (features[49] <= 9.481358528137207) {
                                                    classes[0] = 0; 
                                                    classes[1] = 141; 
                                                } else {
                                                    if (features[49] <= 9.680754661560059) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 20; 
                                                    }
                                                }
                                            } else {
                                                if (features[20] <= 2.567063808441162) {
                                                    if (features[46] <= 13.524174690246582) {
                                                        classes[0] = 0; 
                                                        classes[1] = 24; 
                                                    } else {
                                                        if (features[38] <= 4955.46533203125) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 3; 
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
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[16] <= -7.303874969482422) {
                                if (features[18] <= -2.0803547501564026) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[30] <= 2056.6744384765625) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            }
                        }
                    } else {
                        if (features[5] <= 0.19712290912866592) {
                            if (features[19] <= -0.08409149944782257) {
                                if (features[17] <= 5.496446132659912) {
                                    if (features[23] <= 3.4180608987808228) {
                                        if (features[16] <= -5.015078783035278) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[18] <= 5.351235866546631) {
                                                classes[0] = 19; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[6] <= 225.3386001586914) {
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
                                if (features[22] <= 4.506939053535461) {
                                    if (features[45] <= 2.0740579962730408) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[8] <= 2703.116455078125) {
                                            if (features[14] <= 16.797505378723145) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[13] <= 122.05213928222656) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 29; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[49] <= 19.98035430908203) {
                                classes[0] = 0; 
                                classes[1] = 37; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[21] <= 1.1069190502166748) {
            if (features[14] <= 11.443361759185791) {
                if (features[1] <= 16.523505210876465) {
                    if (features[45] <= 20.209369659423828) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[23] <= -2.659194737672806) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 15; 
            }
        } else {
            if (features[35] <= 0.0007330506341531873) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[3] <= 0.7222694158554077) {
                    if (features[34] <= 82732.60546875) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[41] <= 7.871718168258667) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 42; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[50] <= 5.4094202518463135) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 15; 
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

int RFC_inst2_1::predict_10(float features[]) {
    int classes[2];
    
    if (features[12] <= 390.2083282470703) {
        if (features[4] <= 159.51512908935547) {
            if (features[21] <= 3.587627410888672) {
                if (features[15] <= 0.9721190631389618) {
                    if (features[25] <= 3.0562163591384888) {
                        if (features[30] <= 0.015570447780191898) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[7] <= 427.05137634277344) {
                                if (features[43] <= 71.76147842407227) {
                                    if (features[15] <= -1.897847592830658) {
                                        classes[0] = 0; 
                                        classes[1] = 165; 
                                    } else {
                                        if (features[17] <= 2.75214421749115) {
                                            if (features[38] <= 1723.9931640625) {
                                                if (features[25] <= -0.5917090028524399) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                if (features[25] <= -2.2641656398773193) {
                                                    if (features[28] <= 22633987584.0) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 41; 
                                                }
                                            }
                                        } else {
                                            if (features[1] <= 19.682466506958008) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[16] <= -5.9414345026016235) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[8] <= 1623.7642211914062) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[12] <= 219.75) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[14] <= 19.273712158203125) {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    } else {
                        if (features[3] <= 0.6460138261318207) {
                            if (features[47] <= 3.8209813833236694) {
                                if (features[43] <= 5.474819898605347) {
                                    if (features[0] <= 5017.3828125) {
                                        classes[0] = 1; 
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
                                if (features[33] <= 6370.712646484375) {
                                    if (features[21] <= 0.6081995368003845) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[17] <= -4.955422282218933) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[17] <= 3.757760524749756) {
                                if (features[0] <= 11972.763671875) {
                                    if (features[25] <= 2.655271530151367) {
                                        if (features[51] <= 5.785473585128784) {
                                            if (features[35] <= 0.0012845398159697652) {
                                                if (features[20] <= -0.5707753747701645) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 6; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 58; 
                                            }
                                        } else {
                                            if (features[3] <= 0.8819268941879272) {
                                                if (features[40] <= 154.66209411621094) {
                                                    classes[0] = 2; 
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
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[6] <= 227.29275512695312) {
                    if (features[27] <= 3851.7650146484375) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[9] <= 0.6210441291332245) {
                        if (features[27] <= 10517.5546875) {
                            if (features[50] <= 9.355493068695068) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 19; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[17] <= -11.883054733276367) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[23] <= 11.054780721664429) {
                    if (features[39] <= 70.93860054016113) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[21] <= -3.84331738948822) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 24; 
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
        if (features[48] <= 37.70148277282715) {
            if (features[13] <= 188.6884765625) {
                if (features[2] <= 658122.03125) {
                    if (features[48] <= 1.9027367234230042) {
                        if (features[50] <= 1.7176105082035065) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[8] <= 1678.3171997070312) {
                            if (features[3] <= 0.42429250478744507) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[32] <= 2019.7702026367188) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 21; 
                        }
                    }
                } else {
                    if (features[4] <= 41.989131927490234) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        if (features[15] <= -0.3259199373424053) {
                            if (features[49] <= 6.446183681488037) {
                                if (features[1] <= 23.629551887512207) {
                                    if (features[46] <= 3.8384822607040405) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                if (features[7] <= 147.4251937866211) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                }
                            }
                        } else {
                            if (features[18] <= -11.205774545669556) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 37; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[20] <= 6.1420910358428955) {
                    if (features[2] <= 1772145.4375) {
                        if (features[9] <= 0.6655871272087097) {
                            if (features[22] <= 2.3455904722213745) {
                                if (features[47] <= 63.11282730102539) {
                                    if (features[2] <= 825644.75) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 82; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[16] <= -0.09927115589380264) {
                                    if (features[29] <= 0.06374974921345711) {
                                        if (features[0] <= 9001.73974609375) {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[29] <= 0.016873390413820744) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[18] <= 1.30057692527771) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[44] <= 7.703013896942139) {
                                if (features[40] <= 13.291284084320068) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 15; 
                                }
                            } else {
                                if (features[18] <= -5.761593341827393) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[30] <= 5699.730224609375) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[6] <= 375.2624816894531) {
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
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[41] <= 16.249022006988525) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[20] <= 14.799055099487305) {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                }
            }
        } else {
            if (features[15] <= -8.114412307739258) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[16] <= -9.285355567932129) {
                    if (features[13] <= 217.1856918334961) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 36; 
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

