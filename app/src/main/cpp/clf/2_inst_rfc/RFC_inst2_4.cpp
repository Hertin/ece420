#include "RFC_inst2_4.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_4::predict_0(float features[]) {
    int classes[2];
    
    if (features[10] <= 174.2843780517578) {
        if (features[40] <= 7.407774448394775) {
            classes[0] = 6; 
            classes[1] = 0; 
        } else {
            if (features[21] <= 0.13300198316574097) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 27; 
            }
        }
    } else {
        if (features[40] <= 16.866474151611328) {
            if (features[41] <= 13.741636276245117) {
                classes[0] = 59; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[2] <= 1208562.375) {
                if (features[38] <= 15524.71923828125) {
                    classes[0] = 10; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[51] <= 0.6622195094823837) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 11; 
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
    
    if (features[47] <= 3.165555000305176) {
        if (features[27] <= 396.1335144042969) {
            if (features[43] <= 8.132593631744385) {
                classes[0] = 60; 
                classes[1] = 0; 
            } else {
                if (features[8] <= 2687.5079345703125) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    if (features[28] <= 246861717504.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        } else {
            if (features[26] <= 7685870.75) {
                if (features[42] <= 2.5003875494003296) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 12; 
                }
            } else {
                classes[0] = 6; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[8] <= 2090.4061279296875) {
            classes[0] = 5; 
            classes[1] = 0; 
        } else {
            if (features[7] <= 197.965576171875) {
                if (features[13] <= 203.29557037353516) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 24; 
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
    
    if (features[14] <= -2.4868885278701782) {
        if (features[50] <= 0.8525845110416412) {
            classes[0] = 5; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 22; 
        }
    } else {
        if (features[23] <= -1.315011441707611) {
            if (features[48] <= 4.958487510681152) {
                if (features[51] <= 1.9602974653244019) {
                    classes[0] = 65; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[51] <= 1.864864468574524) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            }
        } else {
            if (features[5] <= 0.15387850254774094) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                if (features[21] <= 1.0584325194358826) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 14; 
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
    
    if (features[14] <= -2.4946130514144897) {
        if (features[16] <= -7.527411937713623) {
            classes[0] = 0; 
            classes[1] = 24; 
        } else {
            classes[0] = 4; 
            classes[1] = 0; 
        }
    } else {
        if (features[9] <= 0.72536501288414) {
            if (features[21] <= 2.605959951877594) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 14; 
            }
        } else {
            if (features[34] <= 1338989.0) {
                classes[0] = 71; 
                classes[1] = 0; 
            } else {
                if (features[34] <= 1871022.3125) {
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

int RFC_inst2_4::predict_4(float features[]) {
    int classes[2];
    
    if (features[44] <= 6.199604511260986) {
        if (features[11] <= 0.6975419819355011) {
            if (features[9] <= 0.7789680063724518) {
                if (features[26] <= 4646666.5) {
                    if (features[19] <= 8.951414585113525) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        if (features[33] <= 2394.2716674804688) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[21] <= 3.039713501930237) {
                    classes[0] = 46; 
                    classes[1] = 0; 
                } else {
                    if (features[9] <= 0.8186030089855194) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[47] <= 1.5847175121307373) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[15] <= 0.06518350541591644) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[39] <= 471.17356872558594) {
            if (features[0] <= 6233.89013671875) {
                if (features[31] <= 0.0010144999832846224) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 30; 
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

int RFC_inst2_4::predict_5(float features[]) {
    int classes[2];
    
    if (features[27] <= 388.4456481933594) {
        if (features[49] <= 4.357053518295288) {
            classes[0] = 71; 
            classes[1] = 0; 
        } else {
            if (features[13] <= 186.83045959472656) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                if (features[50] <= 2.0291555523872375) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            }
        }
    } else {
        if (features[11] <= 0.34495849907398224) {
            classes[0] = 6; 
            classes[1] = 0; 
        } else {
            if (features[9] <= 0.8153354823589325) {
                if (features[8] <= 3557.806640625) {
                    classes[0] = 0; 
                    classes[1] = 25; 
                } else {
                    if (features[23] <= -5.09531044960022) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
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

int RFC_inst2_4::predict_6(float features[]) {
    int classes[2];
    
    if (features[40] <= 19.672731399536133) {
        if (features[25] <= -0.021267999429255724) {
            classes[0] = 68; 
            classes[1] = 0; 
        } else {
            if (features[3] <= 0.7925574779510498) {
                if (features[36] <= 8084.977783203125) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[41] <= 3.9528980255126953) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[39] <= 325.2076721191406) {
            if (features[35] <= 0.0007210000185295939) {
                if (features[21] <= 2.871600568294525) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 30; 
            }
        } else {
            if (features[36] <= 13514.97021484375) {
                classes[0] = 7; 
                classes[1] = 0; 
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

int RFC_inst2_4::predict_7(float features[]) {
    int classes[2];
    
    if (features[44] <= 6.764376640319824) {
        if (features[50] <= 2.1436734795570374) {
            if (features[36] <= 7812.97998046875) {
                classes[0] = 70; 
                classes[1] = 0; 
            } else {
                if (features[4] <= 32.646360874176025) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[46] <= 5.024770975112915) {
                if (features[1] <= 8.869776248931885) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[0] <= 6182.751708984375) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 13; 
                }
            }
        }
    } else {
        if (features[16] <= -4.494018077850342) {
            classes[0] = 0; 
            classes[1] = 22; 
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

int RFC_inst2_4::predict_8(float features[]) {
    int classes[2];
    
    if (features[1] <= 12.736438751220703) {
        if (features[51] <= 1.756893515586853) {
            if (features[25] <= 1.2060070037841797) {
                classes[0] = 78; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[0] <= 8610.287109375) {
                if (features[12] <= 345.125) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[18] <= 0.42953099496662617) {
            classes[0] = 7; 
            classes[1] = 0; 
        } else {
            if (features[49] <= 4.066774964332581) {
                if (features[5] <= 0.17937199771404266) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 17; 
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
    
    if (features[51] <= 1.756893515586853) {
        if (features[23] <= -0.1833925098180771) {
            classes[0] = 72; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 2; 
        }
    } else {
        if (features[34] <= 416544.21875) {
            if (features[38] <= 6212.576416015625) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[38] <= 10834.94482421875) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[13] <= 170.7154083251953) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 32; 
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
    
    if (features[48] <= 3.626430034637451) {
        if (features[11] <= 0.7238750159740448) {
            if (features[25] <= 1.2117124795913696) {
                if (features[21] <= 3.078832507133484) {
                    classes[0] = 70; 
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
            if (features[14] <= -1.0294199585914612) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[49] <= 3.959030508995056) {
            if (features[45] <= 8.022791147232056) {
                classes[0] = 8; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[8] <= 2517.666015625) {
                if (features[42] <= 10.18326473236084) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 28; 
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
    return class_idx == 1 ? (class_val/11.) : 1-(class_val/11.);

}

