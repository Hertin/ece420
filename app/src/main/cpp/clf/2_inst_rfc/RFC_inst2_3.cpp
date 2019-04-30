#include "RFC_inst2_3.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_3::predict_0(float features[]) {
    int classes[2];
    
    if (features[5] <= 0.16334400326013565) {
        if (features[6] <= 340.58543395996094) {
            if (features[32] <= 5259.12060546875) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            if (features[13] <= 203.1888427734375) {
                if (features[51] <= 9.299579620361328) {
                    if (features[19] <= 8.026479244232178) {
                        if (features[15] <= -5.762051105499268) {
                            if (features[3] <= 0.5610485076904297) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 173; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[13] <= 155.62516021728516) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[42] <= 2.1433064937591553) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[10] <= 335.25457763671875) {
                                    if (features[51] <= 2.6874425411224365) {
                                        classes[0] = 18; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[10] <= 249.25853729248047) {
                                            classes[0] = 1; 
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
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[0] <= 9475.74853515625) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[17] <= -11.020095825195312) {
            if (features[0] <= 4416.573486328125) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 34; 
            }
        } else {
            if (features[19] <= 6.659159898757935) {
                if (features[18] <= -0.38684600591659546) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[45] <= 1.6045605540275574) {
                        if (features[31] <= 0.00022249999892665073) {
                            if (features[27] <= 73.5611343383789) {
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
                    } else {
                        if (features[44] <= 15.309174060821533) {
                            if (features[32] <= 2444.3172607421875) {
                                classes[0] = 44; 
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
                if (features[51] <= 6.072725296020508) {
                    if (features[22] <= -3.7285784482955933) {
                        if (features[3] <= 0.7805615067481995) {
                            if (features[18] <= 1.5410674810409546) {
                                if (features[1] <= 3.9820386171340942) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                }
                            } else {
                                if (features[44] <= 3.939193606376648) {
                                    if (features[48] <= 0.8877829909324646) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[29] <= 0.04928999952971935) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[24] <= -4.042633056640625) {
                            if (features[17] <= -4.607737898826599) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[34] <= 727798.75) {
                                if (features[4] <= 125.68003463745117) {
                                    classes[0] = 0; 
                                    classes[1] = 69; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[26] <= 4958612.0) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    if (features[17] <= -6.631697416305542) {
                                        if (features[44] <= 19.687023639678955) {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[44] <= 21.168508052825928) {
                        if (features[35] <= 0.0020845000399276614) {
                            if (features[12] <= 718.4166564941406) {
                                classes[0] = 26; 
                                classes[1] = 0; 
                            } else {
                                if (features[31] <= 0.0014259999734349549) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
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

int RFC_inst2_3::predict_1(float features[]) {
    int classes[2];
    
    if (features[24] <= -1.268266499042511) {
        if (features[5] <= 0.16281550377607346) {
            if (features[35] <= 0.002395999967120588) {
                if (features[36] <= 1604.4019165039062) {
                    if (features[22] <= -1.4051975011825562) {
                        if (features[44] <= 1.2703530192375183) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    if (features[21] <= 0.2385535016655922) {
                        if (features[33] <= 4414.3741455078125) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[7] <= 427.6406707763672) {
                            if (features[7] <= 378.2681579589844) {
                                classes[0] = 166; 
                                classes[1] = 0; 
                            } else {
                                if (features[20] <= 8.303746700286865) {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[49] <= 2.5799875259399414) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 3; 
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
            if (features[49] <= 8.28646993637085) {
                if (features[36] <= 1582.4696655273438) {
                    if (features[12] <= 720.875) {
                        if (features[22] <= -4.784618377685547) {
                            if (features[4] <= 24.456340789794922) {
                                if (features[45] <= 7.309911489486694) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[35] <= 6.650000068475492e-05) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 40; 
                            }
                        }
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[14] <= 4.870948791503906) {
                        if (features[5] <= 0.16388149559497833) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[10] <= 76.42253494262695) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[38] <= 4386.96826171875) {
                                    if (features[2] <= 1987215.9375) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[16] <= -8.026049613952637) {
                                        classes[0] = 67; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[3] <= 0.7115365266799927) {
                                            if (features[12] <= 691.375) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[20] <= 6.14407205581665) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        } else {
                            if (features[16] <= -10.928915977478027) {
                                if (features[49] <= 2.1221574544906616) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[40] <= 10.019985914230347) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 32; 
                }
            }
        }
    } else {
        if (features[45] <= 22.70199680328369) {
            if (features[39] <= 148.49444580078125) {
                if (features[4] <= 100.37020683288574) {
                    classes[0] = 0; 
                    classes[1] = 43; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[10] <= 183.50515747070312) {
                    if (features[36] <= 13390.21484375) {
                        classes[0] = 6; 
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
            classes[0] = 3; 
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

int RFC_inst2_3::predict_2(float features[]) {
    int classes[2];
    
    if (features[19] <= 7.305391550064087) {
        if (features[15] <= -5.762051105499268) {
            if (features[16] <= -5.800229072570801) {
                if (features[51] <= 3.1872135400772095) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 12; 
            }
        } else {
            if (features[5] <= 0.20162099599838257) {
                if (features[30] <= 7078.9228515625) {
                    if (features[22] <= -7.467428922653198) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[38] <= 987.3259887695312) {
                            if (features[35] <= 0.0002925000080722384) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 194; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[0] <= 6774.4765625) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[35] <= 0.0005594999820459634) {
                    if (features[43] <= 2.023033082485199) {
                        if (features[11] <= 0.679458498954773) {
                            classes[0] = 3; 
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
                    if (features[43] <= 15.616730690002441) {
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
        if (features[33] <= 5297.458984375) {
            if (features[29] <= 0.039827000349760056) {
                if (features[20] <= 8.693476676940918) {
                    if (features[3] <= 0.5926870107650757) {
                        if (features[35] <= 0.00033200001053046435) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[36] <= 3685.026611328125) {
                            classes[0] = 0; 
                            classes[1] = 102; 
                        } else {
                            if (features[3] <= 0.7833845019340515) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[45] <= 0.2221435084939003) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[7] <= 439.385498046875) {
                    if (features[33] <= 2906.1090087890625) {
                        if (features[51] <= 2.0474149584770203) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[33] <= 1871.5238037109375) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            }
        } else {
            if (features[14] <= 5.7641894817352295) {
                if (features[17] <= -7.960699081420898) {
                    if (features[4] <= 54.73470115661621) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        if (features[3] <= 0.5330795049667358) {
                            if (features[20] <= 6.052555561065674) {
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
                    }
                } else {
                    if (features[36] <= 3214.6011962890625) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[37] <= 0.026101999916136265) {
                            if (features[2] <= 2009653.5) {
                                classes[0] = 38; 
                                classes[1] = 0; 
                            } else {
                                if (features[16] <= -7.091275930404663) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[2] <= 1560134.375) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[46] <= 10.658362865447998) {
                    if (features[19] <= 15.030338764190674) {
                        classes[0] = 0; 
                        classes[1] = 21; 
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
    
    if (features[36] <= 1893.3323974609375) {
        if (features[14] <= -1.5745620131492615) {
            if (features[46] <= 23.10595703125) {
                if (features[5] <= 0.19944100081920624) {
                    classes[0] = 15; 
                    classes[1] = 0; 
                } else {
                    if (features[25] <= -0.340629518032074) {
                        classes[0] = 3; 
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
        } else {
            if (features[27] <= 16.799467086791992) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[8] <= 2016.1182861328125) {
                    if (features[21] <= 2.6035854816436768) {
                        if (features[8] <= 1371.6961059570312) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[49] <= 1.2948859930038452) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[26] <= 1131724.6875) {
                        if (features[20] <= 5.9875428676605225) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        } else {
                            if (features[50] <= 2.3947205543518066) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[41] <= 7.597652435302734) {
                            classes[0] = 0; 
                            classes[1] = 51; 
                        } else {
                            if (features[0] <= 7759.484130859375) {
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
        if (features[44] <= 9.379196643829346) {
            if (features[41] <= 29.880910873413086) {
                if (features[17] <= -11.145609378814697) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[24] <= -1.2534945011138916) {
                        if (features[9] <= 0.688838005065918) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[15] <= -5.1974639892578125) {
                                if (features[22] <= -1.8127300143241882) {
                                    classes[0] = 16; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[44] <= 6.478886365890503) {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[10] <= 338.5519256591797) {
                                    if (features[39] <= 96.45584487915039) {
                                        if (features[22] <= -1.635416030883789) {
                                            classes[0] = 21; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[36] <= 2869.8887939453125) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 226; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[22] <= -4.403008580207825) {
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
                        if (features[4] <= 59.27280616760254) {
                            if (features[33] <= 5326.155029296875) {
                                if (features[35] <= 0.00060299999313429) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[46] <= 16.03890895843506) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                classes[0] = 1; 
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
            if (features[28] <= 405062680576.0) {
                if (features[4] <= 109.14095306396484) {
                    if (features[31] <= 0.0005369999998947605) {
                        if (features[40] <= 47.436164140701294) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 30; 
                    }
                } else {
                    if (features[4] <= 186.66695404052734) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[0] <= 7590.94970703125) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[16] <= -8.006511688232422) {
                        classes[0] = 14; 
                        classes[1] = 0; 
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

int RFC_inst2_3::predict_4(float features[]) {
    int classes[2];
    
    if (features[29] <= 0.04011349938809872) {
        if (features[20] <= 5.491827964782715) {
            if (features[12] <= 723.3333435058594) {
                if (features[22] <= -4.848987102508545) {
                    if (features[21] <= 3.1537909507751465) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[3] <= 0.6187179982662201) {
                        if (features[49] <= 7.536122560501099) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        if (features[36] <= 4142.0260009765625) {
                            classes[0] = 0; 
                            classes[1] = 69; 
                        } else {
                            if (features[47] <= 2.611971527338028) {
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
                if (features[16] <= -10.604182243347168) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[35] <= 0.00018799999816110358) {
                if (features[10] <= 345.8271026611328) {
                    classes[0] = 50; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
                }
            } else {
                if (features[7] <= 309.7972106933594) {
                    if (features[18] <= 0.9239020049571991) {
                        if (features[9] <= 0.8286960124969482) {
                            classes[0] = 0; 
                            classes[1] = 14; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[44] <= 17.57958221435547) {
                            if (features[9] <= 0.6673994958400726) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 38; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    if (features[48] <= 1.2692504525184631) {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    } else {
                        if (features[24] <= -1.601074993610382) {
                            if (features[31] <= 0.0004415000003064051) {
                                if (features[34] <= 336051.5625) {
                                    if (features[9] <= 0.6679460108280182) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[30] <= 2.0000000517939043e-06) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    }
                                }
                            } else {
                                if (features[9] <= 0.6830205023288727) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 17; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 25; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[6] <= 344.3759307861328) {
            if (features[7] <= 453.16107177734375) {
                classes[0] = 0; 
                classes[1] = 13; 
            } else {
                if (features[2] <= 465901.28125) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 8; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[12] <= 357.25) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[43] <= 13.980528831481934) {
                    if (features[49] <= 14.705367088317871) {
                        if (features[15] <= -5.762051105499268) {
                            if (features[50] <= 1.7116475105285645) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[33] <= 2906.1090087890625) {
                                if (features[26] <= 1490004.9375) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[18] <= 1.0953875184059143) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[22] <= -0.18095900118350983) {
                                    classes[0] = 130; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[50] <= 4.255232036113739) {
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
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[13] <= 174.2711181640625) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[13] <= 192.4654998779297) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[15] <= -2.680559456348419) {
                                classes[0] = 1; 
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

int RFC_inst2_3::predict_5(float features[]) {
    int classes[2];
    
    if (features[5] <= 0.16334400326013565) {
        if (features[25] <= 0.7547290027141571) {
            if (features[11] <= 0.4399999976158142) {
                if (features[4] <= 26.293254852294922) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[4] <= 186.609375) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[7] <= 378.2681579589844) {
                    if (features[45] <= 0.792398989200592) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[25] <= -1.190513014793396) {
                            if (features[18] <= 1.0889959931373596) {
                                if (features[43] <= 10.428001523017883) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 173; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[30] <= 0.0536799980327487) {
                        if (features[22] <= -3.780695080757141) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            if (features[45] <= 17.331966400146484) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[36] <= 1236.8872680664062) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 7; 
        }
    } else {
        if (features[38] <= 4407.87060546875) {
            if (features[19] <= 14.185908317565918) {
                if (features[22] <= -3.7102835178375244) {
                    if (features[35] <= 0.00018149999959859997) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    }
                } else {
                    if (features[15] <= -0.39335450530052185) {
                        classes[0] = 0; 
                        classes[1] = 74; 
                    } else {
                        if (features[11] <= 0.6782499849796295) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    }
                }
            } else {
                if (features[25] <= 0.3884575068950653) {
                    if (features[32] <= 1840.0035095214844) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        if (features[38] <= 2389.5485229492188) {
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
            if (features[21] <= 3.7959145307540894) {
                if (features[49] <= 12.123222351074219) {
                    if (features[15] <= -2.747051954269409) {
                        if (features[24] <= -3.0576454401016235) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        } else {
                            if (features[20] <= 7.937407970428467) {
                                if (features[29] <= 0.03285349905490875) {
                                    if (features[6] <= 428.56495666503906) {
                                        if (features[8] <= 1931.3574829101562) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            }
                        }
                    } else {
                        if (features[24] <= -1.334720492362976) {
                            if (features[42] <= 18.21995258331299) {
                                classes[0] = 50; 
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
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                if (features[37] <= 0.006025000009685755) {
                    if (features[6] <= 388.96778869628906) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[18] <= -0.2756975069642067) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[9] <= 0.7303924858570099) {
                        classes[0] = 0; 
                        classes[1] = 21; 
                    } else {
                        if (features[8] <= 2957.7958984375) {
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
    
    if (features[5] <= 0.15853149443864822) {
        if (features[16] <= -5.006194591522217) {
            if (features[22] <= -4.890880584716797) {
                classes[0] = 0; 
                classes[1] = 7; 
            } else {
                if (features[21] <= 0.05291149951517582) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[34] <= 2111749.875) {
                        if (features[38] <= 1400.399169921875) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[5] <= 0.15394700318574905) {
                                if (features[25] <= -1.2240214943885803) {
                                    if (features[45] <= 5.884832143783569) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 141.09272003173828) {
                                        classes[0] = 154; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[42] <= 7.140483140945435) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            } else {
                                if (features[5] <= 0.1549139991402626) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[29] <= 0.06034749932587147) {
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
            classes[0] = 0; 
            classes[1] = 11; 
        }
    } else {
        if (features[19] <= 6.5829620361328125) {
            if (features[9] <= 0.6907705068588257) {
                classes[0] = 0; 
                classes[1] = 10; 
            } else {
                if (features[43] <= 2.4967089891433716) {
                    if (features[18] <= 0.28618599474430084) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[20] <= 3.8835325241088867) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 37; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[1] <= 11.843751907348633) {
                if (features[36] <= 4142.0260009765625) {
                    if (features[0] <= 4484.3603515625) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[6] <= 454.9154968261719) {
                            if (features[3] <= 0.539205014705658) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[41] <= 12.040433406829834) {
                                    if (features[4] <= 17.6813702583313) {
                                        if (features[41] <= 1.8303624987602234) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 82; 
                                    }
                                } else {
                                    if (features[31] <= 0.0005075000080978498) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[6] <= 394.83203125) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[49] <= 9.962206363677979) {
                    if (features[24] <= -2.821824073791504) {
                        classes[0] = 28; 
                        classes[1] = 0; 
                    } else {
                        if (features[16] <= -9.412684440612793) {
                            if (features[3] <= 0.7933394908905029) {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            } else {
                                if (features[49] <= 0.2896289974451065) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[42] <= 1.3723999857902527) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        if (features[5] <= 0.21455900371074677) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[35] <= 0.0026259999722242355) {
                                if (features[34] <= 952178.0625) {
                                    classes[0] = 0; 
                                    classes[1] = 15; 
                                } else {
                                    if (features[16] <= -8.267959117889404) {
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
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 25; 
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

int RFC_inst2_3::predict_7(float features[]) {
    int classes[2];
    
    if (features[4] <= 17.299461364746094) {
        if (features[39] <= 45.36765480041504) {
            if (features[35] <= 0.0008015000203158706) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            if (features[6] <= 345.22178649902344) {
                if (features[30] <= 1.0999999915384251e-05) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                }
            } else {
                if (features[42] <= 1.5386725068092346) {
                    if (features[25] <= -1.229718029499054) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[21] <= 4.649494409561157) {
                        classes[0] = 161; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        }
    } else {
        if (features[45] <= 3.2858744859695435) {
            if (features[17] <= -4.576960563659668) {
                if (features[14] <= 10.365975379943848) {
                    if (features[9] <= 0.8369775116443634) {
                        if (features[35] <= 0.0013990000006742775) {
                            classes[0] = 0; 
                            classes[1] = 59; 
                        } else {
                            if (features[48] <= 1.7757539749145508) {
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
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            } else {
                if (features[49] <= 0.8954689800739288) {
                    classes[0] = 13; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[23] <= 0.6391950100660324) {
                if (features[24] <= -1.214139997959137) {
                    if (features[14] <= 6.76778507232666) {
                        if (features[29] <= 0.07439200207591057) {
                            if (features[7] <= 419.92481994628906) {
                                if (features[44] <= 23.443603515625) {
                                    if (features[46] <= 27.196690559387207) {
                                        if (features[39] <= 144.22432708740234) {
                                            if (features[49] <= 17.814454555511475) {
                                                if (features[40] <= 4.287912130355835) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[23] <= -3.1636840105056763) {
                                                        if (features[9] <= 0.7796629965305328) {
                                                            classes[0] = 8; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
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
                                            classes[0] = 69; 
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
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    } else {
                        if (features[19] <= 14.216645240783691) {
                            classes[0] = 0; 
                            classes[1] = 16; 
                        } else {
                            if (features[10] <= 398.92189025878906) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[27] <= 1801.9493408203125) {
                        if (features[46] <= 5.091282606124878) {
                            if (features[46] <= 3.671026587486267) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            } else {
                                if (features[17] <= -10.615033626556396) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 19; 
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 19; 
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
    
    if (features[5] <= 0.16938899457454681) {
        if (features[44] <= 7.396305084228516) {
            if (features[32] <= 66.62039756774902) {
                if (features[11] <= 0.65625) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                if (features[17] <= -11.26829719543457) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[22] <= -1.3078140020370483) {
                        if (features[10] <= 376.87567138671875) {
                            if (features[19] <= 11.428951263427734) {
                                if (features[24] <= 0.07273849844932556) {
                                    if (features[39] <= 32.467159271240234) {
                                        if (features[34] <= 42489.771484375) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[20] <= 4.206279516220093) {
                                            if (features[26] <= 2022177.3125) {
                                                classes[0] = 8; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[28] <= 231068852224.0) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 200; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[10] <= 286.5205993652344) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[27] <= 249.31525039672852) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[23] <= -1.661792516708374) {
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
            if (features[2] <= 1516028.1875) {
                classes[0] = 0; 
                classes[1] = 12; 
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[38] <= 4502.9130859375) {
            if (features[10] <= 390.39942932128906) {
                if (features[35] <= 6.650000068475492e-05) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[31] <= 0.001361000002361834) {
                        classes[0] = 0; 
                        classes[1] = 99; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[6] <= 266.9436492919922) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 6; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[20] <= 5.950748443603516) {
                if (features[11] <= 0.6831664741039276) {
                    if (features[46] <= 10.632795810699463) {
                        if (features[43] <= 21.335777282714844) {
                            classes[0] = 0; 
                            classes[1] = 20; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[50] <= 9.391534805297852) {
                        if (features[24] <= -0.8668195009231567) {
                            classes[0] = 8; 
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
            } else {
                if (features[5] <= 0.24349699914455414) {
                    if (features[0] <= 7168.90576171875) {
                        if (features[47] <= 1.2337214946746826) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    } else {
                        if (features[17] <= -11.524259090423584) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[40] <= 56.726898193359375) {
                                classes[0] = 56; 
                                classes[1] = 0; 
                            } else {
                                if (features[25] <= -0.7851849943399429) {
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
                    if (features[10] <= 252.6711196899414) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 3; 
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

int RFC_inst2_3::predict_9(float features[]) {
    int classes[2];
    
    if (features[5] <= 0.16334400326013565) {
        if (features[2] <= 1011745.0625) {
            if (features[50] <= 1.642898976802826) {
                if (features[11] <= 0.22375000268220901) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 13; 
                    classes[1] = 0; 
                }
            } else {
                if (features[30] <= 0.00019000000230562364) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
                }
            }
        } else {
            if (features[30] <= 5091.740478515625) {
                if (features[24] <= -0.01215749979019165) {
                    if (features[45] <= 0.7733354866504669) {
                        if (features[31] <= 0.00024199999461416155) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[32] <= 1110.5914916992188) {
                            if (features[25] <= -2.7088454961776733) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[36] <= 352.47129821777344) {
                                    if (features[2] <= 1896979.5) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 161; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[38] <= 8781.7880859375) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        }
                    }
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
        if (features[48] <= 1.4307245016098022) {
            if (features[27] <= 399.9101867675781) {
                if (features[25] <= 0.5501559972763062) {
                    if (features[47] <= 0.8738220036029816) {
                        classes[0] = 0; 
                        classes[1] = 45; 
                    } else {
                        if (features[25] <= -0.5238784924149513) {
                            classes[0] = 0; 
                            classes[1] = 9; 
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
                if (features[36] <= 5123.3096923828125) {
                    if (features[6] <= 266.51914978027344) {
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
        } else {
            if (features[44] <= 15.348577499389648) {
                if (features[19] <= 6.562887668609619) {
                    if (features[14] <= 13.843719482421875) {
                        classes[0] = 46; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[24] <= -1.3759459853172302) {
                        if (features[11] <= 0.597291499376297) {
                            if (features[19] <= 11.751206874847412) {
                                if (features[39] <= 336.9373779296875) {
                                    classes[0] = 0; 
                                    classes[1] = 17; 
                                } else {
                                    if (features[51] <= 6.5016069412231445) {
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
                            if (features[35] <= 0.0007580000092275441) {
                                if (features[22] <= -3.2669914960861206) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[21] <= 2.9551174640655518) {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[9] <= 0.6973649859428406) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 42; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[21] <= 5.082986116409302) {
                            classes[0] = 0; 
                            classes[1] = 37; 
                        } else {
                            if (features[14] <= 2.423171877861023) {
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
                if (features[31] <= 0.00507900002412498) {
                    classes[0] = 0; 
                    classes[1] = 23; 
                } else {
                    classes[0] = 2; 
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

int RFC_inst2_3::predict_10(float features[]) {
    int classes[2];
    
    if (features[30] <= 0.0001004999976430554) {
        if (features[19] <= 8.842924118041992) {
            if (features[9] <= 0.7049379944801331) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[40] <= 2.10739403963089) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[24] <= -1.3137394785881042) {
                        if (features[22] <= -1.0315439999103546) {
                            classes[0] = 167; 
                            classes[1] = 0; 
                        } else {
                            if (features[33] <= 5859.5975341796875) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[36] <= 3410.4656982421875) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[4] <= 8.59349250793457) {
                classes[0] = 0; 
                classes[1] = 12; 
            } else {
                if (features[9] <= 0.683557003736496) {
                    if (features[19] <= 16.337361335754395) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[47] <= 0.6623905003070831) {
                        if (features[24] <= -2.6728224754333496) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[12] <= 442.6666717529297) {
            if (features[45] <= 16.142213344573975) {
                if (features[26] <= 6732361.75) {
                    if (features[50] <= 0.3046730011701584) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[16] <= -11.097010612487793) {
                            if (features[8] <= 2707.6671142578125) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 58; 
                        }
                    }
                } else {
                    if (features[15] <= -3.046797513961792) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                classes[0] = 8; 
                classes[1] = 0; 
            }
        } else {
            if (features[32] <= 1954.7498779296875) {
                if (features[29] <= 0.031422000378370285) {
                    if (features[6] <= 452.93975830078125) {
                        if (features[36] <= 1589.563720703125) {
                            classes[0] = 0; 
                            classes[1] = 30; 
                        } else {
                            if (features[22] <= -1.7907195091247559) {
                                if (features[50] <= 6.147408962249756) {
                                    if (features[15] <= -1.578629493713379) {
                                        classes[0] = 22; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[27] <= 205.81561279296875) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            } else {
                                if (features[30] <= 741.1586151123047) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[46] <= 22.2427396774292) {
                        if (features[9] <= 0.6896190047264099) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[23] <= -1.1703280210494995) {
                                if (features[47] <= 0.8450835049152374) {
                                    if (features[38] <= 12444.2431640625) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 53; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[30] <= 0.2221234980970621) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                }
            } else {
                if (features[2] <= 2132943.5) {
                    classes[0] = 0; 
                    classes[1] = 25; 
                } else {
                    if (features[21] <= 0.9226750135421753) {
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
    return class_idx;
}

