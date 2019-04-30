#include "RFC_inst2_4.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_4::predict_0(float features[]) {
    int classes[2];
    
    if (features[44] <= 7.777851581573486) {
        if (features[50] <= 1.5364760160446167) {
            if (features[48] <= 4.929960489273071) {
                if (features[4] <= 133.77288055419922) {
                    if (features[11] <= 0.34937499463558197) {
                        if (features[6] <= 284.49732971191406) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[51] <= 2.522925019264221) {
                            classes[0] = 238; 
                            classes[1] = 0; 
                        } else {
                            if (features[17] <= -5.223573446273804) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[44] <= 2.9411749839782715) {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                }
            } else {
                if (features[24] <= -1.8852059841156006) {
                    if (features[26] <= 8702498.0) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 7; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[14] <= -0.9864945113658905) {
                classes[0] = 0; 
                classes[1] = 53; 
            } else {
                if (features[47] <= 3.8968963623046875) {
                    if (features[32] <= 542.7693481445312) {
                        classes[0] = 43; 
                        classes[1] = 0; 
                    } else {
                        if (features[17] <= -8.001146078109741) {
                            if (features[11] <= 0.4659164994955063) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[28] <= 83719778304.0) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[23] <= -4.8754284381866455) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 16; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[8] <= 2223.26513671875) {
            classes[0] = 10; 
            classes[1] = 0; 
        } else {
            if (features[35] <= 0.0005769999988842756) {
                if (features[49] <= 6.648396015167236) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 62; 
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
    
    if (features[38] <= 9539.013671875) {
        if (features[41] <= 8.014260292053223) {
            if (features[22] <= 0.40504899621009827) {
                if (features[50] <= 4.38284695148468) {
                    if (features[23] <= -0.27146299183368683) {
                        classes[0] = 278; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[24] <= -2.2665843963623047) {
                        classes[0] = 2; 
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
            if (features[20] <= 7.155770301818848) {
                if (features[13] <= 195.81863403320312) {
                    if (features[38] <= 8355.715087890625) {
                        classes[0] = 25; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[41] <= 11.156070232391357) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                }
            } else {
                if (features[39] <= 344.7540740966797) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[5] <= 0.1380475014448166) {
            if (features[9] <= 0.8163274824619293) {
                if (features[22] <= -2.1014615297317505) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                classes[0] = 26; 
                classes[1] = 0; 
            }
        } else {
            if (features[41] <= 2.8854684829711914) {
                if (features[18] <= 3.2030880451202393) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[12] <= 569.2500305175781) {
                    if (features[5] <= 0.1554045006632805) {
                        if (features[47] <= 6.940495491027832) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[11] <= 0.6767084896564484) {
                            if (features[21] <= 0.13936400413513184) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 29; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 74; 
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
    
    if (features[1] <= 10.444462299346924) {
        if (features[24] <= -3.3897645473480225) {
            if (features[26] <= 3216157.875) {
                if (features[1] <= 8.249470233917236) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[15] <= -0.8352615088224411) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                if (features[44] <= 3.2663145065307617) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    if (features[13] <= 170.54156494140625) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            }
        } else {
            if (features[9] <= 0.7645885050296783) {
                if (features[43] <= 6.886614084243774) {
                    if (features[39] <= 202.14904022216797) {
                        if (features[1] <= 3.312712073326111) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[36] <= 3859.0211181640625) {
                                classes[0] = 17; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[45] <= 13.192916870117188) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[8] <= 1890.772705078125) {
                        if (features[39] <= 337.26588439941406) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    }
                }
            } else {
                if (features[35] <= 0.0010480000055395067) {
                    if (features[22] <= -1.1869665384292603) {
                        classes[0] = 214; 
                        classes[1] = 0; 
                    } else {
                        if (features[20] <= 4.47899055480957) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    if (features[7] <= 400.02276611328125) {
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
        if (features[41] <= 5.123908042907715) {
            if (features[47] <= 1.30331552028656) {
                classes[0] = 37; 
                classes[1] = 0; 
            } else {
                if (features[4] <= 8.929661273956299) {
                    classes[0] = 5; 
                    classes[1] = 0; 
                } else {
                    if (features[19] <= 5.160696983337402) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                }
            }
        } else {
            if (features[17] <= -12.076828956604004) {
                if (features[13] <= 191.87262725830078) {
                    classes[0] = 10; 
                    classes[1] = 0; 
                } else {
                    if (features[41] <= 9.966046810150146) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            } else {
                if (features[19] <= 3.761886954307556) {
                    if (features[29] <= 0.0409614983946085) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[51] <= 1.030154973268509) {
                        if (features[6] <= 454.768798828125) {
                            if (features[8] <= 3396.5814208984375) {
                                classes[0] = 6; 
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
                        if (features[11] <= 0.41404199600219727) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[5] <= 0.14143550395965576) {
                                if (features[31] <= 0.0009455000108573586) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 94; 
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

int RFC_inst2_4::predict_3(float features[]) {
    int classes[2];
    
    if (features[31] <= 0.0008694999851286411) {
        if (features[50] <= 3.5269304513931274) {
            if (features[51] <= 2.3247900009155273) {
                if (features[41] <= 8.601387023925781) {
                    if (features[35] <= 0.00043250000453554094) {
                        classes[0] = 204; 
                        classes[1] = 0; 
                    } else {
                        if (features[6] <= 459.77406311035156) {
                            if (features[16] <= -11.007144927978516) {
                                if (features[23] <= -4.473867058753967) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 59; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[36] <= 3120.2628173828125) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[46] <= 7.2439305782318115) {
                    if (features[47] <= 3.666931986808777) {
                        if (features[42] <= 11.930014610290527) {
                            classes[0] = 16; 
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
                    if (features[49] <= 8.883384227752686) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[4] <= 8.662721157073975) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[10] <= 174.74542236328125) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[17] <= -12.51250410079956) {
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
        if (features[13] <= 189.77978515625) {
            if (features[21] <= 2.273637533187866) {
                classes[0] = 20; 
                classes[1] = 0; 
            } else {
                if (features[34] <= 1126750.1875) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[35] <= 0.0009169999975711107) {
                if (features[12] <= 582.9166564941406) {
                    if (features[45] <= 11.879985332489014) {
                        classes[0] = 9; 
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
                if (features[50] <= 0.6443930119276047) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 96; 
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
    
    if (features[38] <= 10613.232421875) {
        if (features[6] <= 450.34019470214844) {
            if (features[47] <= 3.8540974855422974) {
                if (features[5] <= 0.26788748800754547) {
                    if (features[25] <= 1.2079139947891235) {
                        if (features[27] <= 3.5886019468307495) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[33] <= 9408.275390625) {
                                if (features[21] <= 3.7346880435943604) {
                                    classes[0] = 240; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[9] <= 0.7652510106563568) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[51] <= 1.2830380201339722) {
                                    classes[0] = 39; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[9] <= 0.7887140214443207) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[29] <= 0.05439249984920025) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[14] <= 22.63900089263916) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[40] <= 26.87843894958496) {
                    if (features[36] <= 1033.4603881835938) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                } else {
                    classes[0] = 7; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 10; 
        }
    } else {
        if (features[5] <= 0.1318184956908226) {
            classes[0] = 15; 
            classes[1] = 0; 
        } else {
            if (features[45] <= 19.3035888671875) {
                if (features[51] <= 1.0062144994735718) {
                    if (features[33] <= 15495.50732421875) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[37] <= 0.03590900078415871) {
                        if (features[35] <= 0.0007415000000037253) {
                            if (features[34] <= 285883.59375) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 91; 
                        }
                    } else {
                        if (features[11] <= 0.5419585108757019) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[24] <= -2.7714099884033203) {
                    if (features[13] <= 183.12885284423828) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    classes[0] = 10; 
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

int RFC_inst2_4::predict_5(float features[]) {
    int classes[2];
    
    if (features[38] <= 10613.232421875) {
        if (features[44] <= 7.204218149185181) {
            if (features[9] <= 0.7736150026321411) {
                if (features[15] <= -2.9620375633239746) {
                    if (features[22] <= -4.161091327667236) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        if (features[16] <= -3.5326136350631714) {
                            if (features[49] <= 1.3018390238285065) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 23; 
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[49] <= 5.194758176803589) {
                        classes[0] = 22; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 0.21838050335645676) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[35] <= 0.0012679999927058816) {
                    if (features[20] <= 9.349130630493164) {
                        if (features[14] <= -1.9285654425621033) {
                            if (features[24] <= -2.602431535720825) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 248; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[5] <= 0.12892799824476242) {
                            classes[0] = 3; 
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
            if (features[2] <= 1078924.75) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 14; 
            }
        }
    } else {
        if (features[48] <= 6.168578386306763) {
            if (features[5] <= 0.1554045006632805) {
                if (features[13] <= 174.28060150146484) {
                    classes[0] = 20; 
                    classes[1] = 0; 
                } else {
                    if (features[44] <= 2.979509472846985) {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            } else {
                if (features[39] <= 1714.88818359375) {
                    if (features[17] <= -12.888114929199219) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[42] <= 2.2874820232391357) {
                            if (features[9] <= 0.7545564770698547) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 42; 
                        }
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[7] <= 388.147705078125) {
                if (features[2] <= 1049689.53125) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 59; 
                }
            } else {
                if (features[43] <= 6.117218971252441) {
                    classes[0] = 1; 
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

int RFC_inst2_4::predict_6(float features[]) {
    int classes[2];
    
    if (features[43] <= 4.5680811405181885) {
        if (features[5] <= 0.22010250389575958) {
            if (features[48] <= 8.380375862121582) {
                if (features[32] <= 1586.337158203125) {
                    classes[0] = 215; 
                    classes[1] = 0; 
                } else {
                    if (features[11] <= 0.5327500104904175) {
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
            if (features[31] <= 0.0004374999989522621) {
                classes[0] = 13; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
            }
        }
    } else {
        if (features[14] <= -2.2950669527053833) {
            if (features[16] <= -7.129849910736084) {
                classes[0] = 0; 
                classes[1] = 66; 
            } else {
                if (features[47] <= 0.7146910130977631) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
                }
            }
        } else {
            if (features[4] <= 24.451051712036133) {
                if (features[38] <= 9593.8203125) {
                    classes[0] = 54; 
                    classes[1] = 0; 
                } else {
                    if (features[6] <= 348.934326171875) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[28] <= 783434448896.0) {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[21] <= 2.811610460281372) {
                    if (features[5] <= 0.2063330039381981) {
                        if (features[38] <= 49429.06640625) {
                            if (features[24] <= -3.092157483100891) {
                                if (features[50] <= 6.667572021484375) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 28; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[42] <= 5.046940088272095) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    }
                } else {
                    if (features[32] <= 365.65098571777344) {
                        if (features[31] <= 0.0009155000152532011) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[23] <= -5.45442795753479) {
                            if (features[7] <= 382.7649841308594) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            if (features[2] <= 2192838.125) {
                                if (features[45] <= 2.7795130014419556) {
                                    if (features[18] <= 2.1329340636730194) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 27; 
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

int RFC_inst2_4::predict_7(float features[]) {
    int classes[2];
    
    if (features[14] <= -1.168248474597931) {
        if (features[51] <= 1.0496815145015717) {
            if (features[35] <= 0.0009000000136438757) {
                classes[0] = 6; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 5; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 97; 
        }
    } else {
        if (features[31] <= 0.0008694999851286411) {
            if (features[20] <= 1.9781215190887451) {
                if (features[38] <= 4552.965270996094) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[21] <= 5.225980997085571) {
                    if (features[23] <= -0.7250159978866577) {
                        if (features[46] <= 14.353518962860107) {
                            classes[0] = 293; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[31] <= 0.0001720000036584679) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[39] <= 144.20955657958984) {
                if (features[25] <= 1.834271490573883) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[43] <= 5.088432550430298) {
                    classes[0] = 18; 
                    classes[1] = 0; 
                } else {
                    if (features[11] <= 0.4790415018796921) {
                        if (features[48] <= 4.79925799369812) {
                            if (features[11] <= 0.398499995470047) {
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
                        if (features[20] <= 6.552840709686279) {
                            if (features[37] <= 0.010698999743908644) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                if (features[5] <= 0.11930999904870987) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[51] <= 1.1201300024986267) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 15; 
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

int RFC_inst2_4::predict_8(float features[]) {
    int classes[2];
    
    if (features[27] <= 470.7026824951172) {
        if (features[18] <= 3.099492073059082) {
            if (features[14] <= -2.649881958961487) {
                if (features[49] <= 2.569260001182556) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[20] <= 4.642366528511047) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            } else {
                if (features[19] <= 8.789173126220703) {
                    if (features[45] <= 16.858433723449707) {
                        if (features[21] <= 3.847892999649048) {
                            if (features[30] <= 3776.8577880859375) {
                                classes[0] = 219; 
                                classes[1] = 0; 
                            } else {
                                if (features[39] <= 343.58563232421875) {
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
                        if (features[46] <= 13.222909450531006) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[20] <= 3.4416229724884033) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[9] <= 0.7497275173664093) {
                            if (features[9] <= 0.6850219964981079) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            }
                        } else {
                            if (features[49] <= 2.5742260217666626) {
                                classes[0] = 36; 
                                classes[1] = 0; 
                            } else {
                                if (features[22] <= -1.4721845388412476) {
                                    classes[0] = 5; 
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
            if (features[6] <= 426.8943328857422) {
                if (features[13] <= 204.68296813964844) {
                    if (features[31] <= 0.0014759999758098274) {
                        if (features[25] <= 0.21562949568033218) {
                            classes[0] = 24; 
                            classes[1] = 0; 
                        } else {
                            if (features[6] <= 272.43963623046875) {
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
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 20; 
            }
        }
    } else {
        if (features[50] <= 1.69896799325943) {
            if (features[9] <= 0.7495029866695404) {
                classes[0] = 16; 
                classes[1] = 0; 
            } else {
                if (features[31] <= 0.0015424999874085188) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[44] <= 5.894782066345215) {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        } else {
            if (features[13] <= 184.57142639160156) {
                classes[0] = 4; 
                classes[1] = 0; 
            } else {
                if (features[17] <= -12.63820505142212) {
                    if (features[41] <= 11.298415184020996) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 85; 
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
    
    if (features[48] <= 3.924989938735962) {
        if (features[9] <= 0.7767814993858337) {
            if (features[33] <= 6619.473876953125) {
                if (features[12] <= 617.7083435058594) {
                    if (features[30] <= 0.6314075142145157) {
                        if (features[7] <= 567.9575500488281) {
                            if (features[38] <= 12124.35693359375) {
                                classes[0] = 36; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[23] <= -7.226675033569336) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        if (features[7] <= 367.28648376464844) {
                            classes[0] = 1; 
                            classes[1] = 0; 
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
                if (features[19] <= 12.324255466461182) {
                    classes[0] = 0; 
                    classes[1] = 20; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[31] <= 0.0016170000308193266) {
                if (features[14] <= -2.8815635442733765) {
                    if (features[26] <= 698901.359375) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[35] <= 0.00043400000140536577) {
                        classes[0] = 203; 
                        classes[1] = 0; 
                    } else {
                        if (features[17] <= -8.2429518699646) {
                            if (features[0] <= 7649.681640625) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 37; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[41] <= 9.697812795639038) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        }
    } else {
        if (features[35] <= 0.0008779999916441739) {
            if (features[45] <= 16.90140962600708) {
                if (features[20] <= 9.369613647460938) {
                    if (features[48] <= 5.713123083114624) {
                        if (features[25] <= -0.5253185033798218) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            if (features[47] <= 4.216029047966003) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[26] <= 1910225.9375) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                classes[0] = 17; 
                classes[1] = 0; 
            }
        } else {
            if (features[21] <= 1.008003979921341) {
                if (features[8] <= 2845.5223999023438) {
                    classes[0] = 14; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[11] <= 0.27866649627685547) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[33] <= 28978.7705078125) {
                        classes[0] = 0; 
                        classes[1] = 84; 
                    } else {
                        classes[0] = 1; 
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

int RFC_inst2_4::predict_10(float features[]) {
    int classes[2];
    
    if (features[14] <= -1.161968469619751) {
        if (features[51] <= 1.0600099861621857) {
            if (features[22] <= -0.09177550673484802) {
                if (features[49] <= 2.569260001182556) {
                    classes[0] = 10; 
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
            if (features[38] <= 6108.2431640625) {
                if (features[40] <= 7.220376253128052) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 95; 
            }
        }
    } else {
        if (features[49] <= 3.685686469078064) {
            if (features[6] <= 376.1143493652344) {
                if (features[43] <= 4.132655024528503) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    if (features[47] <= 1.743992030620575) {
                        if (features[42] <= 3.0142040252685547) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[51] <= 2.313359022140503) {
                    classes[0] = 265; 
                    classes[1] = 0; 
                } else {
                    if (features[47] <= 1.8655374646186829) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        if (features[17] <= -10.756977081298828) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 0.47566699981689453) {
                if (features[43] <= 3.3025364875793457) {
                    if (features[9] <= 0.6468020081520081) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[8] <= 2369.830078125) {
                        classes[0] = 25; 
                        classes[1] = 0; 
                    } else {
                        if (features[49] <= 15.419823408126831) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[43] <= 2.7692259550094604) {
                    if (features[32] <= 661.0131225585938) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[35] <= 0.0003510000096866861) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 39; 
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

