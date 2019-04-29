#include "RFC_inst2_4.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_4::predict_0(float features[]) {
    int classes[2];
    
    if (features[48] <= 10.444096565246582) {
        if (features[21] <= 3.8994600772857666) {
            if (features[6] <= 310.5527801513672) {
                if (features[20] <= -3.556898593902588) {
                    if (features[14] <= 39.360822677612305) {
                        if (features[20] <= -3.8198764324188232) {
                            if (features[17] <= -2.2736692428588867) {
                                if (features[8] <= 2109.2659912109375) {
                                    if (features[28] <= 49372807168.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                }
                            } else {
                                if (features[37] <= 0.010580315021798015) {
                                    classes[0] = 21; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        }
                    } else {
                        classes[0] = 17; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[48] <= 5.526885509490967) {
                        if (features[21] <= -10.285274028778076) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[46] <= 5.684489488601685) {
                                if (features[17] <= -2.47249436378479) {
                                    if (features[4] <= 67.1685619354248) {
                                        if (features[24] <= -3.7684818506240845) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 44; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[29] <= 0.026969047263264656) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            if (features[25] <= 1.726582109928131) {
                                                classes[0] = 9; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[37] <= 0.0012983575579710305) {
                                        if (features[16] <= -2.2415990233421326) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[39] <= 107.3270492553711) {
                                                if (features[50] <= 0.8989867568016052) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[27] <= 152.90130615234375) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 32; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 109; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 309; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[23] <= -4.314245939254761) {
                                    if (features[2] <= 477711.40625) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    if (features[41] <= 6.254508972167969) {
                                        if (features[43] <= 6.911993026733398) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    } else {
                                        if (features[6] <= 172.36144256591797) {
                                            classes[0] = 61; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[25] <= -2.1602007150650024) {
                                                if (features[41] <= 36.205145835876465) {
                                                    classes[0] = 0; 
                                                    classes[1] = 6; 
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[48] <= 0.7884085476398468) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[47] <= 12.620534896850586) {
                                                        if (features[5] <= 0.25877951085567474) {
                                                            if (features[22] <= -2.4316638708114624) {
                                                                if (features[19] <= -3.4417972564697266) {
                                                                    classes[0] = 5; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                }
                                                            } else {
                                                                classes[0] = 51; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            if (features[51] <= 2.7988396883010864) {
                                                                classes[0] = 4; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                if (features[10] <= 91.15472030639648) {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 2; 
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (features[32] <= 341.05943298339844) {
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
                            }
                        }
                    } else {
                        if (features[16] <= -2.946060061454773) {
                            if (features[24] <= -2.2967899441719055) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                if (features[2] <= 659606.71875) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[28] <= 28082608128.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[11] <= 0.30041663348674774) {
                                            if (features[27] <= 2608.8118286132812) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 11; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[38] <= 35291.98046875) {
                                if (features[23] <= 4.227960705757141) {
                                    if (features[22] <= 2.2439982891082764) {
                                        if (features[13] <= 207.05926513671875) {
                                            if (features[29] <= 0.01150360843166709) {
                                                if (features[41] <= 24.766048431396484) {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[15] <= -10.413109302520752) {
                                                    if (features[45] <= 3.973458170890808) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 13; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 75; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[41] <= 11.07954454421997) {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            }
                                        }
                                    } else {
                                        if (features[33] <= 6124.3531494140625) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                }
            } else {
                if (features[14] <= 7.041511535644531) {
                    if (features[51] <= 0.3282008022069931) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[29] <= 0.1392226442694664) {
                            if (features[41] <= 81.63921356201172) {
                                if (features[28] <= 12553533440.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 50; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[12] <= 470.7083282470703) {
                        if (features[3] <= 0.7097009420394897) {
                            if (features[1] <= 4.593639254570007) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            if (features[33] <= 5826.9873046875) {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            } else {
                                if (features[43] <= 3.3745381832122803) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        }
                    } else {
                        if (features[11] <= 0.2589583247900009) {
                            if (features[39] <= 593.4908218383789) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 33; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[3] <= 0.42871640622615814) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[13] <= 160.89627075195312) {
                    if (features[4] <= 43.43107032775879) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[41] <= 50.42745780944824) {
                        classes[0] = 0; 
                        classes[1] = 33; 
                    } else {
                        if (features[31] <= 0.005554105620831251) {
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
        if (features[32] <= 421.59967041015625) {
            if (features[38] <= 1001.2778015136719) {
                if (features[36] <= 29862.2119140625) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[42] <= 7.294116258621216) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[16] <= 7.125395774841309) {
                        if (features[2] <= 1168714.75) {
                            classes[0] = 20; 
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
            if (features[41] <= 93.18780517578125) {
                if (features[14] <= 32.43178367614746) {
                    if (features[33] <= 1213.1238708496094) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 0.7440032064914703) {
                            if (features[10] <= 64.1089973449707) {
                                if (features[36] <= 1265.4993896484375) {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[18] <= -17.397217750549316) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[6] <= 250.2738037109375) {
                                        if (features[11] <= 0.2770416736602783) {
                                            classes[0] = 0; 
                                            classes[1] = 22; 
                                        } else {
                                            if (features[47] <= 18.265719413757324) {
                                                if (features[18] <= 1.3891381919384003) {
                                                    if (features[30] <= 4629.4434814453125) {
                                                        classes[0] = 0; 
                                                        classes[1] = 7; 
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
                                                classes[1] = 12; 
                                            }
                                        }
                                    } else {
                                        if (features[25] <= 6.134912014007568) {
                                            if (features[4] <= 23.494811058044434) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[50] <= 2.220195949077606) {
                                                    if (features[44] <= 17.9426851272583) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                } else {
                                                    if (features[7] <= 356.21685791015625) {
                                                        if (features[47] <= 4.00929057598114) {
                                                            if (features[15] <= -11.045308113098145) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 3; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 129; 
                                                        }
                                                    } else {
                                                        if (features[42] <= 5.827328205108643) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[44] <= 42.85562515258789) {
                                                                classes[0] = 0; 
                                                                classes[1] = 9; 
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
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
                        } else {
                            if (features[46] <= 18.70600986480713) {
                                if (features[28] <= 35161534464.0) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
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
                } else {
                    if (features[47] <= 19.950466632843018) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[42] <= 15.267197608947754) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                }
            } else {
                if (features[47] <= 86.48867225646973) {
                    classes[0] = 14; 
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

int RFC_inst2_4::predict_1(float features[]) {
    int classes[2];
    
    if (features[12] <= 310.12498474121094) {
        if (features[51] <= 8.646744728088379) {
            if (features[51] <= 3.825429320335388) {
                if (features[22] <= 5.240665912628174) {
                    if (features[14] <= 14.555195808410645) {
                        if (features[30] <= 93.29535293579102) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[25] <= -4.394169569015503) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[17] <= -10.596377849578857) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[23] <= -3.347709894180298) {
                                    if (features[43] <= 42.39664077758789) {
                                        if (features[33] <= 7322.53759765625) {
                                            if (features[28] <= 18637039104.0) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 26; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[18] <= 9.636067867279053) {
                                        if (features[7] <= 113.90888595581055) {
                                            if (features[29] <= 0.04890638031065464) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[25] <= -3.688616156578064) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[31] <= 0.00011439973968663253) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[27] <= 152.90130615234375) {
                                                        if (features[49] <= 0.5836899280548096) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 36; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 475; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[19] <= 1.0987977981567383) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
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
                    if (features[28] <= 7313076480.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[22] <= 2.1197515726089478) {
                    if (features[6] <= 233.77811431884766) {
                        if (features[26] <= 14909853.0) {
                            if (features[34] <= 1884351.3125) {
                                if (features[30] <= 8668.092529296875) {
                                    if (features[21] <= 2.1522316932678223) {
                                        if (features[51] <= 3.865773916244507) {
                                            if (features[8] <= 2022.6629028320312) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 78; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[19] <= 3.084710955619812) {
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
                            } else {
                                if (features[43] <= 13.810642957687378) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[38] <= 9955.997314453125) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[48] <= 1.594258725643158) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 0.8391732275485992) {
                                if (features[29] <= 0.004085376858711243) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[22] <= 0.32658524066209793) {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                    } else {
                                        if (features[30] <= 773.3251876831055) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 2; 
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
                    if (features[15] <= -13.749622344970703) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[21] <= 0.18901081383228302) {
                            if (features[47] <= 8.696259021759033) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 0.30787497758865356) {
                if (features[4] <= 44.407936096191406) {
                    classes[0] = 19; 
                    classes[1] = 0; 
                } else {
                    if (features[0] <= 6002.7119140625) {
                        if (features[49] <= 2.008280396461487) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 17; 
                        }
                    } else {
                        if (features[29] <= 0.017838024999946356) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[12] <= 294.1666717529297) {
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
                classes[0] = 0; 
                classes[1] = 23; 
            }
        }
    } else {
        if (features[13] <= 196.2288360595703) {
            if (features[14] <= 8.083940744400024) {
                if (features[11] <= 0.28591665625572205) {
                    if (features[5] <= 0.10941890254616737) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[9] <= 0.8152130842208862) {
                        if (features[40] <= 8.648799657821655) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[14] <= 6.55244255065918) {
                                classes[0] = 0; 
                                classes[1] = 69; 
                            } else {
                                if (features[18] <= 1.1260216236114502) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[21] <= 1.1138994693756104) {
                    if (features[25] <= -2.060652494430542) {
                        if (features[21] <= -0.6951561570167542) {
                            if (features[32] <= 975.9192199707031) {
                                if (features[49] <= 3.3332749009132385) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[33] <= 13553.82421875) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    if (features[2] <= 1001069.34375) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[18] <= 5.602180004119873) {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        if (features[49] <= 8.695243835449219) {
                            if (features[5] <= 0.2335129752755165) {
                                if (features[23] <= 6.260040283203125) {
                                    if (features[31] <= 0.01259072357788682) {
                                        if (features[20] <= 13.437561988830566) {
                                            if (features[20] <= -6.927631616592407) {
                                                if (features[23] <= -2.7511706352233887) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 97; 
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
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[16] <= -5.566849708557129) {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            } else {
                                if (features[31] <= 0.0009587732201907784) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[43] <= 37.78587818145752) {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[37] <= 0.006609603064134717) {
                        if (features[12] <= 469.7916717529297) {
                            if (features[28] <= 83247495168.0) {
                                classes[0] = 0; 
                                classes[1] = 29; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[32] <= 5152.6260986328125) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[3] <= 0.5843052268028259) {
                            if (features[51] <= 1.8205153346061707) {
                                if (features[21] <= 1.6347691416740417) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 11; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[5] <= 0.19553197920322418) {
                                if (features[22] <= 3.846905469894409) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[11] <= 0.19824999570846558) {
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
            if (features[46] <= 2.757228374481201) {
                if (features[39] <= 80.28313827514648) {
                    if (features[47] <= 1.5708287954330444) {
                        if (features[32] <= 342.8404998779297) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[48] <= 2.6234084963798523) {
                        if (features[33] <= 7207.878662109375) {
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
                }
            } else {
                if (features[12] <= 381.0) {
                    if (features[42] <= 15.688667297363281) {
                        if (features[10] <= 89.63148880004883) {
                            if (features[35] <= 0.0016200413228943944) {
                                classes[0] = 14; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[40] <= 47.309926986694336) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                if (features[47] <= 16.81365156173706) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 18; 
                    }
                } else {
                    if (features[15] <= 15.919184684753418) {
                        if (features[11] <= 0.3473749905824661) {
                            if (features[21] <= 0.9721452593803406) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[24] <= 2.2447268962860107) {
                                if (features[39] <= 275.177978515625) {
                                    classes[0] = 0; 
                                    classes[1] = 125; 
                                } else {
                                    if (features[39] <= 280.2939147949219) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[25] <= -2.424459934234619) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 20; 
                                        }
                                    }
                                }
                            } else {
                                if (features[49] <= 6.816661596298218) {
                                    if (features[49] <= 3.532681465148926) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                }
                            }
                        }
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

int RFC_inst2_4::predict_2(float features[]) {
    int classes[2];
    
    if (features[12] <= 294.2916717529297) {
        if (features[47] <= 13.323099136352539) {
            if (features[43] <= 8.9996919631958) {
                if (features[42] <= 38.9341983795166) {
                    if (features[17] <= -12.370593547821045) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[25] <= -4.90424919128418) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[45] <= 11.610086917877197) {
                                if (features[24] <= 4.212095499038696) {
                                    if (features[42] <= 2.0242595076560974) {
                                        if (features[33] <= 3079.556396484375) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[21] <= -3.5986621379852295) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 20; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[31] <= 0.00012768070519086905) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[3] <= 0.6539722084999084) {
                                                if (features[21] <= 5.428555488586426) {
                                                    if (features[2] <= 631759.0) {
                                                        classes[0] = 84; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[2] <= 680363.6875) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 4; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 292; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[6] <= 194.6668930053711) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[49] <= 0.7882806360721588) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[14] <= 16.466350555419922) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[39] <= 328.6818084716797) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[25] <= -2.137548089027405) {
                    if (features[28] <= 35796846592.0) {
                        if (features[14] <= 49.06501007080078) {
                            if (features[47] <= 0.8761316537857056) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            }
                        } else {
                            if (features[24] <= -0.36654047667980194) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[17] <= -17.94368076324463) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[19] <= -2.7535312175750732) {
                        if (features[11] <= 0.24379168450832367) {
                            if (features[24] <= -2.6986883878707886) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[23] <= 1.9486270546913147) {
                                    classes[0] = 43; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[34] <= 1004220.90625) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[35] <= 0.000407982399337925) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= 18.659303665161133) {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                } else {
                                    if (features[6] <= 221.44625854492188) {
                                        if (features[41] <= 19.95020341873169) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
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
                    } else {
                        if (features[49] <= 17.025218963623047) {
                            if (features[11] <= 0.24416667968034744) {
                                if (features[43] <= 12.040610313415527) {
                                    if (features[29] <= 0.009624005295336246) {
                                        if (features[51] <= 2.257413625717163) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[15] <= -4.213172078132629) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 34; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 107; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[41] <= 7.069378137588501) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[4] <= 26.561631202697754) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[21] <= 1.9037169218063354) {
                                            classes[0] = 31; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[21] <= 2.3316709995269775) {
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
                        } else {
                            if (features[19] <= 1.236617386341095) {
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
            if (features[49] <= 17.634848594665527) {
                if (features[6] <= 179.32059478759766) {
                    if (features[47] <= 49.80510711669922) {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[22] <= 2.3609778881073) {
                        if (features[7] <= 326.0495910644531) {
                            classes[0] = 0; 
                            classes[1] = 15; 
                        } else {
                            if (features[16] <= 5.372709691524506) {
                                classes[0] = 4; 
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
                }
            } else {
                if (features[14] <= 45.510372161865234) {
                    classes[0] = 0; 
                    classes[1] = 17; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[10] <= 70.29982376098633) {
            if (features[50] <= 6.232537031173706) {
                if (features[25] <= -3.1205105781555176) {
                    if (features[33] <= 3529.889404296875) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[15] <= -5.698141098022461) {
                        if (features[14] <= 20.900753021240234) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        } else {
                            if (features[49] <= 2.547178268432617) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[4] <= 154.62378692626953) {
                            if (features[4] <= 102.63565063476562) {
                                if (features[26] <= 585796.296875) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 92; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[25] <= -0.20048260688781738) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                }
            } else {
                if (features[41] <= 44.435773849487305) {
                    if (features[14] <= 31.082026481628418) {
                        if (features[39] <= 260.60083770751953) {
                            classes[0] = 0; 
                            classes[1] = 31; 
                        } else {
                            if (features[9] <= 0.6741361021995544) {
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
                    if (features[15] <= 0.5222782492637634) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[4] <= 42.39138221740723) {
                if (features[21] <= 4.983149528503418) {
                    if (features[1] <= 9.225979328155518) {
                        if (features[45] <= 6.931864380836487) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[8] <= 3991.221435546875) {
                            classes[0] = 35; 
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
                if (features[38] <= 4824.791748046875) {
                    if (features[29] <= 0.049128301441669464) {
                        if (features[2] <= 839328.0) {
                            if (features[33] <= 7157.716552734375) {
                                if (features[27] <= 760.340087890625) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[42] <= 5.511393308639526) {
                                if (features[4] <= 132.0412712097168) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 29; 
                            }
                        }
                    } else {
                        if (features[3] <= 0.4920056164264679) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[39] <= 86.41495895385742) {
                                if (features[3] <= 2.1226028501987457) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[22] <= -2.57870876789093) {
                                    if (features[40] <= 33.37316370010376) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[49] <= 8.188300848007202) {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[3] <= 0.6773721873760223) {
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
                    if (features[35] <= 0.024875015951693058) {
                        if (features[49] <= 4.839810371398926) {
                            if (features[11] <= 0.33283334970474243) {
                                if (features[47] <= 2.7850064039230347) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[43] <= 30.340956687927246) {
                                        if (features[24] <= -1.8333213180303574) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[13] <= 207.0151596069336) {
                                    if (features[0] <= 9181.67431640625) {
                                        classes[0] = 0; 
                                        classes[1] = 39; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[9] <= 0.6201843917369843) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        if (features[3] <= 0.8013085126876831) {
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
                            if (features[1] <= 3.232019305229187) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[9] <= 0.7503708302974701) {
                                    if (features[44] <= 88.20169067382812) {
                                        if (features[12] <= 371.2916717529297) {
                                            if (features[44] <= 5.535618305206299) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[43] <= 50.67923545837402) {
                                                    if (features[12] <= 362.1666564941406) {
                                                        if (features[34] <= 134483.09765625) {
                                                            if (features[13] <= 155.69125366210938) {
                                                                classes[0] = 0; 
                                                                classes[1] = 3; 
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 37; 
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
                                            if (features[16] <= -16.76100492477417) {
                                                if (features[37] <= 0.011932570952922106) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[10] <= 155.494873046875) {
                                                    classes[0] = 0; 
                                                    classes[1] = 107; 
                                                } else {
                                                    if (features[19] <= -3.015408366918564) {
                                                        if (features[19] <= -6.182041168212891) {
                                                            classes[0] = 0; 
                                                            classes[1] = 4; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 15; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[19] <= -1.6211099475622177) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[47] <= 25.851600646972656) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
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

int RFC_inst2_4::predict_3(float features[]) {
    int classes[2];
    
    if (features[12] <= 303.9583435058594) {
        if (features[51] <= 5.435482978820801) {
            if (features[16] <= -2.7509539127349854) {
                if (features[40] <= 58.63823890686035) {
                    if (features[43] <= 19.090417861938477) {
                        if (features[30] <= 1125.3497924804688) {
                            if (features[20] <= -1.9993448853492737) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[33] <= 9202.43017578125) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[49] <= 8.09589409828186) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 14; 
                    classes[1] = 0; 
                }
            } else {
                if (features[1] <= 4.0939037799835205) {
                    if (features[21] <= 2.377666413784027) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[17] <= 2.4572436437010765) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[20] <= 7.3871448040008545) {
                        if (features[25] <= -4.741077780723572) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[22] <= -5.455215930938721) {
                                if (features[47] <= 6.2989349365234375) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[39] <= 29.889504432678223) {
                                    if (features[38] <= 670.1318969726562) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[29] <= 0.03637715708464384) {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[38] <= 6217.45458984375) {
                                        if (features[41] <= 2.4387688636779785) {
                                            if (features[35] <= 0.0008466714061796665) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[51] <= 3.862611770629883) {
                                                if (features[36] <= 33963.046875) {
                                                    if (features[45] <= 10.346728324890137) {
                                                        classes[0] = 419; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[29] <= 0.01157428789883852) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 35; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[33] <= 31381.302734375) {
                                                        if (features[30] <= 122.88477325439453) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 17; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[34] <= 274353.4375) {
                                                    if (features[1] <= 20.04519033432007) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[8] <= 2907.736328125) {
                                                        classes[0] = 37; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[5] <= 0.25393036007881165) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 6; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[47] <= 4.528870105743408) {
                                            if (features[37] <= 0.0012145201326347888) {
                                                if (features[21] <= 0.46277204155921936) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 46; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[11] <= 0.24841668456792831) {
                                                if (features[23] <= 4.174399733543396) {
                                                    if (features[45] <= 4.279096364974976) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 15; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
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
                        if (features[34] <= 1234350.8125) {
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
            if (features[20] <= 3.9629327058792114) {
                if (features[13] <= 169.29087829589844) {
                    if (features[43] <= 33.46057891845703) {
                        if (features[15] <= 9.47440242767334) {
                            classes[0] = 37; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 63.05705451965332) {
                                classes[0] = 6; 
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
                } else {
                    if (features[48] <= 12.598944187164307) {
                        if (features[3] <= 0.5835238397121429) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            if (features[33] <= 4932.2117919921875) {
                                if (features[27] <= 3842.45556640625) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[9] <= 0.6635631918907166) {
                                    if (features[51] <= 6.233738422393799) {
                                        if (features[21] <= -0.5094563812017441) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 21; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[28] <= 97406810112.0) {
                            classes[0] = 0; 
                            classes[1] = 18; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[49] <= 2.2795344591140747) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[15] <= -17.27547264099121) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 18; 
                    }
                }
            }
        }
    } else {
        if (features[21] <= 1.1540310978889465) {
            if (features[1] <= 22.947412490844727) {
                if (features[14] <= 6.9617462158203125) {
                    if (features[4] <= 64.17061996459961) {
                        if (features[16] <= -1.3423374891281128) {
                            if (features[1] <= 14.356619834899902) {
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
                    } else {
                        if (features[48] <= 80.37237739562988) {
                            classes[0] = 0; 
                            classes[1] = 42; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[38] <= 4022.162841796875) {
                        if (features[33] <= 1020.3422546386719) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[28] <= 59615590400.0) {
                                if (features[19] <= -4.243008136749268) {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                } else {
                                    if (features[41] <= 32.84796333312988) {
                                        if (features[51] <= 0.6155075877904892) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[9] <= 0.5831150114536285) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 14; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                }
                            } else {
                                if (features[32] <= 358.62940979003906) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 14; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[15] <= 2.943383574485779) {
                            if (features[32] <= 1170.0006713867188) {
                                if (features[24] <= 2.137709856033325) {
                                    if (features[10] <= 63.935773849487305) {
                                        if (features[38] <= 5677.10791015625) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[1] <= 20.440385818481445) {
                                            classes[0] = 0; 
                                            classes[1] = 11; 
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
                                if (features[12] <= 536.9583435058594) {
                                    if (features[47] <= 2.109858274459839) {
                                        if (features[20] <= -1.4465726017951965) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[49] <= 20.110000610351562) {
                                            classes[0] = 19; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[23] <= -0.645672470331192) {
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
                                    classes[1] = 4; 
                                }
                            }
                        } else {
                            if (features[22] <= 1.0547988712787628) {
                                classes[0] = 61; 
                                classes[1] = 0; 
                            } else {
                                if (features[21] <= 0.7964383959770203) {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[47] <= 4.950531482696533) {
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
                }
            } else {
                if (features[15] <= -17.081488609313965) {
                    if (features[31] <= 0.0054845744743943214) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        if (features[14] <= 0.4908602237701416) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[46] <= 3.1446616649627686) {
                        if (features[4] <= 78.95041275024414) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            if (features[33] <= 6432.641357421875) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        }
                    } else {
                        if (features[7] <= 120.87420272827148) {
                            if (features[3] <= 0.8625284433364868) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[25] <= -3.5804877281188965) {
                                if (features[20] <= 3.7670809030532837) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[35] <= 0.0003998140018666163) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[17] <= -22.721562385559082) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[30] <= 0.09267647564411163) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[27] <= 620.9368896484375) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[3] <= 1.7458483576774597) {
                                                    if (features[32] <= 7781.46142578125) {
                                                        if (features[51] <= 1.082873523235321) {
                                                            if (features[20] <= -5.670897483825684) {
                                                                classes[0] = 2; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 5; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 86; 
                                                        }
                                                    } else {
                                                        if (features[18] <= -7.646633625030518) {
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
            if (features[5] <= 0.1447324901819229) {
                if (features[33] <= 7376.257568359375) {
                    if (features[6] <= 263.69549560546875) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 10; 
                    }
                } else {
                    if (features[35] <= 0.003581638156902045) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[46] <= 2.0917367935180664) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[2] <= 427400.1875) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[7] <= 115.794677734375) {
                            if (features[45] <= 6.11839485168457) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[6] <= 360.8984375) {
                                if (features[32] <= 12141.8662109375) {
                                    if (features[49] <= 0.9825979918241501) {
                                        if (features[29] <= 0.03302115388214588) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[10] <= 74.34088897705078) {
                                            if (features[19] <= 1.655242383480072) {
                                                classes[0] = 0; 
                                                classes[1] = 13; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 97; 
                                        }
                                    }
                                } else {
                                    if (features[32] <= 16698.29833984375) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[3] <= 0.8980596661567688) {
                                    if (features[4] <= 42.63576316833496) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                    }
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

int RFC_inst2_4::predict_4(float features[]) {
    int classes[2];
    
    if (features[46] <= 12.057134628295898) {
        if (features[4] <= 83.21332168579102) {
            if (features[21] <= 3.8942381143569946) {
                if (features[13] <= 204.78781127929688) {
                    if (features[23] <= 4.721024990081787) {
                        if (features[49] <= 7.570626497268677) {
                            if (features[43] <= 30.43515682220459) {
                                if (features[17] <= 16.665143966674805) {
                                    if (features[22] <= -7.224825620651245) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[18] <= -6.703592300415039) {
                                            if (features[11] <= 0.25825000554323196) {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            if (features[50] <= 2.0685744285583496) {
                                                classes[0] = 349; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[25] <= -2.1726810932159424) {
                                                    if (features[14] <= 26.92133617401123) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        if (features[26] <= 3550995.3125) {
                                                            classes[0] = 12; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[26] <= 8247814.75) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (features[23] <= 2.889890670776367) {
                                                        if (features[28] <= 104937885696.0) {
                                                            if (features[42] <= 3.92754864692688) {
                                                                if (features[48] <= 8.827997922897339) {
                                                                    classes[0] = 18; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                }
                                                            } else {
                                                                classes[0] = 179; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            if (features[3] <= 0.7856956124305725) {
                                                                if (features[27] <= 1252.9695129394531) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 2; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 5; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    } else {
                                                        if (features[39] <= 404.24952697753906) {
                                                            classes[0] = 2; 
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
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[19] <= -4.170480012893677) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[42] <= 20.97868537902832) {
                                if (features[51] <= 1.2877084612846375) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[10] <= 229.51009368896484) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[10] <= 255.4361114501953) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[7] <= 294.5859680175781) {
                                    if (features[31] <= 0.006031907629221678) {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[30] <= 2172.1875) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[50] <= 3.014585494995117) {
                        if (features[3] <= 0.7250860631465912) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[22] <= 0.7088888585567474) {
                                classes[0] = 50; 
                                classes[1] = 0; 
                            } else {
                                if (features[27] <= 1649.9790649414062) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 0.9439390003681183) {
                            if (features[30] <= 42.587407663464546) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 14; 
                            }
                        } else {
                            if (features[21] <= 1.7905063033103943) {
                                if (features[37] <= 0.0016839929739944637) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            } else {
                if (features[13] <= 161.47412109375) {
                    if (features[41] <= 9.133599042892456) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 20; 
                }
            }
        } else {
            if (features[23] <= -0.2590513527393341) {
                if (features[12] <= 322.25) {
                    if (features[16] <= -7.074110746383667) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[23] <= -0.8732410967350006) {
                            classes[0] = 50; 
                            classes[1] = 0; 
                        } else {
                            if (features[1] <= 29.59272861480713) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[16] <= -0.394848495721817) {
                        if (features[11] <= 0.5781667232513428) {
                            if (features[36] <= 12099.26513671875) {
                                classes[0] = 0; 
                                classes[1] = 32; 
                            } else {
                                if (features[17] <= -15.732199430465698) {
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
                    } else {
                        if (features[15] <= 1.526256948709488) {
                            if (features[9] <= 0.5777201652526855) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        } else {
                            if (features[20] <= 3.901004195213318) {
                                if (features[23] <= -4.387888193130493) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 23; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            } else {
                if (features[16] <= -0.6972492337226868) {
                    if (features[45] <= 24.42255973815918) {
                        if (features[14] <= 26.8170223236084) {
                            classes[0] = 0; 
                            classes[1] = 47; 
                        } else {
                            if (features[40] <= 31.71941900253296) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[27] <= 5778.330368041992) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[25] <= 1.307656705379486) {
                        if (features[29] <= 0.023326787166297436) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[20] <= 4.736075401306152) {
                                if (features[13] <= 196.00238800048828) {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[21] <= 0.04802277684211731) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
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
                        classes[0] = 0; 
                        classes[1] = 13; 
                    }
                }
            }
        }
    } else {
        if (features[38] <= 16132.88134765625) {
            if (features[5] <= 0.22550294548273087) {
                if (features[6] <= 274.32838439941406) {
                    if (features[44] <= 50.49948978424072) {
                        if (features[46] <= 31.819737434387207) {
                            if (features[17] <= -5.611098766326904) {
                                if (features[47] <= 17.328749656677246) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[29] <= 0.027170056477189064) {
                                    if (features[29] <= 0.025606075301766396) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[26] <= 7172627.0) {
                                        classes[0] = 50; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[1] <= 27.589924812316895) {
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
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[48] <= 8.441614151000977) {
                        if (features[39] <= 620.9988861083984) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[37] <= 0.00566602754406631) {
                            if (features[15] <= -32.02992916107178) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 18; 
                            }
                        } else {
                            if (features[43] <= 32.73551082611084) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[20] <= 0.5382721722126007) {
                    if (features[22] <= -3.583293318748474) {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    } else {
                        if (features[30] <= 1813.5092163085938) {
                            if (features[21] <= -3.640964150428772) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[12] <= 248.0833282470703) {
                                    if (features[0] <= 7490.82421875) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 16; 
                        }
                    }
                } else {
                    if (features[16] <= 10.86639404296875) {
                        if (features[26] <= 8230314.25) {
                            classes[0] = 0; 
                            classes[1] = 44; 
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
        } else {
            if (features[14] <= 31.786728858947754) {
                if (features[2] <= 288325.828125) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[48] <= 1.8569088578224182) {
                        if (features[8] <= 2934.8275146484375) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[45] <= 2.907446265220642) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[21] <= -12.181775569915771) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 103; 
                            }
                        }
                    }
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

int RFC_inst2_4::predict_5(float features[]) {
    int classes[2];
    
    if (features[17] <= -0.6338755786418915) {
        if (features[16] <= -1.2572609186172485) {
            if (features[13] <= 153.01170349121094) {
                if (features[24] <= 3.0732046365737915) {
                    if (features[1] <= 165.16875076293945) {
                        if (features[39] <= 2953.7933349609375) {
                            if (features[22] <= -5.361552476882935) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 28; 
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
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[6] <= 217.03546142578125) {
                    if (features[40] <= 57.5125617980957) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        if (features[34] <= 685559.328125) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[44] <= 1.1357006430625916) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[21] <= 0.9731777608394623) {
                            if (features[18] <= -2.439550042152405) {
                                if (features[32] <= 1006.3300476074219) {
                                    classes[0] = 0; 
                                    classes[1] = 35; 
                                } else {
                                    if (features[8] <= 2784.017578125) {
                                        if (features[41] <= 32.625245094299316) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[28] <= 30727754752.0) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 6; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 14; 
                                    }
                                }
                            } else {
                                if (features[40] <= 47.49842643737793) {
                                    if (features[49] <= 1.5103294253349304) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[13] <= 169.82311248779297) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            if (features[31] <= 0.0015540310996584594) {
                                                if (features[13] <= 194.07969665527344) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                if (features[12] <= 248.8333282470703) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[1] <= 65.08309745788574) {
                                                        classes[0] = 16; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[25] <= -0.5643871426582336) {
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
                                    if (features[44] <= 7.818637371063232) {
                                        if (features[3] <= 0.6878266632556915) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 19; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 87; 
                        }
                    }
                }
            }
        } else {
            if (features[14] <= 20.344597816467285) {
                if (features[41] <= 17.036842346191406) {
                    if (features[32] <= 489.2066650390625) {
                        if (features[11] <= 0.5475833117961884) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            if (features[0] <= 8103.613525390625) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[4] <= 95.93634796142578) {
                            if (features[24] <= -1.3004794418811798) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 19; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[44] <= 6.297457933425903) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                } else {
                    if (features[29] <= 0.06152711994946003) {
                        if (features[1] <= 3.6518004536628723) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[35] <= 0.004991912050172687) {
                                classes[0] = 0; 
                                classes[1] = 31; 
                            } else {
                                if (features[44] <= 18.856768131256104) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[48] <= 11.632847547531128) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                }
            } else {
                if (features[28] <= 329460039680.0) {
                    if (features[27] <= 121.92488861083984) {
                        if (features[27] <= 106.3809700012207) {
                            if (features[33] <= 6233.806396484375) {
                                if (features[18] <= -1.0676074922084808) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        if (features[46] <= 8.615495204925537) {
                            if (features[13] <= 206.30628204345703) {
                                classes[0] = 123; 
                                classes[1] = 0; 
                            } else {
                                if (features[43] <= 12.039008855819702) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[26] <= 1777746.1875) {
                                if (features[11] <= 0.3242916613817215) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[22] <= -0.7338476479053497) {
                                    classes[0] = 16; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[46] <= 12.137012958526611) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[7] <= 184.75325775146484) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    }
                                }
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
        if (features[12] <= 377.875) {
            if (features[42] <= 20.686452865600586) {
                if (features[37] <= 0.05628078989684582) {
                    if (features[45] <= 12.194210052490234) {
                        if (features[13] <= 211.21184539794922) {
                            if (features[20] <= 5.176439523696899) {
                                if (features[24] <= 3.4967740774154663) {
                                    if (features[44] <= 38.310646057128906) {
                                        if (features[1] <= 9.25248670578003) {
                                            if (features[23] <= -11.35099971294403) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[4] <= 87.0052490234375) {
                                                    if (features[29] <= 0.006758127827197313) {
                                                        if (features[7] <= 259.7230911254883) {
                                                            classes[0] = 6; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        classes[0] = 43; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[29] <= 0.01849115500226617) {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    } else {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        } else {
                                            if (features[24] <= -6.489660978317261) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[34] <= 566867.15625) {
                                                    classes[0] = 297; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[34] <= 569697.78125) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 87; 
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
                                    if (features[3] <= 0.698439747095108) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[11] <= 0.1744999997317791) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[0] <= 7850.710693359375) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[28] <= 40524529664.0) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                if (features[22] <= 0.05448511056602001) {
                                    classes[0] = 17; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    } else {
                        if (features[47] <= 13.309723854064941) {
                            if (features[43] <= 2.5260690450668335) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[22] <= 1.200723111629486) {
                                    classes[0] = 26; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[49] <= 2.464771032333374) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[29] <= 0.030655507929623127) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                if (features[5] <= 0.3035551756620407) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[5] <= 0.34532202780246735) {
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
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[47] <= 8.898844242095947) {
                    if (features[21] <= 3.847967505455017) {
                        if (features[27] <= 170.13932037353516) {
                            if (features[4] <= 54.47134590148926) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 55; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[34] <= 945100.03125) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[16] <= 13.50273847579956) {
                        if (features[5] <= 0.14133256673812866) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[17] <= 9.469612121582031) {
                                classes[0] = 0; 
                                classes[1] = 27; 
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
            }
        } else {
            if (features[46] <= 14.151587009429932) {
                if (features[22] <= 2.5617072582244873) {
                    if (features[22] <= -5.2897539138793945) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[40] <= 19.421137809753418) {
                            if (features[50] <= 1.7734975218772888) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            }
                        } else {
                            if (features[47] <= 8.047868013381958) {
                                if (features[23] <= 2.5239439010620117) {
                                    if (features[34] <= 103955.79296875) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[23] <= -2.733206629753113) {
                                            if (features[6] <= 290.8509521484375) {
                                                classes[0] = 7; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 52; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                if (features[24] <= 0.24332749843597412) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 18; 
                }
            } else {
                if (features[15] <= -28.34588623046875) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    if (features[28] <= 39120728064.0) {
                        if (features[5] <= 0.14228352159261703) {
                            if (features[43] <= 18.0310001373291) {
                                classes[0] = 0; 
                                classes[1] = 2; 
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
                        classes[1] = 42; 
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

int RFC_inst2_4::predict_6(float features[]) {
    int classes[2];
    
    if (features[14] <= 16.604650497436523) {
        if (features[47] <= 4.800754070281982) {
            if (features[8] <= 3083.5877685546875) {
                if (features[43] <= 7.33356237411499) {
                    if (features[38] <= 40834.462890625) {
                        if (features[48] <= 1.1766815781593323) {
                            if (features[36] <= 1306.6339721679688) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 23; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[9] <= 0.7141090631484985) {
                        if (features[17] <= 5.683225154876709) {
                            if (features[38] <= 5761.495361328125) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 15; 
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[32] <= 812.9984741210938) {
                            if (features[44] <= 19.353740692138672) {
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
            } else {
                if (features[23] <= -3.3589802980422974) {
                    if (features[33] <= 26148.814453125) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[16] <= -6.923480272293091) {
                        if (features[13] <= 221.6276626586914) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 30; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[17] <= -22.26893901824951) {
                classes[0] = 5; 
                classes[1] = 0; 
            } else {
                if (features[11] <= 0.3035416752099991) {
                    if (features[5] <= 0.13874594494700432) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[35] <= 0.0005362943920772523) {
                        if (features[12] <= 512.9166412353516) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[13] <= 148.92687225341797) {
                            if (features[23] <= 1.6666700839996338) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            }
                        } else {
                            if (features[9] <= 0.7349634170532227) {
                                if (features[47] <= 7.221482753753662) {
                                    if (features[17] <= 1.615288108587265) {
                                        classes[0] = 0; 
                                        classes[1] = 19; 
                                    } else {
                                        if (features[10] <= 100.6348876953125) {
                                            if (features[42] <= 10.281199216842651) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                        }
                                    }
                                } else {
                                    if (features[49] <= 6.328046560287476) {
                                        if (features[15] <= 9.78162670135498) {
                                            classes[0] = 0; 
                                            classes[1] = 25; 
                                        } else {
                                            if (features[18] <= -3.6367016434669495) {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[15] <= -6.482554197311401) {
                                            if (features[15] <= -6.861003637313843) {
                                                classes[0] = 0; 
                                                classes[1] = 36; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 92; 
                                        }
                                    }
                                }
                            } else {
                                if (features[9] <= 0.7614158689975739) {
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
        }
    } else {
        if (features[50] <= 3.950723171234131) {
            if (features[16] <= -5.127091646194458) {
                if (features[11] <= 0.20650000125169754) {
                    if (features[42] <= 18.289730072021484) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[17] <= -6.54348087310791) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        if (features[43] <= 4.377297639846802) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[51] <= 6.631500482559204) {
                    if (features[40] <= 3.310330867767334) {
                        if (features[37] <= 0.0005603539175353944) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[27] <= 27.149998664855957) {
                            if (features[7] <= 236.44412231445312) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[46] <= 39.69816017150879) {
                                if (features[15] <= 2.8279080390930176) {
                                    if (features[29] <= 0.007581280777230859) {
                                        if (features[27] <= 47.23151397705078) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                        }
                                    } else {
                                        if (features[22] <= 5.473990201950073) {
                                            if (features[36] <= 129.4449920654297) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[20] <= -0.6112204194068909) {
                                                    classes[0] = 84; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[12] <= 291.375) {
                                                        if (features[47] <= 7.573775053024292) {
                                                            if (features[21] <= 3.398051142692566) {
                                                                classes[0] = 56; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                if (features[21] <= 4.77263069152832) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 3; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
                                                        } else {
                                                            if (features[7] <= 273.20709228515625) {
                                                                classes[0] = 4; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            }
                                                        }
                                                    } else {
                                                        if (features[48] <= 2.9773088097572327) {
                                                            if (features[23] <= -2.452316701412201) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 6; 
                                                            }
                                                        } else {
                                                            if (features[15] <= -8.174798727035522) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 14; 
                                                                classes[1] = 0; 
                                                            }
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
                                    if (features[49] <= 6.4779651165008545) {
                                        if (features[42] <= 1.9635944962501526) {
                                            if (features[25] <= 3.2017399966716766) {
                                                classes[0] = 11; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[6] <= 283.0959777832031) {
                                                if (features[26] <= 5341909.5) {
                                                    classes[0] = 345; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[25] <= -2.447009563446045) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 46; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[6] <= 283.14739990234375) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 12; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[12] <= 318.7916717529297) {
                                            if (features[44] <= 21.469639778137207) {
                                                classes[0] = 16; 
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
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[27] <= 1482.4725341796875) {
                        if (features[26] <= 757731.6875) {
                            if (features[25] <= 1.735823255032301) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[47] <= 5.089179039001465) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 18; 
                            }
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[14] <= 25.652955055236816) {
                if (features[3] <= 0.5498887598514557) {
                    if (features[20] <= -4.115004181861877) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[27] <= 506.44895935058594) {
                            if (features[15] <= -2.99550724029541) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[47] <= 12.947901248931885) {
                        if (features[32] <= 1624.1795654296875) {
                            if (features[42] <= 16.951784133911133) {
                                if (features[44] <= 7.917110919952393) {
                                    if (features[26] <= 1178705.5625) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[4] <= 65.90388488769531) {
                                            if (features[38] <= 3173.3543701171875) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        }
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 20; 
                            }
                        } else {
                            if (features[2] <= 1152642.6875) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[43] <= 29.86754035949707) {
                            classes[0] = 0; 
                            classes[1] = 32; 
                        } else {
                            if (features[47] <= 15.336127758026123) {
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
                if (features[22] <= 2.4434551000595093) {
                    if (features[19] <= -4.767868757247925) {
                        if (features[45] <= 7.996445178985596) {
                            if (features[32] <= 3195.1755981445312) {
                                classes[0] = 9; 
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
                        if (features[24] <= -3.369611978530884) {
                            if (features[24] <= -4.691621422767639) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        } else {
                            if (features[16] <= -7.651264190673828) {
                                if (features[31] <= 0.004960317099175882) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                if (features[46] <= 20.683300971984863) {
                                    if (features[50] <= 20.2298641204834) {
                                        if (features[37] <= 0.005449371412396431) {
                                            classes[0] = 106; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[25] <= -2.8367782831192017) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[35] <= 0.0005151500081410632) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    if (features[20] <= -2.9586411118507385) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        if (features[37] <= 0.0055707888677716255) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 25; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[13] <= 146.22413635253906) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[7] <= 254.96118927001953) {
                                        if (features[7] <= 138.41342163085938) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[3] <= 0.5075907558202744) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 10; 
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

int RFC_inst2_4::predict_7(float features[]) {
    int classes[2];
    
    if (features[14] <= 18.63184642791748) {
        if (features[5] <= 0.11990085989236832) {
            if (features[29] <= 0.01439646352082491) {
                if (features[30] <= 3877.74462890625) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[11] <= 0.5839582979679108) {
                    if (features[9] <= 0.7150271534919739) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 41; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[4] <= 65.34160614013672) {
                if (features[14] <= 9.581992149353027) {
                    if (features[3] <= 0.9741047322750092) {
                        if (features[37] <= 0.00023390942442347296) {
                            if (features[8] <= 2085.6934204101562) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[8] <= 2619.630859375) {
                                classes[0] = 0; 
                                classes[1] = 24; 
                            } else {
                                if (features[6] <= 329.19007873535156) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[43] <= 7.371002674102783) {
                        classes[0] = 24; 
                        classes[1] = 0; 
                    } else {
                        if (features[36] <= 959.7437744140625) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            if (features[34] <= 462435.9375) {
                                if (features[47] <= 5.392309904098511) {
                                    if (features[48] <= 11.539342880249023) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 13; 
                                }
                            } else {
                                if (features[42] <= 7.502568483352661) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[3] <= 0.7599353492259979) {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[14] <= 12.245765686035156) {
                                            classes[0] = 3; 
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
            } else {
                if (features[39] <= 14.433919429779053) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[17] <= -22.434324264526367) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[16] <= 18.551003456115723) {
                            if (features[32] <= 6535.7578125) {
                                if (features[16] <= 0.4643455743789673) {
                                    if (features[31] <= 0.0005559407291002572) {
                                        if (features[21] <= -1.8781551122665405) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[13] <= 190.58766174316406) {
                                            if (features[33] <= 16258.33544921875) {
                                                classes[0] = 0; 
                                                classes[1] = 47; 
                                            } else {
                                                if (features[33] <= 17592.095703125) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[35] <= 0.0030388799495995045) {
                                                        if (features[27] <= 1626.1676483154297) {
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
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 117; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 28.337470054626465) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[49] <= 0.6395847797393799) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[29] <= 0.004863582318648696) {
                                                if (features[37] <= 0.004947317065671086) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                if (features[32] <= 246.71436309814453) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[41] <= 48.06174850463867) {
                                                        classes[0] = 0; 
                                                        classes[1] = 49; 
                                                    } else {
                                                        if (features[36] <= 1658.6549072265625) {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 5; 
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[28] <= 240868130816.0) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[51] <= 6.643158912658691) {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                    } else {
                                        if (features[9] <= 0.6772567331790924) {
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
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[48] <= 16.415748596191406) {
            if (features[22] <= 6.326858758926392) {
                if (features[46] <= 5.245124578475952) {
                    if (features[16] <= -5.228740453720093) {
                        if (features[20] <= -2.3678608536720276) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[31] <= 0.00017396541079506278) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[28] <= 2042475520.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[12] <= 394.75) {
                                    if (features[23] <= 5.298896789550781) {
                                        if (features[13] <= 218.72379302978516) {
                                            if (features[1] <= 5.986147165298462) {
                                                if (features[22] <= 1.271621823310852) {
                                                    classes[0] = 12; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            } else {
                                                if (features[51] <= 5.518305063247681) {
                                                    if (features[18] <= 9.636067867279053) {
                                                        classes[0] = 435; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[18] <= 9.717836856842041) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 7; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[36] <= 7003.615234375) {
                                                        if (features[42] <= 24.87168312072754) {
                                                            classes[0] = 18; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        if (features[28] <= 22717419520.0) {
                                                            classes[0] = 0; 
                                                            classes[1] = 3; 
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (features[28] <= 66092296192.0) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 9; 
                                                classes[1] = 0; 
                                            }
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
                    }
                } else {
                    if (features[44] <= 18.11404037475586) {
                        if (features[13] <= 204.4862823486328) {
                            if (features[0] <= 2208.3441772460938) {
                                if (features[14] <= 46.5447301864624) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[51] <= 3.8600850105285645) {
                                    if (features[5] <= 0.4519556313753128) {
                                        if (features[19] <= -6.375398635864258) {
                                            if (features[13] <= 194.1166229248047) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[41] <= 11.25895881652832) {
                                                if (features[18] <= 2.3426284790039062) {
                                                    classes[0] = 23; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[2] <= 582502.8125) {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 125; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[7] <= 431.93707275390625) {
                                        if (features[22] <= -2.3638116121292114) {
                                            if (features[10] <= 167.194580078125) {
                                                if (features[2] <= 926658.59375) {
                                                    classes[0] = 0; 
                                                    classes[1] = 8; 
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 8; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[9] <= 0.6979510486125946) {
                                                if (features[51] <= 16.416865348815918) {
                                                    classes[0] = 43; 
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
                                        if (features[43] <= 3.2590432167053223) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[23] <= -0.24667499121278524) {
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
                        } else {
                            if (features[5] <= 0.37631113827228546) {
                                if (features[0] <= 9100.8701171875) {
                                    if (features[46] <= 8.901109218597412) {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[12] <= 350.0416717529297) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[13] <= 164.28009796142578) {
                            if (features[16] <= -8.867080688476562) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[39] <= 249.66273498535156) {
                                    if (features[11] <= 0.18537499755620956) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    if (features[44] <= 18.58434772491455) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 28; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[50] <= 9.032768249511719) {
                                if (features[8] <= 2301.3880615234375) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                } else {
                                    if (features[41] <= 23.366825103759766) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
            }
        } else {
            if (features[1] <= 20.217719078063965) {
                if (features[31] <= 0.0014124143635854125) {
                    if (features[47] <= 35.11902046203613) {
                        if (features[45] <= 11.330917358398438) {
                            classes[0] = 2; 
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
                    if (features[43] <= 9.193455934524536) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[3] <= 0.6147930026054382) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[15] <= -12.27770471572876) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[13] <= 175.2551727294922) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 35; 
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

int RFC_inst2_4::predict_8(float features[]) {
    int classes[2];
    
    if (features[48] <= 10.144285202026367) {
        if (features[19] <= -2.988720655441284) {
            if (features[6] <= 233.92184448242188) {
                if (features[21] <= 3.538251519203186) {
                    if (features[15] <= -8.845519065856934) {
                        if (features[2] <= 453538.4375) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[37] <= 0.014072609134018421) {
                            if (features[19] <= -3.0058735609054565) {
                                if (features[46] <= 1.096210777759552) {
                                    if (features[47] <= 3.4994996786117554) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 59; 
                                    classes[1] = 0; 
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
                    if (features[0] <= 6188.125244140625) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[15] <= 0.3436439484357834) {
                    if (features[25] <= 1.9083241820335388) {
                        if (features[43] <= 2.1915581822395325) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[19] <= -5.139760971069336) {
                                if (features[29] <= 0.15572987496852875) {
                                    classes[0] = 0; 
                                    classes[1] = 44; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[28] <= 45872609280.0) {
                                    if (features[33] <= 16604.6767578125) {
                                        if (features[50] <= 7.6471943855285645) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    if (features[41] <= 11.741732597351074) {
                                        if (features[37] <= 0.006415566196665168) {
                                            if (features[0] <= 5769.430419921875) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 11; 
                                            }
                                        } else {
                                            classes[0] = 2; 
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
                        if (features[3] <= 0.6924477219581604) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[17] <= 1.7543764412403107) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[25] <= -2.9111523628234863) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[38] <= 11235.1904296875) {
                            if (features[19] <= -3.083211898803711) {
                                if (features[10] <= 62.532005310058594) {
                                    if (features[48] <= 2.3529796600341797) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 32; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[24] <= -0.6118651404976845) {
                                classes[0] = 2; 
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
            if (features[14] <= 16.24724769592285) {
                if (features[23] <= 3.801958680152893) {
                    if (features[24] <= -1.6265790462493896) {
                        if (features[18] <= 3.5893949270248413) {
                            if (features[31] <= 0.00043169908167328686) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[35] <= 0.005779871018603444) {
                                    if (features[31] <= 0.0041422361973673105) {
                                        classes[0] = 0; 
                                        classes[1] = 17; 
                                    } else {
                                        if (features[44] <= 10.298762798309326) {
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
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[22] <= 2.686366558074951) {
                            if (features[21] <= 2.4248640537261963) {
                                if (features[25] <= 0.2886870205402374) {
                                    if (features[4] <= 151.23102569580078) {
                                        classes[0] = 37; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[16] <= 11.184665560722351) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 78.78147888183594) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        } else {
                            if (features[49] <= 5.010006427764893) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 24; 
                }
            } else {
                if (features[1] <= 6.440629959106445) {
                    if (features[47] <= 7.6335060596466064) {
                        if (features[12] <= 215.375) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            if (features[44] <= 3.367991805076599) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            } else {
                                if (features[37] <= 0.004656106932088733) {
                                    if (features[25] <= -0.6182204484939575) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                } else {
                    if (features[49] <= 7.287567138671875) {
                        if (features[47] <= 5.508942604064941) {
                            if (features[22] <= 5.240665912628174) {
                                if (features[41] <= 1.9195011854171753) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[49] <= 4.715749502182007) {
                                        if (features[19] <= 6.3018293380737305) {
                                            if (features[43] <= 2.2905129194259644) {
                                                if (features[44] <= 7.815823078155518) {
                                                    classes[0] = 41; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[6] <= 186.67845153808594) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 384; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[33] <= 4882.227783203125) {
                                            if (features[19] <= -1.7908391952514648) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 30; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[9] <= 0.5596307814121246) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        } else {
                            if (features[48] <= 9.557699203491211) {
                                if (features[39] <= 91.72724914550781) {
                                    if (features[16] <= 3.7130974531173706) {
                                        if (features[18] <= -0.9685511291027069) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            if (features[9] <= 0.6117226481437683) {
                                                if (features[6] <= 246.62325286865234) {
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
                                        }
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[38] <= 9382.1630859375) {
                                        if (features[10] <= 299.2287902832031) {
                                            if (features[14] <= 50.97146987915039) {
                                                classes[0] = 63; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[48] <= 6.527776718139648) {
                                                    classes[0] = 10; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            }
                                        } else {
                                            if (features[42] <= 18.566434860229492) {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    } else {
                                        if (features[38] <= 11052.06591796875) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[4] <= 28.60617160797119) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 10; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        if (features[18] <= 5.913769483566284) {
                            if (features[32] <= 795.3060302734375) {
                                if (features[26] <= 706167.40625) {
                                    if (features[41] <= 18.6728777885437) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 24; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[0] <= 7497.676513671875) {
                                    if (features[49] <= 16.294485092163086) {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[30] <= 1504.8403930664062) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    }
                                }
                            }
                        } else {
                            if (features[1] <= 12.88168478012085) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[2] <= 610196.0625) {
            if (features[22] <= 6.271893501281738) {
                if (features[15] <= 11.290585041046143) {
                    if (features[5] <= 0.2011677846312523) {
                        if (features[24] <= -0.25725792348384857) {
                            if (features[41] <= 77.22444534301758) {
                                if (features[28] <= 35569528832.0) {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                } else {
                                    if (features[4] <= 57.22517204284668) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[6] <= 169.0277328491211) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 0.2927083373069763) {
                                if (features[17] <= -12.290730476379395) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 22; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[35] <= 0.0064947393257170916) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 19; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[16] <= 4.620315670967102) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
            }
        } else {
            if (features[7] <= 117.34988403320312) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[3] <= 0.6522104442119598) {
                    classes[0] = 0; 
                    classes[1] = 52; 
                } else {
                    if (features[6] <= 249.04678344726562) {
                        if (features[47] <= 17.447848320007324) {
                            if (features[28] <= 39739527168.0) {
                                if (features[46] <= 15.683255195617676) {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[24] <= -2.756899356842041) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 18; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[32] <= 341.4374008178711) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[15] <= -10.030309677124023) {
                                    if (features[41] <= 44.83645153045654) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 15; 
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 0.6661606729030609) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[50] <= 1.983945071697235) {
                                if (features[19] <= -5.518584251403809) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[42] <= 50.435874938964844) {
                                    if (features[27] <= 110449.9453125) {
                                        if (features[7] <= 142.73270416259766) {
                                            if (features[13] <= 195.3596420288086) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 12; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 80; 
                                        }
                                    } else {
                                        if (features[28] <= 250381926400.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[29] <= 0.025989564135670662) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[32] <= 2365.1912841796875) {
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

int RFC_inst2_4::predict_9(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.23195835202932358) {
        if (features[31] <= 0.00016150987357832491) {
            if (features[22] <= -2.761481285095215) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
            }
        } else {
            if (features[21] <= 7.192195653915405) {
                if (features[45] <= 33.78738975524902) {
                    if (features[30] <= 0.333911269903183) {
                        if (features[19] <= -4.702480673789978) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[7] <= 182.829345703125) {
                                if (features[10] <= 66.35591316223145) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                if (features[42] <= 2.04961359500885) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 21; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[49] <= 17.234800338745117) {
                            if (features[7] <= 733.8471984863281) {
                                if (features[48] <= 7.506978511810303) {
                                    if (features[43] <= 25.390987396240234) {
                                        classes[0] = 353; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[31] <= 0.001754226628690958) {
                                            if (features[26] <= 2610902.875) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[11] <= 0.20762500166893005) {
                                                classes[0] = 22; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[6] <= 197.57164001464844) {
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
                                    if (features[45] <= 4.6402623653411865) {
                                        if (features[41] <= 34.772891998291016) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[49] <= 1.704135775566101) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[38] <= 727.2361145019531) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[32] <= 2835.580322265625) {
                                                    if (features[12] <= 285.3333435058594) {
                                                        classes[0] = 53; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[49] <= 12.452606678009033) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[19] <= 0.4313168078660965) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[35] <= 0.002275479258969426) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[25] <= -0.5176156610250473) {
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
                    if (features[13] <= 154.12958526611328) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    } else {
        if (features[48] <= 9.799490451812744) {
            if (features[12] <= 304.4166717529297) {
                if (features[42] <= 23.66896152496338) {
                    if (features[31] <= 0.00030986577621661127) {
                        if (features[36] <= 1539.9279174804688) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[16] <= -2.6253647804260254) {
                            if (features[34] <= 452414.171875) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                if (features[2] <= 743258.9375) {
                                    if (features[25] <= 0.550687849521637) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[20] <= -3.138783097267151) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[46] <= 8.619546890258789) {
                                if (features[21] <= 3.2100366353988647) {
                                    if (features[9] <= 0.5388208627700806) {
                                        if (features[3] <= 0.8987909555435181) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 182; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[6] <= 211.54933166503906) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            } else {
                                if (features[44] <= 4.622177600860596) {
                                    if (features[45] <= 3.2902106046676636) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                } else {
                                    if (features[24] <= 2.9337596893310547) {
                                        if (features[9] <= 0.5976165533065796) {
                                            if (features[8] <= 6248.2388916015625) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 18; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[47] <= 10.566010475158691) {
                        if (features[33] <= 9098.411865234375) {
                            if (features[9] <= 0.6371716558933258) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            } else {
                if (features[16] <= -0.9290552139282227) {
                    if (features[33] <= 4599.199462890625) {
                        if (features[23] <= 1.1719084084033966) {
                            if (features[0] <= 4565.2327880859375) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[25] <= -2.7785046100616455) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[42] <= 33.42807960510254) {
                                        if (features[43] <= 34.165045738220215) {
                                            if (features[44] <= 12.355737209320068) {
                                                classes[0] = 22; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[49] <= 2.9737725257873535) {
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
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 14; 
                        }
                    } else {
                        if (features[4] <= 37.68593215942383) {
                            if (features[27] <= 213.6893081665039) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[32] <= 5529.9892578125) {
                                if (features[11] <= 0.2820416986942291) {
                                    if (features[28] <= 23771765760.0) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[30] <= 1972.0509643554688) {
                                        classes[0] = 0; 
                                        classes[1] = 52; 
                                    } else {
                                        if (features[35] <= 0.000531994694028981) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[37] <= 0.015933883376419544) {
                                                classes[0] = 0; 
                                                classes[1] = 13; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[6] <= 417.753662109375) {
                        if (features[18] <= -7.000169277191162) {
                            if (features[43] <= 24.92643165588379) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[45] <= 27.153820037841797) {
                                if (features[13] <= 197.98340606689453) {
                                    if (features[36] <= 84.80904769897461) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[21] <= 3.388921618461609) {
                                            if (features[9] <= 0.6255776584148407) {
                                                if (features[16] <= 1.6923083662986755) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    classes[0] = 8; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[18] <= 3.406914710998535) {
                                                    classes[0] = 69; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[2] <= 613466.53125) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        if (features[19] <= -3.9466264247894287) {
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
                                            if (features[13] <= 176.6492919921875) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[8] <= 2614.9600830078125) {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                    } else {
                                        if (features[39] <= 79.51638412475586) {
                                            if (features[2] <= 1187423.5) {
                                                if (features[1] <= 17.494025707244873) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[25] <= 2.210660696029663) {
                                                    if (features[16] <= 0.3278173953294754) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 27; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        } else {
                                            if (features[30] <= 1971.4659729003906) {
                                                if (features[50] <= 1.9084660410881042) {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 7; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[27] <= 7771.506591796875) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[19] <= 3.166365385055542) {
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
            if (features[40] <= 10.146093368530273) {
                classes[0] = 5; 
                classes[1] = 0; 
            } else {
                if (features[17] <= -23.34998893737793) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[33] <= 1256.4335632324219) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 0.6693434715270996) {
                            if (features[30] <= 0.009849936468526721) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[21] <= -6.794539451599121) {
                                    if (features[3] <= 0.7594349086284637) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[51] <= 29.082270622253418) {
                                        if (features[40] <= 130.13260650634766) {
                                            if (features[47] <= 2.6380897760391235) {
                                                if (features[0] <= 7826.266845703125) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 157; 
                                            }
                                        } else {
                                            if (features[31] <= 0.0017146416357718408) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[44] <= 80.066650390625) {
                                                    classes[0] = 0; 
                                                    classes[1] = 15; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[42] <= 43.38652229309082) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            if (features[5] <= 0.25552109628915787) {
                                                classes[0] = 2; 
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
                            if (features[28] <= 61193535488.0) {
                                if (features[0] <= 6330.811767578125) {
                                    if (features[21] <= -2.175204277038574) {
                                        if (features[33] <= 49637.78515625) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 20; 
                                    }
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[14] <= 8.202446460723877) {
                                    if (features[46] <= 105.99584007263184) {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
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

int RFC_inst2_4::predict_10(float features[]) {
    int classes[2];
    
    if (features[14] <= 16.36907958984375) {
        if (features[9] <= 0.7026403546333313) {
            if (features[48] <= 1.5083951354026794) {
                if (features[0] <= 8275.20654296875) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[44] <= 1.6881688833236694) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[40] <= 10.277048587799072) {
                    if (features[22] <= -5.003672301769257) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[17] <= -22.26893901824951) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[35] <= 0.02961988002061844) {
                            if (features[48] <= 13.800167560577393) {
                                if (features[15] <= -19.39022731781006) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[9] <= 0.624263346195221) {
                                        classes[0] = 0; 
                                        classes[1] = 51; 
                                    } else {
                                        if (features[24] <= 1.0773541927337646) {
                                            classes[0] = 0; 
                                            classes[1] = 24; 
                                        } else {
                                            if (features[5] <= 0.1896086409687996) {
                                                classes[0] = 0; 
                                                classes[1] = 6; 
                                            } else {
                                                if (features[6] <= 335.95094299316406) {
                                                    if (features[25] <= -1.7184221744537354) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 10; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[22] <= 1.1622031927108765) {
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
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 125; 
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[36] <= 56763.607421875) {
                if (features[9] <= 0.7531341314315796) {
                    if (features[20] <= 2.8519797325134277) {
                        if (features[6] <= 303.90899658203125) {
                            if (features[4] <= 81.3896312713623) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 23; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    }
                } else {
                    if (features[4] <= 199.9305648803711) {
                        if (features[14] <= 15.94307279586792) {
                            classes[0] = 34; 
                            classes[1] = 0; 
                        } else {
                            if (features[27] <= 262.6357078552246) {
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
                classes[0] = 0; 
                classes[1] = 6; 
            }
        }
    } else {
        if (features[50] <= 4.190051317214966) {
            if (features[21] <= 3.6827107667922974) {
                if (features[13] <= 164.49185180664062) {
                    if (features[34] <= 33211.90234375) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[30] <= 4238.1318359375) {
                            classes[0] = 290; 
                            classes[1] = 0; 
                        } else {
                            if (features[26] <= 773749.78125) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[29] <= 0.01742995483800769) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 17; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[16] <= -5.037750005722046) {
                        if (features[12] <= 323.7083282470703) {
                            if (features[14] <= 36.287832260131836) {
                                classes[0] = 0; 
                                classes[1] = 15; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[21] <= 0.7167608141899109) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[2] <= 505818.234375) {
                            if (features[46] <= 4.811089515686035) {
                                if (features[25] <= -0.35185177624225616) {
                                    if (features[25] <= -0.639902725815773) {
                                        if (features[30] <= 1506.7243347167969) {
                                            classes[0] = 6; 
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
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        } else {
                            if (features[45] <= 22.172127723693848) {
                                if (features[49] <= 4.715749502182007) {
                                    if (features[33] <= 651.1650238037109) {
                                        if (features[46] <= 3.331514596939087) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        if (features[3] <= 0.48659875988960266) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[22] <= 1.6153073906898499) {
                                                if (features[19] <= -2.766953945159912) {
                                                    if (features[33] <= 1967.9716796875) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 58; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 201; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[40] <= 20.462718963623047) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    classes[0] = 14; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (features[14] <= 22.066534996032715) {
                                        if (features[11] <= 0.3035833239555359) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[16] <= -2.7687106132507324) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 22; 
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
                }
            } else {
                if (features[22] <= -3.868512511253357) {
                    classes[0] = 0; 
                    classes[1] = 11; 
                } else {
                    if (features[31] <= 0.001759768056217581) {
                        if (features[12] <= 177.20833587646484) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[14] <= 21.565478324890137) {
                if (features[13] <= 195.07015991210938) {
                    if (features[44] <= 10.883372783660889) {
                        if (features[17] <= -5.71409797668457) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[3] <= 0.7682487964630127) {
                                classes[0] = 11; 
                                classes[1] = 0; 
                            } else {
                                if (features[46] <= 4.358744263648987) {
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
                        classes[1] = 7; 
                    }
                } else {
                    if (features[21] <= -2.8438509106636047) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[7] <= 111.95576858520508) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[38] <= 2467.88232421875) {
                                if (features[17] <= -2.516197144985199) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 30; 
                            }
                        }
                    }
                }
            } else {
                if (features[13] <= 204.42401885986328) {
                    if (features[20] <= 6.699784278869629) {
                        if (features[51] <= 7.271366596221924) {
                            if (features[41] <= 2.7923190593719482) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[21] <= -7.8418145179748535) {
                                    if (features[34] <= 571312.953125) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    if (features[19] <= -2.0951420068740845) {
                                        if (features[0] <= 5922.46240234375) {
                                            if (features[11] <= 0.1367083415389061) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 17; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[0] <= 7881.533935546875) {
                                                if (features[51] <= 2.7017757892608643) {
                                                    if (features[27] <= 857.5077667236328) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 7; 
                                                }
                                            } else {
                                                classes[0] = 8; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[34] <= 1328006.8125) {
                                            classes[0] = 86; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[16] <= 5.588541746139526) {
                                                classes[0] = 4; 
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
                            if (features[6] <= 233.30338287353516) {
                                if (features[30] <= 1825.2267456054688) {
                                    if (features[23] <= -1.3683668375015259) {
                                        if (features[24] <= -0.7505485862493515) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        classes[0] = 21; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[41] <= 40.1734733581543) {
                                        if (features[29] <= 0.07296040654182434) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[29] <= 0.04376520635560155) {
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
                                classes[1] = 8; 
                            }
                        }
                    } else {
                        if (features[23] <= -3.1605310440063477) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    }
                } else {
                    if (features[45] <= 5.773726940155029) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[42] <= 35.58922481536865) {
                            classes[0] = 0; 
                            classes[1] = 14; 
                        } else {
                            classes[0] = 2; 
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

float RFC_inst2_4::predict (float features[]) {
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

