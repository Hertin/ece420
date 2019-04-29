#include "RFC_inst2_3.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int RFC_inst2_3::predict_0(float features[]) {
    int classes[2];
    
    if (features[50] <= 2.181984066963196) {
        if (features[47] <= 3.2455626726150513) {
            if (features[33] <= 10650.587890625) {
                if (features[32] <= 299.9450988769531) {
                    if (features[22] <= -2.258299946784973) {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    } else {
                        if (features[11] <= 0.08699999749660492) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[48] <= 4.082615256309509) {
                                classes[0] = 0; 
                                classes[1] = 19; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[6] <= 258.77943420410156) {
                        if (features[48] <= 4.654557704925537) {
                            if (features[34] <= 1033811.46875) {
                                if (features[25] <= -0.5407516360282898) {
                                    if (features[34] <= 583565.3125) {
                                        if (features[20] <= -0.8231716454029083) {
                                            if (features[45] <= 6.1788170337677) {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 30; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[40] <= 47.84138488769531) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[20] <= 1.919550895690918) {
                                        if (features[4] <= 64.40922737121582) {
                                            if (features[8] <= 2888.3787841796875) {
                                                if (features[17] <= 7.007600784301758) {
                                                    classes[0] = 0; 
                                                    classes[1] = 11; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[17] <= 1.045188456773758) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 10; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[23] <= 1.853489339351654) {
                                            classes[0] = 18; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            } else {
                                if (features[5] <= 0.18040260672569275) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            }
                        } else {
                            if (features[49] <= 4.828437447547913) {
                                if (features[6] <= 159.66896057128906) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[40] <= 121.6497688293457) {
                            if (features[1] <= 24.49269962310791) {
                                classes[0] = 53; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= 25.80119514465332) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 18; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[21] <= 0.036655835807323456) {
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
                if (features[32] <= 264.9272918701172) {
                    if (features[30] <= 0.02707225945778191) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 115; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[51] <= 1.7410578727722168) {
                if (features[40] <= 219.70943450927734) {
                    if (features[22] <= 0.14375581219792366) {
                        if (features[30] <= 0.008565036347135901) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 60; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[15] <= 6.804322004318237) {
                            if (features[40] <= 25.6868257522583) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                if (features[0] <= 5918.618896484375) {
                                    if (features[21] <= -2.5153534412384033) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[14] <= 44.796377182006836) {
                                if (features[17] <= 1.790212333202362) {
                                    if (features[34] <= 123826.07421875) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 20; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[30] <= 322.08290100097656) {
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
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[50] <= 1.8739638328552246) {
                    if (features[50] <= 1.7001685500144958) {
                        if (features[30] <= 102.62521743774414) {
                            if (features[36] <= 17438.44677734375) {
                                if (features[35] <= 0.0061359466053545475) {
                                    classes[0] = 0; 
                                    classes[1] = 23; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[51] <= 1.8359713554382324) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            } else {
                                if (features[27] <= 9150.33984375) {
                                    if (features[49] <= 1.0204266011714935) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[11] <= 0.4464583694934845) {
                                            if (features[37] <= 0.00302599323913455) {
                                                if (features[13] <= 145.6433563232422) {
                                                    classes[0] = 8; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[30] <= 676.9393348693848) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 4; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 26; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[24] <= 0.4160977602005005) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
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
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                } else {
                    if (features[21] <= -2.8957728147506714) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[14] <= 59.50323295593262) {
                            classes[0] = 20; 
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
        if (features[37] <= 0.0031472218688577414) {
            if (features[37] <= 0.00028427434153854847) {
                if (features[18] <= -4.538193464279175) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[39] <= 60.972822189331055) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 23; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[11] <= 0.5253750383853912) {
                    if (features[22] <= 0.14606321975588799) {
                        if (features[38] <= 795.1770629882812) {
                            if (features[26] <= 13622422.25) {
                                if (features[2] <= 227968.9375) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[26] <= 480869.203125) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 19; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[21] <= 0.3238089084625244) {
                                if (features[16] <= -12.65712022781372) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[14] <= 38.98863983154297) {
                                        if (features[12] <= 209.83333587646484) {
                                            if (features[27] <= 591.8714141845703) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 10; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[12] <= 254.125) {
                                                if (features[0] <= 10860.939453125) {
                                                    classes[0] = 0; 
                                                    classes[1] = 18; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[51] <= 0.8932975828647614) {
                                                    if (features[17] <= 0.5042969137430191) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 6; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[24] <= -0.6531840562820435) {
                                                        if (features[14] <= 27.725353240966797) {
                                                            if (features[30] <= 4394.7720947265625) {
                                                                classes[0] = 5; 
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
                                                        if (features[17] <= -5.10504674911499) {
                                                            if (features[50] <= 11.505009651184082) {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
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
                                        }
                                    } else {
                                        if (features[6] <= 112.59198379516602) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 20; 
                                        }
                                    }
                                }
                            } else {
                                if (features[16] <= -3.2439063787460327) {
                                    if (features[3] <= 0.5809166133403778) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    }
                                } else {
                                    if (features[40] <= 42.91488265991211) {
                                        if (features[19] <= -3.4005497694015503) {
                                            if (features[19] <= -3.931810736656189) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[24] <= -3.2667245864868164) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[17] <= 4.902053356170654) {
                                if (features[44] <= 57.079721450805664) {
                                    if (features[51] <= 11.245097637176514) {
                                        if (features[2] <= 187148.4609375) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[7] <= 136.94249725341797) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[29] <= 0.009766806848347187) {
                                                    if (features[12] <= 122.91666412353516) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 5; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 67; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[9] <= 0.5779628753662109) {
                                            classes[0] = 4; 
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
                                if (features[14] <= 8.286042362451553) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[33] <= 14516.30126953125) {
                                        if (features[11] <= 0.10495833493769169) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[9] <= 0.5071344822645187) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 25; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[50] <= 2.248842239379883) {
                if (features[49] <= 4.820403337478638) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[45] <= 10.913816452026367) {
                    if (features[40] <= 27.403067588806152) {
                        if (features[45] <= 1.3800961375236511) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[42] <= 2.1252259016036987) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[18] <= -5.769384145736694) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[29] <= 0.11967743560671806) {
                                        if (features[24] <= -1.976364552974701) {
                                            if (features[0] <= 9035.178466796875) {
                                                classes[0] = 9; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 70; 
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
                        if (features[16] <= 0.24018018692731857) {
                            if (features[23] <= -2.354685068130493) {
                                classes[0] = 16; 
                                classes[1] = 0; 
                            } else {
                                if (features[4] <= 77.30500793457031) {
                                    if (features[15] <= 10.064173221588135) {
                                        classes[0] = 0; 
                                        classes[1] = 18; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[42] <= 18.13427734375) {
                                        if (features[16] <= -8.746185541152954) {
                                            if (features[31] <= 0.004032538854517043) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[4] <= 157.05911254882812) {
                                                classes[0] = 15; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    } else {
                                        if (features[37] <= 0.007693079765886068) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 0.509920060634613) {
                                if (features[36] <= 1237.3793029785156) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                }
                            } else {
                                if (features[2] <= 475684.28125) {
                                    if (features[35] <= 0.0033980851294472814) {
                                        if (features[8] <= 1513.77587890625) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    } else {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[42] <= 4.64454460144043) {
                                        if (features[23] <= -0.6507578790187836) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[33] <= 33859.01953125) {
                                            classes[0] = 60; 
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
                    if (features[14] <= 27.15433120727539) {
                        if (features[27] <= 220.13036346435547) {
                            if (features[18] <= 8.31040644645691) {
                                classes[0] = 0; 
                                classes[1] = 14; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[9] <= 0.769774317741394) {
                                if (features[18] <= 5.368055105209351) {
                                    if (features[1] <= 37.010196685791016) {
                                        if (features[49] <= 10.248928546905518) {
                                            if (features[3] <= 0.8122369945049286) {
                                                if (features[18] <= -2.2653332948684692) {
                                                    if (features[38] <= 2991.4025268554688) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 6; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[23] <= 0.39310212060809135) {
                                                        classes[0] = 0; 
                                                        classes[1] = 8; 
                                                    } else {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 8; 
                                            }
                                        } else {
                                            if (features[14] <= -4.828007459640503) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                if (features[21] <= -6.0922691822052) {
                                                    if (features[20] <= -0.3455296754837036) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    }
                                                } else {
                                                    if (features[50] <= 22.361087799072266) {
                                                        classes[0] = 22; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[14] <= 22.884652137756348) {
                                            if (features[24] <= 1.1435338854789734) {
                                                classes[0] = 29; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[38] <= 15428.41357421875) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 4; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
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
                        if (features[50] <= 5.879789113998413) {
                            if (features[50] <= 3.928219437599182) {
                                if (features[6] <= 186.59092712402344) {
                                    if (features[1] <= 24.288166999816895) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                }
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[43] <= 6.6050862073898315) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[15] <= 7.4900171756744385) {
                                    classes[0] = 0; 
                                    classes[1] = 29; 
                                } else {
                                    classes[0] = 2; 
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

int RFC_inst2_3::predict_1(float features[]) {
    int classes[2];
    
    if (features[48] <= 1.633715033531189) {
        if (features[34] <= 18243957.5) {
            if (features[46] <= 11.09982442855835) {
                if (features[17] <= 3.058185338973999) {
                    if (features[16] <= 4.706352472305298) {
                        if (features[38] <= 2800.055419921875) {
                            if (features[6] <= 222.16110229492188) {
                                if (features[24] <= -3.1651960611343384) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[39] <= 85.92948150634766) {
                                        if (features[24] <= 0.3694235309958458) {
                                            if (features[39] <= 72.97005462646484) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 16; 
                                    }
                                }
                            } else {
                                if (features[10] <= 69.28858947753906) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[5] <= 0.10277390107512474) {
                                        if (features[35] <= 0.01035088300704956) {
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
                            }
                        } else {
                            if (features[35] <= 0.012285124976187944) {
                                classes[0] = 23; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        classes[0] = 51; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[29] <= 0.0024664406664669514) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[50] <= 0.20452959835529327) {
                            if (features[42] <= 6.29319429397583) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[16] <= -0.02991175651550293) {
                                if (features[48] <= 1.170095682144165) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 120; 
                                classes[1] = 0; 
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
            classes[1] = 6; 
        }
    } else {
        if (features[32] <= 611.9621887207031) {
            if (features[6] <= 223.39551544189453) {
                if (features[6] <= 103.96450805664062) {
                    if (features[3] <= 0.6878837943077087) {
                        if (features[2] <= 232117.2265625) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[15] <= 3.7220423221588135) {
                        if (features[19] <= -9.86121392250061) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[35] <= 0.0005690256366506219) {
                                if (features[32] <= 198.8804168701172) {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[21] <= 2.0311650037765503) {
                                    if (features[16] <= -7.614327430725098) {
                                        if (features[13] <= 158.11065673828125) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[20] <= -3.5831515789031982) {
                                            if (features[31] <= 0.004863194655627012) {
                                                classes[0] = 0; 
                                                classes[1] = 11; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 103; 
                                        }
                                    }
                                } else {
                                    if (features[0] <= 5426.224365234375) {
                                        classes[0] = 0; 
                                        classes[1] = 18; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[17] <= 1.260596513748169) {
                            if (features[46] <= 5.2838592529296875) {
                                if (features[25] <= 1.90276700258255) {
                                    if (features[19] <= -1.8437486290931702) {
                                        if (features[7] <= 401.48426818847656) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 20; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[21] <= -1.5587069988250732) {
                                if (features[13] <= 167.40070343017578) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            } else {
                                if (features[5] <= 0.24616703391075134) {
                                    if (features[27] <= 517.5702819824219) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[47] <= 3.236572265625) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[9] <= 0.6707836091518402) {
                    if (features[29] <= 0.025928075425326824) {
                        if (features[27] <= 538.9598999023438) {
                            if (features[34] <= 104903.25390625) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[49] <= 1.380050152540207) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[18] <= 1.8916108012199402) {
                                        classes[0] = 16; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[19] <= -1.339630663394928) {
                                if (features[44] <= 4.234597206115723) {
                                    if (features[46] <= 19.55623197555542) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[36] <= 694.3809204101562) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 18; 
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[11] <= 0.3830416798591614) {
                            if (features[13] <= 209.49803161621094) {
                                if (features[4] <= 37.091440200805664) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[15] <= -30.807781219482422) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[50] <= 0.7258271872997284) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[1] <= 20.147656440734863) {
                                                if (features[45] <= 2.6279197931289673) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 6; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 28; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        } else {
                            if (features[27] <= 11012.5810546875) {
                                classes[0] = 29; 
                                classes[1] = 0; 
                            } else {
                                if (features[30] <= 213.49063383042812) {
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
                    if (features[44] <= 4.700456380844116) {
                        if (features[37] <= 0.0020376386237330735) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 21; 
                    }
                }
            }
        } else {
            if (features[4] <= 36.352149963378906) {
                if (features[29] <= 0.15087075904011726) {
                    if (features[15] <= 9.694925785064697) {
                        if (features[9] <= 0.5973361134529114) {
                            if (features[3] <= 0.8795540034770966) {
                                if (features[44] <= 21.14534854888916) {
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
                            classes[0] = 0; 
                            classes[1] = 24; 
                        }
                    } else {
                        if (features[36] <= 230.45832061767578) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                if (features[13] <= 144.4378890991211) {
                    if (features[8] <= 551.9795532226562) {
                        if (features[3] <= 0.14786380529403687) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[18] <= 8.836504936218262) {
                            if (features[42] <= 66.9234561920166) {
                                if (features[29] <= 0.44592808187007904) {
                                    if (features[10] <= 582.850830078125) {
                                        if (features[9] <= 0.4899793118238449) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[25] <= -1.522080898284912) {
                                                if (features[41] <= 93.45148086547852) {
                                                    if (features[15] <= -6.405309796333313) {
                                                        if (features[42] <= 9.816827535629272) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        classes[0] = 15; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                classes[0] = 104; 
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
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[4] <= 90.87190246582031) {
                        if (features[15] <= 2.246833562850952) {
                            if (features[29] <= 0.02341317106038332) {
                                if (features[27] <= 1385.293212890625) {
                                    if (features[27] <= 282.0154342651367) {
                                        if (features[13] <= 188.9237289428711) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 13; 
                                    }
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[45] <= 4.350441932678223) {
                                    if (features[35] <= 0.0037229921435937285) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[0] <= 16431.66064453125) {
                                        if (features[22] <= -1.9801384210586548) {
                                            if (features[34] <= 776665.71875) {
                                                if (features[20] <= -2.396858334541321) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[15] <= -5.385074853897095) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 6; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 11; 
                                            }
                                        } else {
                                            if (features[3] <= 0.7063063085079193) {
                                                if (features[1] <= 25.94244956970215) {
                                                    if (features[19] <= -6.348015069961548) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 21; 
                                                    }
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 32; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[29] <= 0.07532787322998047) {
                                if (features[11] <= 0.40433332324028015) {
                                    if (features[47] <= 2.0867315530776978) {
                                        if (features[2] <= 825311.5625) {
                                            if (features[12] <= 106.29165840148926) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[16] <= 1.5902939140796661) {
                                                classes[0] = 0; 
                                                classes[1] = 7; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[36] <= 23362.021484375) {
                                            if (features[40] <= 10.926055431365967) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[37] <= 0.00363073602784425) {
                                                    if (features[5] <= 0.2368580847978592) {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    } else {
                                                        classes[0] = 10; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[37] <= 0.02281670644879341) {
                                                        classes[0] = 48; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[9] <= 0.5786003470420837) {
                                                            classes[0] = 6; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (features[15] <= 7.819287061691284) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[33] <= 17873.52099609375) {
                                        if (features[34] <= 957526.03125) {
                                            if (features[48] <= 1.791365623474121) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[6] <= 322.7161102294922) {
                                                    if (features[50] <= 1.2575688362121582) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 18; 
                                                    }
                                                } else {
                                                    classes[0] = 2; 
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
                                }
                            } else {
                                classes[0] = 29; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[17] <= 6.061514854431152) {
                            if (features[20] <= 4.409253120422363) {
                                if (features[1] <= 37.010196685791016) {
                                    if (features[27] <= 1490.1466674804688) {
                                        if (features[19] <= -8.42952013015747) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[11] <= 0.30537500977516174) {
                                                if (features[39] <= 676.4611206054688) {
                                                    if (features[2] <= 481339.328125) {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[44] <= 20.825404167175293) {
                                                            if (features[41] <= 45.226356506347656) {
                                                                classes[0] = 0; 
                                                                classes[1] = 3; 
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
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                }
                                            } else {
                                                if (features[35] <= 0.0007946451078169048) {
                                                    if (features[22] <= -2.0737158060073853) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[42] <= 2.707303524017334) {
                                                        if (features[22] <= -1.2928759474307299) {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        if (features[51] <= 4.575186252593994) {
                                                            classes[0] = 43; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[32] <= 757.4841613769531) {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            } else {
                                                                if (features[20] <= 3.8748699426651) {
                                                                    classes[0] = 21; 
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
                                        if (features[14] <= 12.880337238311768) {
                                            if (features[46] <= 6.222620487213135) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[31] <= 0.0032618934055790305) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 11; 
                                                }
                                            }
                                        } else {
                                            if (features[31] <= 0.0031570647843182087) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                if (features[51] <= 3.254961848258972) {
                                                    classes[0] = 8; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[51] <= 4.526645064353943) {
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
                                    if (features[23] <= 11.968250274658203) {
                                        if (features[34] <= 1563657.1875) {
                                            classes[0] = 25; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[17] <= -5.211076617240906) {
                                                classes[0] = 6; 
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
                                classes[0] = 43; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[25] <= -0.17205098271369934) {
                                if (features[26] <= 2526033.0) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[10] <= 43.80275344848633) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 13; 
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
    
    if (features[48] <= 1.633715033531189) {
        if (features[33] <= 11272.8701171875) {
            if (features[32] <= 1076.3291625976562) {
                if (features[35] <= 0.0017184554017148912) {
                    if (features[33] <= 704.8992004394531) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[24] <= -3.238821268081665) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[5] <= 0.39594951272010803) {
                                if (features[49] <= 5.6414337158203125) {
                                    if (features[46] <= 1.7332391142845154) {
                                        if (features[15] <= 5.66056752204895) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[44] <= 0.9273358881473541) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 43; 
                                            classes[1] = 0; 
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
                        }
                    }
                } else {
                    if (features[39] <= 148.93073654174805) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[26] <= 3763537.5) {
                            if (features[41] <= 18.109617710113525) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                if (features[37] <= 0.00574002240318805) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[16] <= 8.332688570022583) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[15] <= 1.1765127331018448) {
                    if (features[43] <= 11.226409673690796) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[0] <= 9544.4130859375) {
                        classes[0] = 53; 
                        classes[1] = 0; 
                    } else {
                        if (features[48] <= 0.58482626080513) {
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
            if (features[26] <= 62173031.0) {
                if (features[42] <= 37.703125) {
                    if (features[22] <= -3.3663628101348877) {
                        if (features[47] <= 2.1278932690620422) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 104; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[2] <= 427381.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        }
    } else {
        if (features[16] <= 5.272132158279419) {
            if (features[37] <= 0.009777072817087173) {
                if (features[8] <= 3672.94189453125) {
                    if (features[6] <= 323.6315002441406) {
                        if (features[49] <= 1.7775561809539795) {
                            if (features[22] <= -1.2756606936454773) {
                                if (features[26] <= 839064.96875) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[15] <= -5.88635516166687) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[33] <= 2228.6787109375) {
                                            if (features[24] <= 0.7549110651016235) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 24; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[10] <= 120.57752990722656) {
                                    if (features[27] <= 213.3061294555664) {
                                        if (features[9] <= 0.6812884509563446) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[1] <= 46.07819938659668) {
                                            classes[0] = 0; 
                                            classes[1] = 29; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[49] <= 1.7270259857177734) {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[14] <= 24.624839782714844) {
                                if (features[16] <= -2.5940892696380615) {
                                    if (features[24] <= -3.3175644874572754) {
                                        if (features[49] <= 31.666863441467285) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[42] <= 38.89274978637695) {
                                            if (features[4] <= 204.78307342529297) {
                                                if (features[26] <= 562974.28125) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[47] <= 15.441586971282959) {
                                                        classes[0] = 0; 
                                                        classes[1] = 36; 
                                                    } else {
                                                        if (features[18] <= -1.391443908214569) {
                                                            classes[0] = 0; 
                                                            classes[1] = 6; 
                                                        } else {
                                                            if (features[23] <= 0.953558087348938) {
                                                                classes[0] = 4; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[9] <= 0.6725997030735016) {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[31] <= 0.0006820765556767583) {
                                        if (features[24] <= 2.1591967344284058) {
                                            classes[0] = 18; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[9] <= 0.6387871205806732) {
                                            if (features[21] <= -2.131318747997284) {
                                                if (features[35] <= 0.001073358696885407) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 5; 
                                                }
                                            } else {
                                                if (features[46] <= 6.35354471206665) {
                                                    if (features[40] <= 13.37446141242981) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    }
                                                } else {
                                                    classes[0] = 24; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[8] <= 2315.5540771484375) {
                                                if (features[15] <= 1.2662682086229324) {
                                                    if (features[24] <= 2.1745938658714294) {
                                                        if (features[23] <= -4.633376717567444) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 10; 
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
                                                if (features[51] <= 1.00011545419693) {
                                                    classes[0] = 1; 
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
                                if (features[10] <= 177.50968170166016) {
                                    if (features[38] <= 7463.965576171875) {
                                        if (features[29] <= 0.002951110014691949) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[2] <= 1202818.5) {
                                                if (features[51] <= 4.881117820739746) {
                                                    if (features[15] <= 15.927651405334473) {
                                                        if (features[33] <= 4552.68896484375) {
                                                            if (features[6] <= 237.03994750976562) {
                                                                if (features[31] <= 0.004638679092749953) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 16; 
                                                                } else {
                                                                    if (features[27] <= 3055.572021484375) {
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
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 97; 
                                                        }
                                                    } else {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[22] <= -0.8285418450832367) {
                                                        if (features[17] <= -6.684472322463989) {
                                                            classes[0] = 0; 
                                                            classes[1] = 5; 
                                                        } else {
                                                            if (features[0] <= 5085.493408203125) {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            } else {
                                                                if (features[50] <= 6.999821901321411) {
                                                                    classes[0] = 10; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    if (features[46] <= 21.98437213897705) {
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
                                                        classes[1] = 20; 
                                                    }
                                                }
                                            } else {
                                                if (features[46] <= 11.178465127944946) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[39] <= 818.1031341552734) {
                                            if (features[21] <= 0.41326339170336723) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 7; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 204.92884063720703) {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[44] <= 11.208736419677734) {
                                            if (features[41] <= 6.577520370483398) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[4] <= 59.72068214416504) {
                                                    if (features[17] <= 7.445600748062134) {
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
                                            }
                                        } else {
                                            if (features[12] <= 117.625) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[4] <= 142.28305053710938) {
                                                    classes[0] = 0; 
                                                    classes[1] = 21; 
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
                    } else {
                        if (features[35] <= 0.008229992585256696) {
                            if (features[30] <= 0.0020915345521643758) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[43] <= 3.3886778354644775) {
                                    if (features[11] <= 0.572958379983902) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[28] <= 248516026368.0) {
                                        classes[0] = 43; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[36] <= 42006.486083984375) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[51] <= 4.1382598876953125) {
                        if (features[50] <= 3.01742684841156) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[36] <= 1235.8806762695312) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[3] <= 1.321425974369049) {
                            classes[0] = 31; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[18] <= -5.875110626220703) {
                    if (features[22] <= 0.10647948086261749) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[1] <= 11.045858383178711) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[35] <= 0.007301039295271039) {
                        if (features[17] <= -9.61201810836792) {
                            if (features[1] <= 40.43877983093262) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[16] <= 4.931390047073364) {
                                if (features[12] <= 262.0833282470703) {
                                    if (features[14] <= 31.63622760772705) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[39] <= 751.875244140625) {
                                        if (features[44] <= 20.25998306274414) {
                                            if (features[20] <= 10.418537139892578) {
                                                classes[0] = 43; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[40] <= 52.84684944152832) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 9; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[6] <= 317.2608337402344) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[48] <= 4.264480352401733) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 33; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[51] <= 1.4028517603874207) {
                if (features[29] <= 0.003534554038196802) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[48] <= 1.766880452632904) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[10] <= 581.7689208984375) {
                            if (features[33] <= 40311.69140625) {
                                if (features[20] <= -3.834718346595764) {
                                    if (features[20] <= -5.067846775054932) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[47] <= 1.0611799359321594) {
                                        if (features[41] <= 20.09874200820923) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 90; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[14] <= 37.16704177856445) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[36] <= 47834.220703125) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
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
                if (features[41] <= 52.771745681762695) {
                    if (features[14] <= 36.37794876098633) {
                        if (features[12] <= 537.7916564941406) {
                            if (features[32] <= 236.1363525390625) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                if (features[14] <= 31.622175216674805) {
                                    if (features[5] <= 0.14536593854427338) {
                                        if (features[4] <= 139.5152931213379) {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 84; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[19] <= 5.687787055969238) {
                                        if (features[32] <= 4423.5078125) {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[31] <= 0.0048148020869120955) {
                                                classes[0] = 2; 
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
                            }
                        } else {
                            if (features[11] <= 0.5868332982063293) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[40] <= 64.4616928100586) {
                            if (features[41] <= 10.107406616210938) {
                                if (features[13] <= 168.54650115966797) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[10] <= 81.50969314575195) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[10] <= 395.96348571777344) {
                                        if (features[37] <= 0.004623910179361701) {
                                            if (features[22] <= -3.3072452545166016) {
                                                if (features[35] <= 0.0017694740963634104) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 28; 
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
                            classes[0] = 16; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[27] <= 4676.110107421875) {
                        if (features[49] <= 2.9354063272476196) {
                            if (features[32] <= 1691.111572265625) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[32] <= 9135.267822265625) {
                                if (features[34] <= 1974413.3125) {
                                    classes[0] = 0; 
                                    classes[1] = 28; 
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

int RFC_inst2_3::predict_3(float features[]) {
    int classes[2];
    
    if (features[11] <= 0.3583749979734421) {
        if (features[15] <= 6.331127643585205) {
            if (features[34] <= 466314.203125) {
                if (features[37] <= 0.00426795519888401) {
                    if (features[6] <= 152.4214324951172) {
                        if (features[49] <= 6.402368068695068) {
                            classes[0] = 0; 
                            classes[1] = 24; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[46] <= 9.30155897140503) {
                            if (features[12] <= 176.41666412353516) {
                                if (features[15] <= -17.042609214782715) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[14] <= 33.996591567993164) {
                                    if (features[40] <= 52.35191535949707) {
                                        if (features[32] <= 126.47527694702148) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[36] <= 10965.9140625) {
                                                if (features[7] <= 150.4705810546875) {
                                                    if (features[38] <= 2183.7325439453125) {
                                                        if (features[27] <= 147.94898986816406) {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        } else {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 4; 
                                                    }
                                                } else {
                                                    if (features[23] <= -2.7970489263534546) {
                                                        if (features[4] <= 85.45329666137695) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        if (features[49] <= 2.6876741647720337) {
                                                            classes[0] = 22; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[33] <= 6227.406005859375) {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            } else {
                                                                if (features[38] <= 1175.44091796875) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 12; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (features[11] <= 0.2787916958332062) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[41] <= 44.108970642089844) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[46] <= 3.3201993703842163) {
                                        classes[0] = 0; 
                                        classes[1] = 19; 
                                    } else {
                                        if (features[22] <= -1.1393092274665833) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[47] <= 16.281286239624023) {
                                if (features[48] <= 29.423734664916992) {
                                    classes[0] = 0; 
                                    classes[1] = 27; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[47] <= 45.91006278991699) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[40] <= 35.34241485595703) {
                        if (features[2] <= 740204.625) {
                            if (features[9] <= 0.6324638426303864) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[38] <= 6504.704833984375) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[13] <= 49.383399963378906) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 39; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[39] <= 510.838623046875) {
                    if (features[23] <= -0.8015061914920807) {
                        if (features[37] <= 0.009192493045702577) {
                            if (features[15] <= -16.73744535446167) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[50] <= 20.76293659210205) {
                                    if (features[25] <= 0.988978236913681) {
                                        if (features[4] <= 133.17644119262695) {
                                            if (features[46] <= 2.2978612184524536) {
                                                if (features[21] <= -1.514991283416748) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 10; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 53; 
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
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[13] <= 188.4374542236328) {
                            if (features[30] <= 7.224726438522339) {
                                if (features[37] <= 0.0005608540959656239) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[51] <= 7.534473419189453) {
                                    if (features[41] <= 59.780738830566406) {
                                        if (features[46] <= 26.20584011077881) {
                                            classes[0] = 0; 
                                            classes[1] = 23; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[22] <= 1.1226441860198975) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            }
                        } else {
                            if (features[14] <= 18.580315589904785) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[39] <= 419.4263458251953) {
                                    if (features[10] <= 113.61276626586914) {
                                        if (features[13] <= 195.60889434814453) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 20; 
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
                    if (features[19] <= -7.5157575607299805) {
                        if (features[39] <= 802.2392272949219) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[1] <= 12.009547751396894) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[6] <= 268.7500915527344) {
                            if (features[45] <= 1.19703409075737) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 81; 
                            }
                        } else {
                            if (features[43] <= 37.791980266571045) {
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
            if (features[41] <= 92.50234985351562) {
                if (features[41] <= 1.6957399249076843) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[15] <= 19.209147453308105) {
                        if (features[17] <= 4.706119775772095) {
                            if (features[50] <= 0.2730174958705902) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[9] <= 0.6421643197536469) {
                                    if (features[25] <= 1.1244597434997559) {
                                        if (features[40] <= 45.657169342041016) {
                                            if (features[26] <= 1196061.9375) {
                                                if (features[13] <= 189.99102020263672) {
                                                    classes[0] = 8; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                if (features[26] <= 2220349.8125) {
                                                    classes[0] = 0; 
                                                    classes[1] = 11; 
                                                } else {
                                                    if (features[38] <= 553.8194580078125) {
                                                        classes[0] = 5; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[0] <= 8293.979736328125) {
                                                            classes[0] = 0; 
                                                            classes[1] = 7; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (features[24] <= -2.560911178588867) {
                                                if (features[32] <= 1025.1784362792969) {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[41] <= 76.26333236694336) {
                                                    classes[0] = 25; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 30; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[40] <= 15.466423511505127) {
                                        if (features[31] <= 0.0009378903778269887) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        if (features[11] <= 0.34995831549167633) {
                                            classes[0] = 50; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 94; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 142; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[19] <= -1.8191224932670593) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    if (features[22] <= 0.5266906917095184) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    } else {
                        if (features[34] <= 448132.90625) {
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
        if (features[45] <= 6.154188394546509) {
            if (features[32] <= 167.33745574951172) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[46] <= 22.10550880432129) {
                    if (features[24] <= -0.5891048312187195) {
                        if (features[33] <= 30757.0009765625) {
                            if (features[8] <= 3099.3994140625) {
                                classes[0] = 65; 
                                classes[1] = 0; 
                            } else {
                                if (features[18] <= -5.821498394012451) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[32] <= 335.5812683105469) {
                                        if (features[24] <= -3.7721027135849) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 31; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[40] <= 43.42863464355469) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[33] <= 2763.3685302734375) {
                            if (features[43] <= 7.3219804763793945) {
                                if (features[41] <= 10.40392780303955) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[22] <= -1.8346368670463562) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
                                    }
                                }
                            } else {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[20] <= 4.24807071685791) {
                                if (features[29] <= 0.0030298600904643536) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[46] <= 11.212993621826172) {
                                        if (features[15] <= -0.007224321365356445) {
                                            if (features[6] <= 266.3316345214844) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 13; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 46; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[31] <= 0.0006450671935454011) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[21] <= -5.464938759803772) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[13] <= 213.20946502685547) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[22] <= -1.6980957388877869) {
                if (features[12] <= 488.1666717529297) {
                    if (features[30] <= 11.857839584350586) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 62; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[4] <= 58.5050048828125) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[45] <= 12.213350296020508) {
                            if (features[45] <= 9.384297370910645) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[19] <= -18.096460223197937) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            }
                        } else {
                            classes[0] = 29; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[20] <= 0.3910646438598633) {
                    if (features[36] <= 21461.87109375) {
                        if (features[51] <= 1.083411991596222) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            if (features[0] <= 4642.521240234375) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[24] <= 1.031249314546585) {
                                    if (features[21] <= -5.666548490524292) {
                                        if (features[13] <= 182.08211517333984) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 39; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[26] <= 4632940.5) {
                                        if (features[48] <= 7.991862893104553) {
                                            if (features[33] <= 9606.644775390625) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 6; 
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
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[20] <= 2.1506634950637817) {
                        if (features[35] <= 0.009398204740136862) {
                            if (features[48] <= 27.561382293701172) {
                                classes[0] = 0; 
                                classes[1] = 26; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[22] <= -1.0262494385242462) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            if (features[3] <= 0.7304176092147827) {
                                if (features[49] <= 7.36934494972229) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            } else {
                                if (features[7] <= 420.3161163330078) {
                                    classes[0] = 20; 
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
    
    if (features[50] <= 1.663504421710968) {
        if (features[48] <= 1.9312033653259277) {
            if (features[51] <= 5.019660472869873) {
                if (features[14] <= 60.73926544189453) {
                    if (features[32] <= 335.3361511230469) {
                        if (features[9] <= 0.5340208411216736) {
                            if (features[28] <= 553521553408.0) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[33] <= 3687.1695556640625) {
                                if (features[11] <= 0.2849583178758621) {
                                    classes[0] = 1; 
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
                        if (features[34] <= 40979644.0) {
                            if (features[49] <= 7.065809488296509) {
                                if (features[4] <= 27.901386260986328) {
                                    if (features[48] <= 0.938258707523346) {
                                        if (features[50] <= 1.3275951147079468) {
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
                                } else {
                                    if (features[42] <= 22.39180278778076) {
                                        if (features[23] <= -3.2037734985351562) {
                                            if (features[7] <= 293.6689224243164) {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 131; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 0.9723323583602905) {
                                            classes[0] = 11; 
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
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[4] <= 55.84853172302246) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[26] <= 1406390.125) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[15] <= 5.0608367919921875) {
                if (features[11] <= 0.30008330941200256) {
                    if (features[48] <= 6.358090400695801) {
                        if (features[13] <= 84.82610702514648) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[21] <= -4.356245756149292) {
                                if (features[14] <= 27.93112087249756) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[47] <= 8.440685749053955) {
                                    if (features[1] <= 6.853924989700317) {
                                        if (features[46] <= 2.179117888212204) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 38; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[14] <= 31.6072998046875) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[51] <= 3.9893219470977783) {
                        if (features[25] <= 2.6709154844284058) {
                            if (features[38] <= 30686.51953125) {
                                if (features[39] <= 27.951207160949707) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 29; 
                                    classes[1] = 0; 
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
                        if (features[29] <= 0.050550490617752075) {
                            if (features[46] <= 53.745458126068115) {
                                classes[0] = 0; 
                                classes[1] = 5; 
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
                if (features[9] <= 0.4511817842721939) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[22] <= -2.391425848007202) {
                        if (features[18] <= -5.6433117389678955) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[43] <= 13.109162330627441) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[41] <= 3.9208905696868896) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[16] <= -1.1049226820468903) {
                                if (features[2] <= 1262038.1875) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 104; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[11] <= 0.35970833897590637) {
            if (features[12] <= 98.25) {
                if (features[41] <= 149.20891571044922) {
                    if (features[15] <= 8.782299518585205) {
                        if (features[7] <= 370.05027770996094) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 54; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[28] <= 190811947008.0) {
                    if (features[37] <= 0.005733076250180602) {
                        if (features[48] <= 3.1637250185012817) {
                            if (features[44] <= 7.278079032897949) {
                                if (features[8] <= 2140.6763916015625) {
                                    if (features[15] <= 3.283163011074066) {
                                        classes[0] = 0; 
                                        classes[1] = 13; 
                                    } else {
                                        if (features[21] <= -1.1896178424358368) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            if (features[18] <= -0.07808174192905426) {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[50] <= 1.6957335472106934) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[26] <= 4855164.5) {
                                            if (features[22] <= 4.166492581367493) {
                                                if (features[45] <= 1.7077059149742126) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[27] <= 249.8361053466797) {
                                                        if (features[20] <= 1.8383869528770447) {
                                                            classes[0] = 9; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        classes[0] = 48; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[4] <= 65.63892364501953) {
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
                                if (features[11] <= 0.1860000118613243) {
                                    if (features[27] <= 1599.5992431640625) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[9] <= 0.6696781814098358) {
                                        if (features[6] <= 170.47451782226562) {
                                            if (features[33] <= 14399.923828125) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 20; 
                                        }
                                    } else {
                                        if (features[37] <= 0.0035913538886234164) {
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
                            if (features[39] <= 100.66664505004883) {
                                if (features[42] <= 7.701258182525635) {
                                    if (features[24] <= -0.26964879781007767) {
                                        if (features[30] <= 701.5352630615234) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                    }
                                } else {
                                    if (features[43] <= 17.35563850402832) {
                                        if (features[4] <= 42.397695541381836) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[32] <= 228.86280822753906) {
                                    classes[0] = 0; 
                                    classes[1] = 35; 
                                } else {
                                    if (features[5] <= 0.32174329459667206) {
                                        if (features[38] <= 561.329833984375) {
                                            if (features[24] <= -0.255078986287117) {
                                                classes[0] = 11; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[40] <= 27.16822910308838) {
                                                if (features[7] <= 217.26992797851562) {
                                                    if (features[43] <= 1.8030732870101929) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[26] <= 1611594.75) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 12; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[21] <= -0.7747977674007416) {
                                                        if (features[2] <= 554093.828125) {
                                                            if (features[44] <= 24.343029975891113) {
                                                                classes[0] = 0; 
                                                                classes[1] = 8; 
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        if (features[39] <= 307.8424377441406) {
                                                            classes[0] = 16; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (features[48] <= 39.352291107177734) {
                                                    if (features[38] <= 26432.74072265625) {
                                                        if (features[44] <= 27.476428031921387) {
                                                            if (features[29] <= 0.1222238689661026) {
                                                                if (features[51] <= 21.873332977294922) {
                                                                    if (features[15] <= 3.9745062589645386) {
                                                                        if (features[29] <= 0.008980096783488989) {
                                                                            if (features[35] <= 0.0007880414195824414) {
                                                                                classes[0] = 1; 
                                                                                classes[1] = 0; 
                                                                            } else {
                                                                                classes[0] = 0; 
                                                                                classes[1] = 2; 
                                                                            }
                                                                        } else {
                                                                            if (features[42] <= 3.949984312057495) {
                                                                                if (features[20] <= -0.6983249485492706) {
                                                                                    classes[0] = 0; 
                                                                                    classes[1] = 5; 
                                                                                } else {
                                                                                    classes[0] = 1; 
                                                                                    classes[1] = 0; 
                                                                                }
                                                                            } else {
                                                                                classes[0] = 0; 
                                                                                classes[1] = 73; 
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (features[29] <= 0.01117026899009943) {
                                                                            classes[0] = 0; 
                                                                            classes[1] = 2; 
                                                                        } else {
                                                                            if (features[25] <= 0.37028389424085617) {
                                                                                classes[0] = 5; 
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
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            if (features[42] <= 10.70734167098999) {
                                                                if (features[5] <= 0.1331012137234211) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 4; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                if (features[30] <= 349.09459686279297) {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 8; 
                                                                }
                                                            }
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
                                        }
                                    } else {
                                        if (features[10] <= 336.7236022949219) {
                                            if (features[25] <= -2.1397194266319275) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 11; 
                                                classes[1] = 0; 
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
                        if (features[15] <= 0.3830064535140991) {
                            if (features[36] <= 19553.740234375) {
                                if (features[13] <= 190.5988998413086) {
                                    if (features[40] <= 34.34920310974121) {
                                        if (features[26] <= 4491144.5) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 20; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[44] <= 7.614646673202515) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[12] <= 121.91666793823242) {
                                if (features[0] <= 7246.67236328125) {
                                    if (features[4] <= 117.71343612670898) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[33] <= 26149.6298828125) {
                                    if (features[4] <= 20.03023910522461) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[48] <= 14.18776559829712) {
                                            classes[0] = 53; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[14] <= 40.25016784667969) {
                                                if (features[40] <= 126.24395370483398) {
                                                    classes[0] = 13; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[30] <= 429.3197326660156) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[25] <= -0.49158622324466705) {
                                        if (features[21] <= -4.252182960510254) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
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
                    classes[0] = 0; 
                    classes[1] = 20; 
                }
            }
        } else {
            if (features[23] <= -2.557984471321106) {
                if (features[24] <= -3.8516275882720947) {
                    if (features[40] <= 22.62689757347107) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 71; 
                    classes[1] = 0; 
                }
            } else {
                if (features[15] <= 16.67154598236084) {
                    if (features[27] <= 3681.0799560546875) {
                        if (features[17] <= -7.505618095397949) {
                            if (features[38] <= 16500.84765625) {
                                if (features[26] <= 1993087.5625) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 17; 
                                }
                            } else {
                                if (features[29] <= 0.02245284803211689) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[30] <= 1868.6802062988281) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                }
                            }
                        } else {
                            if (features[37] <= 0.006588185438886285) {
                                if (features[19] <= -1.7114760875701904) {
                                    if (features[6] <= 273.6140441894531) {
                                        if (features[41] <= 3.4119189381599426) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[36] <= 3426.148681640625) {
                                                classes[0] = 0; 
                                                classes[1] = 9; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[30] <= 7450.022705078125) {
                                            if (features[19] <= -6.421914577484131) {
                                                if (features[39] <= 127.16069793701172) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                }
                                            } else {
                                                if (features[24] <= 1.3628911674022675) {
                                                    if (features[19] <= -1.8300198316574097) {
                                                        classes[0] = 16; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    if (features[18] <= -2.4206194281578064) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 1; 
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
                                    if (features[30] <= 0.027913631172850728) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[5] <= 0.271012082695961) {
                                            if (features[45] <= 10.814425945281982) {
                                                classes[0] = 26; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[39] <= 99.6378402709961) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[47] <= 4.264838933944702) {
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
                                if (features[20] <= 0.4705910086631775) {
                                    if (features[3] <= 1.1387674808502197) {
                                        if (features[21] <= -3.839048981666565) {
                                            if (features[13] <= 182.08211517333984) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            if (features[35] <= 0.0008744208316784352) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 14; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[33] <= 17405.3779296875) {
                                        if (features[30] <= 6904.448974609375) {
                                            if (features[14] <= 0.13485395908355713) {
                                                if (features[4] <= 175.4159393310547) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 27; 
                                            }
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[9] <= 0.60860675573349) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 1.0848729610443115) {
                            if (features[29] <= 0.022601230069994926) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 45; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[51] <= 7.268743276596069) {
                                if (features[0] <= 11804.69384765625) {
                                    classes[0] = 3; 
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
                    }
                } else {
                    classes[0] = 18; 
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

int RFC_inst2_3::predict_5(float features[]) {
    int classes[2];
    
    if (features[14] <= 36.437679290771484) {
        if (features[15] <= 1.6450255513191223) {
            if (features[1] <= 43.12308311462402) {
                if (features[22] <= -2.3972854614257812) {
                    if (features[0] <= 4057.37158203125) {
                        classes[0] = 0; 
                        classes[1] = 10; 
                    } else {
                        if (features[45] <= 3.4577810764312744) {
                            if (features[40] <= 5.578777074813843) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[41] <= 13.121925354003906) {
                                    classes[0] = 25; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[23] <= -2.7508089542388916) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[46] <= 7.341688871383667) {
                                if (features[18] <= 3.5377835035324097) {
                                    if (features[21] <= 2.6320128440856934) {
                                        if (features[31] <= 0.0004815350112039596) {
                                            if (features[39] <= 39.09372615814209) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 19; 
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[33] <= 7552.0869140625) {
                                    if (features[11] <= 0.49841664731502533) {
                                        if (features[21] <= 1.825994610786438) {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[50] <= 3.808306574821472) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[11] <= 0.5014999806880951) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= -5.193681716918945) {
                                        if (features[39] <= 56.07488536834717) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                        }
                                    } else {
                                        if (features[33] <= 10824.3310546875) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[42] <= 46.95766067504883) {
                        if (features[14] <= -16.415953636169434) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 205.39160919189453) {
                                if (features[36] <= 378.62269592285156) {
                                    if (features[34] <= 361888.828125) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[9] <= 0.701646089553833) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[12] <= 311.2916717529297) {
                                        if (features[3] <= 0.6661754250526428) {
                                            if (features[26] <= 4713961.75) {
                                                classes[0] = 11; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[4] <= 102.04891204833984) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[34] <= 694783.71875) {
                                                if (features[4] <= 50.55171203613281) {
                                                    if (features[45] <= 4.488628625869751) {
                                                        classes[0] = 0; 
                                                        classes[1] = 4; 
                                                    } else {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[43] <= 23.210015296936035) {
                                                        classes[0] = 0; 
                                                        classes[1] = 29; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[26] <= 4709592.5) {
                                                    classes[0] = 7; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[21] <= 1.577274039387703) {
                                                        classes[0] = 0; 
                                                        classes[1] = 4; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[10] <= 92.7254753112793) {
                                            if (features[25] <= -1.207887589931488) {
                                                if (features[15] <= -6.812821388244629) {
                                                    if (features[23] <= -1.2327446341514587) {
                                                        if (features[35] <= 0.0024284234968945384) {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 5; 
                                                    }
                                                } else {
                                                    if (features[39] <= 179.71673583984375) {
                                                        classes[0] = 7; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                }
                                            } else {
                                                if (features[10] <= 90.55059814453125) {
                                                    if (features[24] <= 1.9422475695610046) {
                                                        if (features[13] <= 182.41085815429688) {
                                                            if (features[6] <= 277.2112350463867) {
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
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[22] <= 11.380432605743408) {
                                                if (features[23] <= -1.0754833817481995) {
                                                    classes[0] = 0; 
                                                    classes[1] = 29; 
                                                } else {
                                                    if (features[31] <= 0.005782375810667872) {
                                                        if (features[48] <= 1.3608080744743347) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 29; 
                                                        }
                                                    } else {
                                                        if (features[32] <= 732.22412109375) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
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
                                classes[0] = 11; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[13] <= 147.91754913330078) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[49] <= 39.88347816467285) {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                }
            } else {
                if (features[11] <= 0.3557916432619095) {
                    if (features[51] <= 6.851947546005249) {
                        if (features[36] <= 2223.6735229492188) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        if (features[11] <= 0.2305833399295807) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[29] <= 0.2422095686197281) {
                        classes[0] = 35; 
                        classes[1] = 0; 
                    } else {
                        if (features[16] <= -14.803730964660645) {
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
            if (features[40] <= 35.70014953613281) {
                if (features[47] <= 3.1111323833465576) {
                    if (features[4] <= 64.60059928894043) {
                        if (features[33] <= 4344.772216796875) {
                            if (features[35] <= 0.0029605334857478738) {
                                if (features[20] <= -2.7084983587265015) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[3] <= 1.0234607756137848) {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[42] <= 2.413506031036377) {
                                if (features[48] <= 1.1158261895179749) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[32] <= 235.76063537597656) {
                                    if (features[32] <= 217.09202575683594) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[48] <= 0.6179982721805573) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 62; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 82; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[29] <= 0.03277950920164585) {
                        if (features[27] <= 4865.996826171875) {
                            if (features[40] <= 4.472275018692017) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[5] <= 0.32901401817798615) {
                                    if (features[49] <= 6.787898063659668) {
                                        if (features[41] <= 21.05447769165039) {
                                            if (features[27] <= 2284.0213623046875) {
                                                classes[0] = 52; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[37] <= 0.005328773520886898) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 12; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[2] <= 711522.625) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[12] <= 137.99999237060547) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[38] <= 7918.13134765625) {
                            if (features[31] <= 0.0019965211395174265) {
                                if (features[36] <= 1197.7569580078125) {
                                    if (features[35] <= 0.0013543383684009314) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                }
                            } else {
                                if (features[16] <= 1.8969058394432068) {
                                    if (features[40] <= 13.492133378982544) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[35] <= 0.0014563614968210459) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    }
                                } else {
                                    classes[0] = 21; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[45] <= 5.487980127334595) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            }
                        }
                    }
                }
            } else {
                if (features[3] <= 0.1441568285226822) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[24] <= 0.3668382465839386) {
                        if (features[39] <= 118.26273345947266) {
                            if (features[12] <= 581.2916870117188) {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 168; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[19] <= -3.494240641593933) {
                            if (features[3] <= 0.7238834500312805) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[16] <= 3.2943782806396484) {
                                if (features[10] <= 83.96053695678711) {
                                    if (features[39] <= 272.02217864990234) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[45] <= 12.99175500869751) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 27; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[11] <= 0.12537501007318497) {
            if (features[32] <= 295.8095397949219) {
                if (features[18] <= 2.9093289375305176) {
                    if (features[1] <= 51.497257232666016) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                }
            } else {
                if (features[23] <= 2.0265645384788513) {
                    if (features[8] <= 1287.13671875) {
                        if (features[3] <= 0.6622921228408813) {
                            if (features[18] <= 9.14399003982544) {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[50] <= 1.104798674583435) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        }
                    } else {
                        if (features[22] <= 1.7443256974220276) {
                            if (features[33] <= 44681.638671875) {
                                if (features[0] <= 6510.625) {
                                    classes[0] = 74; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[17] <= 2.4439690113067627) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[7] <= 440.66639709472656) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[50] <= 0.8124513030052185) {
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
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[7] <= 310.226318359375) {
                if (features[15] <= 3.10414719581604) {
                    if (features[48] <= 0.8404134511947632) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 91; 
                    }
                } else {
                    if (features[42] <= 13.499276638031006) {
                        if (features[47] <= 3.7955000400543213) {
                            if (features[45] <= 2.2093993425369263) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 14; 
                            }
                        } else {
                            if (features[29] <= 0.006036843406036496) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[23] <= -1.045943796634674) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[46] <= 4.757525682449341) {
                    if (features[15] <= 3.534584403038025) {
                        if (features[5] <= 0.29524126648902893) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[24] <= -1.2028451263904572) {
                        if (features[14] <= 44.87033271789551) {
                            if (features[38] <= 4760.6630859375) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[18] <= -5.975139498710632) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        if (features[21] <= 1.833013892173767) {
                            if (features[14] <= 36.54841423034668) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 25; 
                            }
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

int RFC_inst2_3::predict_6(float features[]) {
    int classes[2];
    
    if (features[16] <= 6.854774475097656) {
        if (features[14] <= 28.169713020324707) {
            if (features[1] <= 6.893972396850586) {
                if (features[24] <= -2.5389522314071655) {
                    if (features[24] <= -5.291216850280762) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[27] <= 230.18633270263672) {
                        classes[0] = 56; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[14] <= 18.75498676300049) {
                    if (features[6] <= 331.36534118652344) {
                        if (features[16] <= -2.8919689655303955) {
                            if (features[20] <= -1.735795795917511) {
                                if (features[19] <= -10.976276397705078) {
                                    if (features[41] <= 24.562665939331055) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[1] <= 9.428173065185547) {
                                        if (features[39] <= 757.2477416992188) {
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
                            } else {
                                if (features[10] <= 105.2523307800293) {
                                    if (features[33] <= 2383.2794189453125) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[48] <= 30.97457981109619) {
                                            classes[0] = 0; 
                                            classes[1] = 26; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[11] <= 0.35595834255218506) {
                                        if (features[27] <= 3054.5941772460938) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[21] <= 6.144253492355347) {
                                            if (features[14] <= 13.906599521636963) {
                                                if (features[1] <= 10.861255645751953) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 15; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[34] <= 354064.21875) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 2; 
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
                        } else {
                            if (features[3] <= 0.4786088913679123) {
                                if (features[11] <= 0.25870833545923233) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                }
                            } else {
                                if (features[28] <= 27524241408.0) {
                                    if (features[3] <= 0.793879508972168) {
                                        if (features[46] <= 12.893259048461914) {
                                            if (features[35] <= 0.0005968981713522226) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 7; 
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
                                    if (features[27] <= 121.26485443115234) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[13] <= 204.69789123535156) {
                                            classes[0] = 56; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[20] <= -2.3458517491817474) {
                                                if (features[1] <= 21.72403907775879) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[6] <= 274.1717529296875) {
                                                    if (features[42] <= 20.451492309570312) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    classes[0] = 40; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[26] <= 3787427.125) {
                            classes[0] = 61; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 6685.735595703125) {
                                if (features[7] <= 151.29534912109375) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            } else {
                                classes[0] = 21; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[12] <= 324.12501525878906) {
                        if (features[1] <= 11.011021137237549) {
                            if (features[40] <= 9.326122999191284) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[4] <= 159.63349151611328) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[46] <= 6.787652015686035) {
                                if (features[17] <= -3.5849164724349976) {
                                    if (features[4] <= 28.49940586090088) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                    }
                                } else {
                                    if (features[22] <= 1.7031025886535645) {
                                        if (features[35] <= 0.0035217958502471447) {
                                            if (features[47] <= 4.405897855758667) {
                                                if (features[35] <= 0.003132948186248541) {
                                                    if (features[18] <= -1.6749366521835327) {
                                                        if (features[7] <= 186.36502838134766) {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 15; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                if (features[40] <= 11.815340042114258) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[34] <= 351217.140625) {
                                                        if (features[35] <= 0.002532950835302472) {
                                                            classes[0] = 1; 
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
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[35] <= 0.0010649619362084195) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                        }
                                    }
                                }
                            } else {
                                if (features[40] <= 355.19132232666016) {
                                    if (features[20] <= -5.376283645629883) {
                                        if (features[36] <= 1944.9691772460938) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[38] <= 3394.9407958984375) {
                                            if (features[38] <= 2582.5799560546875) {
                                                classes[0] = 15; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            }
                                        } else {
                                            classes[0] = 36; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    } else {
                        if (features[39] <= 78.17068862915039) {
                            if (features[3] <= 0.980370044708252) {
                                classes[0] = 17; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[23] <= 5.6214064955711365) {
                                if (features[24] <= 1.8880379796028137) {
                                    if (features[51] <= 0.3910600244998932) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[26] <= 10187977.5) {
                                            if (features[29] <= 0.02232665941119194) {
                                                if (features[21] <= -2.0095845088362694) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 5; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 47; 
                                            }
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[46] <= 16.50149393081665) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
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
            if (features[5] <= 0.1675560474395752) {
                if (features[15] <= 7.426695108413696) {
                    if (features[49] <= 0.7420905083417892) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[4] <= 21.054917335510254) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[43] <= 47.71866989135742) {
                                if (features[22] <= 6.219438314437866) {
                                    classes[0] = 0; 
                                    classes[1] = 78; 
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
                    if (features[20] <= 0.8184196501970291) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                if (features[22] <= -2.870288133621216) {
                    if (features[14] <= 35.67483139038086) {
                        if (features[45] <= 1.4991726875305176) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[24] <= -2.5904234647750854) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 29; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[22] <= -4.892915964126587) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[10] <= 103.42804336547852) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            }
                        }
                    }
                } else {
                    if (features[23] <= 2.7595033645629883) {
                        if (features[37] <= 0.0030962604796513915) {
                            if (features[18] <= 4.6183390617370605) {
                                if (features[12] <= 130.0) {
                                    if (features[19] <= 0.4927692413330078) {
                                        if (features[30] <= 92.11203956604004) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                    }
                                } else {
                                    if (features[4] <= 117.02253723144531) {
                                        if (features[9] <= 0.5689841508865356) {
                                            classes[0] = 0; 
                                            classes[1] = 50; 
                                        } else {
                                            if (features[44] <= 3.6100683212280273) {
                                                if (features[27] <= 5606.1396484375) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                if (features[17] <= -6.978562593460083) {
                                                    if (features[36] <= 957.3869323730469) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 25; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[10] <= 77.92770385742188) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[28] <= 6044469760.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[39] <= 865.4468994140625) {
                                if (features[11] <= 0.2736250013113022) {
                                    if (features[24] <= -1.4076826572418213) {
                                        if (features[38] <= 8022.63330078125) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 27.693766593933105) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 25; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[47] <= 1.9031696319580078) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[19] <= -2.8447598218917847) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 14; 
                                        }
                                    }
                                }
                            } else {
                                if (features[4] <= 110.88623428344727) {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[30] <= 94.54064774513245) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[48] <= 1.777691125869751) {
            if (features[12] <= 822.9583435058594) {
                if (features[13] <= 180.24288177490234) {
                    classes[0] = 129; 
                    classes[1] = 0; 
                } else {
                    if (features[50] <= 0.46567923575639725) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 28; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[16] <= 20.053131103515625) {
                if (features[34] <= 64408.236328125) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[24] <= -0.275108203291893) {
                        if (features[41] <= 73.22341918945312) {
                            if (features[14] <= 43.6223201751709) {
                                classes[0] = 80; 
                                classes[1] = 0; 
                            } else {
                                if (features[15] <= 3.453391432762146) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    if (features[34] <= 1534725.6875) {
                                        if (features[2] <= 423396.296875) {
                                            classes[0] = 26; 
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
                            if (features[47] <= 2.8740110397338867) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    } else {
                        if (features[26] <= 1630542.3125) {
                            if (features[4] <= 138.41769790649414) {
                                classes[0] = 30; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[30] <= 214.17324829101562) {
                                if (features[1] <= 9.808187484741211) {
                                    if (features[19] <= -2.3477779030799866) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[11] <= 0.10225000977516174) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[24] <= 1.0892568528652191) {
                                            classes[0] = 0; 
                                            classes[1] = 14; 
                                        } else {
                                            if (features[0] <= 4653.730224609375) {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            } else {
                                                if (features[7] <= 230.6871337890625) {
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
                                if (features[15] <= 1.8242179155349731) {
                                    if (features[36] <= 7468.40673828125) {
                                        if (features[37] <= 0.0027455557574285194) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                    }
                                } else {
                                    if (features[46] <= 0.9566275179386139) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[16] <= 14.957816123962402) {
                                            classes[0] = 30; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[45] <= 5.9369893074035645) {
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
                    }
                }
            } else {
                if (features[37] <= 0.013475856278091669) {
                    classes[0] = 0; 
                    classes[1] = 8; 
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

int RFC_inst2_3::predict_7(float features[]) {
    int classes[2];
    
    if (features[49] <= 1.6491168141365051) {
        if (features[15] <= 5.1401143074035645) {
            if (features[2] <= 875654.125) {
                if (features[49] <= 1.3622181415557861) {
                    if (features[12] <= 271.2916717529297) {
                        if (features[51] <= 0.8145241737365723) {
                            if (features[18] <= 2.762245774269104) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[41] <= 3.528056263923645) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 22; 
                            }
                        }
                    } else {
                        if (features[16] <= -4.4497504234313965) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[38] <= 46954.6279296875) {
                                if (features[51] <= 2.294085383415222) {
                                    classes[0] = 17; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[32] <= 644.4408569335938) {
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
                        }
                    }
                } else {
                    if (features[1] <= 24.980751037597656) {
                        if (features[47] <= 1.249785602092743) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[42] <= 9.488790035247803) {
                    if (features[38] <= 12265.993896484375) {
                        if (features[7] <= 161.2805404663086) {
                            if (features[44] <= 5.59857439994812) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 33; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[10] <= 84.57938003540039) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                }
            }
        } else {
            if (features[42] <= 23.090782165527344) {
                if (features[14] <= 55.48792266845703) {
                    if (features[8] <= 2795.361572265625) {
                        if (features[36] <= 17336.5126953125) {
                            classes[0] = 171; 
                            classes[1] = 0; 
                        } else {
                            if (features[19] <= 0.07938684895634651) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[32] <= 413.61163330078125) {
                            if (features[6] <= 261.7205581665039) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 20; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[3] <= 0.7014440596103668) {
                        if (features[39] <= 717.7059631347656) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[6] <= 124.70429611206055) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[30] <= 2021.3609619140625) {
                        classes[0] = 18; 
                        classes[1] = 0; 
                    } else {
                        if (features[45] <= 7.701498031616211) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[4] <= 49.17111587524414) {
            if (features[8] <= 2662.5911865234375) {
                if (features[16] <= 8.792065143585205) {
                    if (features[15] <= 6.435127258300781) {
                        if (features[25] <= 2.6967273950576782) {
                            if (features[31] <= 0.010443724226206541) {
                                if (features[32] <= 152.77178955078125) {
                                    if (features[16] <= 0.7056334614753723) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[13] <= 206.83484649658203) {
                                        if (features[6] <= 391.86329650878906) {
                                            if (features[36] <= 434.1879425048828) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[21] <= 4.985379695892334) {
                                                    if (features[15] <= 3.235505223274231) {
                                                        classes[0] = 0; 
                                                        classes[1] = 91; 
                                                    } else {
                                                        if (features[45] <= 1.3630638420581818) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 18; 
                                                        }
                                                    }
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
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[51] <= 2.8684678077697754) {
                            classes[0] = 20; 
                            classes[1] = 0; 
                        } else {
                            if (features[7] <= 245.82391357421875) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                if (features[34] <= 522864.421875) {
                                    if (features[10] <= 176.05501556396484) {
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
                        }
                    }
                } else {
                    if (features[15] <= 5.461644411087036) {
                        if (features[23] <= -4.1647011041641235) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[41] <= 59.760704040527344) {
                                classes[0] = 0; 
                                classes[1] = 14; 
                            } else {
                                if (features[49] <= 1.993885338306427) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[44] <= 14.937090396881104) {
                            classes[0] = 27; 
                            classes[1] = 0; 
                        } else {
                            if (features[15] <= 14.011437892913818) {
                                if (features[34] <= 231652.2265625) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[48] <= 4.011894226074219) {
                    if (features[2] <= 1414216.5) {
                        if (features[42] <= 0.9723434746265411) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[43] <= 2.5508792400360107) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[14] <= 36.441932678222656) {
                                    classes[0] = 32; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[32] <= 1143.3979721069336) {
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
                        if (features[16] <= 2.5936055183410645) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                } else {
                    if (features[16] <= 3.6327279806137085) {
                        if (features[16] <= 1.50274658203125) {
                            if (features[42] <= 13.86223840713501) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                if (features[3] <= 0.7586893439292908) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        if (features[45] <= 9.013681888580322) {
                            if (features[40] <= 77.56261825561523) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[15] <= 1.727124810218811) {
                if (features[8] <= 3378.4892578125) {
                    if (features[14] <= 24.736129760742188) {
                        if (features[35] <= 0.007440314861014485) {
                            if (features[13] <= 209.82334899902344) {
                                if (features[17] <= 5.593148708343506) {
                                    if (features[19] <= -3.54673171043396) {
                                        if (features[18] <= -5.1739373207092285) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[20] <= -4.679551601409912) {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[51] <= 1.1686503291130066) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 19; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[43] <= 14.016677856445312) {
                                            if (features[9] <= 0.6499995589256287) {
                                                if (features[13] <= 201.34445190429688) {
                                                    classes[0] = 0; 
                                                    classes[1] = 6; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 13; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[19] <= 6.390304803848267) {
                                                if (features[43] <= 46.59359931945801) {
                                                    classes[0] = 44; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[7] <= 332.98277282714844) {
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
                                    }
                                } else {
                                    if (features[23] <= 4.243342757225037) {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[33] <= 1513.9512329101562) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                }
                            }
                        } else {
                            if (features[32] <= 3733.2332763671875) {
                                classes[0] = 0; 
                                classes[1] = 14; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[51] <= 11.147746801376343) {
                            if (features[16] <= -9.242555141448975) {
                                if (features[41] <= 15.414731979370117) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[41] <= 47.291282653808594) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[13] <= 178.67642211914062) {
                                    if (features[13] <= 93.50096893310547) {
                                        if (features[33] <= 37955.619140625) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 51; 
                                    }
                                } else {
                                    if (features[32] <= 1317.8946533203125) {
                                        if (features[20] <= -3.516588807106018) {
                                            if (features[39] <= 110.00582504272461) {
                                                if (features[14] <= 26.734519958496094) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            } else {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[48] <= 1.8866682648658752) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[22] <= -4.910700678825378) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 27; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 0.7545874118804932) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    if (features[4] <= 60.67603302001953) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        if (features[28] <= 32523814912.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[6] <= 218.27105712890625) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[23] <= -0.5202360600233078) {
                                    classes[0] = 35; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[46] <= 22.54834270477295) {
                                        classes[0] = 16; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[44] <= 35.94462490081787) {
                                            if (features[41] <= 14.356317520141602) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
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
            } else {
                if (features[41] <= 20.979065895080566) {
                    if (features[25] <= 6.870131015777588) {
                        if (features[32] <= 173.4202423095703) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[0] <= 11958.73876953125) {
                                if (features[32] <= 7015.208251953125) {
                                    if (features[37] <= 0.002061242703348398) {
                                        if (features[50] <= 0.987223893404007) {
                                            if (features[45] <= 2.5385936498641968) {
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[40] <= 13.028819561004639) {
                                                if (features[42] <= 10.611157417297363) {
                                                    if (features[50] <= 3.6743152141571045) {
                                                        classes[0] = 15; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    if (features[14] <= 9.510382413864136) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 44; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[36] <= 117.79507827758789) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[22] <= 2.894214391708374) {
                                                classes[0] = 99; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[24] <= -1.749869555234909) {
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
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[49] <= 16.433246612548828) {
                                    if (features[28] <= 1637493735424.0) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
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
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[15] <= 8.477925300598145) {
                        if (features[11] <= 0.26491665840148926) {
                            if (features[14] <= 20.90248394012451) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 20; 
                            }
                        } else {
                            if (features[37] <= 0.0016987045528367162) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[13] <= 169.36972045898438) {
                                    if (features[23] <= -0.9151640981435776) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 27; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[25] <= -4.3596813678741455) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[29] <= 0.0073915456887334585) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[44] <= 1.4808053970336914) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[41] <= 126.36129379272461) {
                                        if (features[16] <= 20.632763862609863) {
                                            if (features[1] <= 17.549560546875) {
                                                if (features[32] <= 2169.131103515625) {
                                                    if (features[46] <= 18.608492851257324) {
                                                        if (features[28] <= 47629948928.0) {
                                                            if (features[1] <= 14.993167877197266) {
                                                                classes[0] = 10; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
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
                                                    classes[0] = 21; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[48] <= 0.7014351487159729) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 55; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[30] <= 196.35075879096985) {
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
    
    if (features[50] <= 1.5618131160736084) {
        if (features[15] <= 5.446446657180786) {
            if (features[29] <= 0.06689823046326637) {
                if (features[12] <= 249.875) {
                    if (features[42] <= 4.720206260681152) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        if (features[8] <= 2676.33447265625) {
                            if (features[8] <= 2100.1395874023438) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[6] <= 230.09569549560547) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[4] <= 26.158015251159668) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[37] <= 0.0018065430340357125) {
                            if (features[23] <= -1.8501092195510864) {
                                if (features[22] <= -5.828361988067627) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[13] <= 198.80606842041016) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[8] <= 3693.6986083984375) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[45] <= 11.316263198852539) {
                                classes[0] = 39; 
                                classes[1] = 0; 
                            } else {
                                if (features[12] <= 359.45831298828125) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[35] <= 0.025228644721210003) {
                    if (features[30] <= 0.018078219145536423) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[39] <= 224.7265396118164) {
                            if (features[7] <= 174.69528198242188) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 16; 
                        }
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[17] <= 1.3792810440063477) {
                if (features[41] <= 65.24942398071289) {
                    if (features[25] <= 0.15705552324652672) {
                        if (features[8] <= 3145.5751953125) {
                            classes[0] = 36; 
                            classes[1] = 0; 
                        } else {
                            if (features[42] <= 15.475595951080322) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[41] <= 16.15834617614746) {
                            if (features[10] <= 176.88021850585938) {
                                if (features[7] <= 170.8112335205078) {
                                    if (features[49] <= 3.312651753425598) {
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
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[43] <= 19.00726890563965) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[23] <= -3.763655424118042) {
                    if (features[8] <= 2378.4527587890625) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[23] <= 1.1621684432029724) {
                        classes[0] = 166; 
                        classes[1] = 0; 
                    } else {
                        if (features[46] <= 5.628061532974243) {
                            classes[0] = 14; 
                            classes[1] = 0; 
                        } else {
                            if (features[45] <= 12.000903367996216) {
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
        }
    } else {
        if (features[48] <= 3.2731207609176636) {
            if (features[17] <= 0.6363097727298737) {
                if (features[37] <= 0.0047067145351320505) {
                    if (features[12] <= 278.7916564941406) {
                        if (features[16] <= 6.304957151412964) {
                            if (features[20] <= -4.975756525993347) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[48] <= 3.1974469423294067) {
                                    if (features[1] <= 12.535430908203125) {
                                        if (features[3] <= 0.6960465013980865) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[38] <= 7484.798583984375) {
                                            if (features[7] <= 136.1078643798828) {
                                                if (features[25] <= 0.21320244669914246) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 48; 
                                            }
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
                            if (features[4] <= 65.88128089904785) {
                                if (features[3] <= 0.6592665016651154) {
                                    if (features[4] <= 50.31544494628906) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[39] <= 818.2156982421875) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[2] <= 1118503.875) {
                            if (features[40] <= 19.941661834716797) {
                                if (features[5] <= 0.21091824024915695) {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[46] <= 3.2769968509674072) {
                        classes[0] = 21; 
                        classes[1] = 0; 
                    } else {
                        if (features[50] <= 2.2462161779403687) {
                            if (features[47] <= 15.363568305969238) {
                                if (features[3] <= 0.6746881306171417) {
                                    if (features[18] <= -2.05222150683403) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[43] <= 6.350860357284546) {
                                if (features[34] <= 488433.390625) {
                                    classes[0] = 4; 
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
            } else {
                if (features[1] <= 86.5713882446289) {
                    if (features[51] <= 4.67491340637207) {
                        if (features[30] <= 0.09988313214853406) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[18] <= 1.4479965567588806) {
                                if (features[30] <= 148.7173843383789) {
                                    if (features[51] <= 1.1308878064155579) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        if (features[23] <= -0.6407759636640549) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[37] <= 0.015799375716596842) {
                                        if (features[10] <= 66.27795028686523) {
                                            if (features[44] <= 3.759238123893738) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 38; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[28] <= 3569974144.0) {
                                    if (features[37] <= 0.0030206074297893792) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[50] <= 1.8780105113983154) {
                                        if (features[1] <= 11.262855052947998) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[1] <= 46.37373352050781) {
                                                classes[0] = 14; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    } else {
                                        if (features[5] <= 0.1322159394621849) {
                                            if (features[21] <= 1.2357006669044495) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 78; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[42] <= 13.570151329040527) {
                            if (features[21] <= -0.01600755751132965) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        } else {
            if (features[37] <= 0.0023578268010169268) {
                if (features[1] <= 44.15092468261719) {
                    if (features[14] <= 5.223654747009277) {
                        if (features[0] <= 5307.3984375) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[17] <= 5.2389209270477295) {
                            if (features[39] <= 2729.7901611328125) {
                                if (features[51] <= 22.55851459503174) {
                                    if (features[0] <= 10106.681640625) {
                                        if (features[23] <= -3.8730307817459106) {
                                            if (features[14] <= 28.37930393218994) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[43] <= 1.59401136636734) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[46] <= 20.665626525878906) {
                                                    if (features[35] <= 0.010377671103924513) {
                                                        if (features[22] <= -2.169440507888794) {
                                                            if (features[17] <= 1.2202099561691284) {
                                                                classes[0] = 0; 
                                                                classes[1] = 31; 
                                                            } else {
                                                                if (features[50] <= 10.890580177307129) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 4; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 74; 
                                                        }
                                                    } else {
                                                        if (features[17] <= 1.7980881929397583) {
                                                            classes[0] = 0; 
                                                            classes[1] = 5; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[27] <= 922.48876953125) {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 7; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[10] <= 37.81156063079834) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 2; 
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
                        } else {
                            if (features[38] <= 4063.4407958984375) {
                                if (features[27] <= 122.95708084106445) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                } else {
                    if (features[21] <= -1.112824261188507) {
                        if (features[34] <= 732706.0625) {
                            if (features[7] <= 435.5906524658203) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    } else {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[14] <= 20.407448768615723) {
                    if (features[33] <= 14898.21142578125) {
                        if (features[16] <= -4.332817554473877) {
                            if (features[42] <= 13.612871646881104) {
                                if (features[28] <= 82553106432.0) {
                                    classes[0] = 0; 
                                    classes[1] = 13; 
                                } else {
                                    if (features[17] <= -1.9078614115715027) {
                                        if (features[31] <= 0.006764673162251711) {
                                            classes[0] = 4; 
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
                                if (features[7] <= 167.77488708496094) {
                                    if (features[10] <= 69.4797134399414) {
                                        if (features[10] <= 62.20312309265137) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                } else {
                                    if (features[19] <= -5.074567079544067) {
                                        if (features[26] <= 6449118.75) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 21; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[39] <= 61.35047721862793) {
                                if (features[7] <= 117.33010482788086) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                if (features[30] <= 137.41630172729492) {
                                    if (features[21] <= -0.9887293577194214) {
                                        if (features[36] <= 420.560791015625) {
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
                                    if (features[1] <= 9.472481727600098) {
                                        if (features[18] <= 0.019423365592956543) {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[45] <= 24.77448797225952) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 74; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[20] <= 5.963139295578003) {
                            if (features[11] <= 0.4077083468437195) {
                                if (features[28] <= 51633809408.0) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[50] <= 22.060227394104004) {
                                        classes[0] = 0; 
                                        classes[1] = 21; 
                                    } else {
                                        if (features[17] <= -3.5958042964339256) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                }
                            } else {
                                if (features[33] <= 20897.357421875) {
                                    if (features[39] <= 236.49309539794922) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        if (features[44] <= 5.72721529006958) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 17; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[16] <= -23.580676078796387) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[35] <= 0.02406000718474388) {
                                    if (features[40] <= 18.37162208557129) {
                                        if (features[50] <= 5.846880674362183) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
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
                    }
                } else {
                    if (features[17] <= -1.7663955688476562) {
                        if (features[15] <= -0.30724257230758667) {
                            if (features[17] <= -13.508853435516357) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[35] <= 0.0014635554980486631) {
                                    if (features[18] <= 0.6957450211048126) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[25] <= -2.9019057750701904) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[41] <= 81.23827362060547) {
                                            classes[0] = 0; 
                                            classes[1] = 43; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[16] <= 3.7732170820236206) {
                                if (features[6] <= 229.71627807617188) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    if (features[27] <= 1652.3753051757812) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[15] <= 1.1460579931735992) {
                            if (features[23] <= -2.335638403892517) {
                                if (features[30] <= 488.0963439941406) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[51] <= 3.0951178073883057) {
                                    if (features[19] <= -7.754907131195068) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                }
                            }
                        } else {
                            if (features[6] <= 132.84967041015625) {
                                if (features[43] <= 12.826293468475342) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                }
                            } else {
                                if (features[0] <= 4919.16259765625) {
                                    if (features[39] <= 891.360595703125) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[12] <= 326.2916717529297) {
                                        if (features[41] <= 65.92586517333984) {
                                            if (features[24] <= 1.2686009407043457) {
                                                if (features[43] <= 4.887915134429932) {
                                                    if (features[24] <= -0.31202200055122375) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 51; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[30] <= 232.87965393066406) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[18] <= 6.837285041809082) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
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

int RFC_inst2_3::predict_9(float features[]) {
    int classes[2];
    
    if (features[15] <= 6.138551950454712) {
        if (features[48] <= 16.095662593841553) {
            if (features[38] <= 4993.666748046875) {
                if (features[49] <= 3.096827983856201) {
                    if (features[25] <= -1.5556883215904236) {
                        if (features[19] <= 1.8352707624435425) {
                            if (features[27] <= 45.589274406433105) {
                                if (features[48] <= 1.6640873551368713) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[20] <= -1.4988060593605042) {
                                    if (features[0] <= 8550.512451171875) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 27; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[22] <= 6.577409982681274) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[43] <= 4.3197643756866455) {
                            if (features[31] <= 0.0013616654905490577) {
                                if (features[6] <= 207.93141174316406) {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                } else {
                                    if (features[43] <= 3.0916526317596436) {
                                        if (features[27] <= 159.35426330566406) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[44] <= 5.115671157836914) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[22] <= 6.724538087844849) {
                                    classes[0] = 0; 
                                    classes[1] = 30; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[37] <= 0.002433965331874788) {
                                if (features[23] <= -1.5693230628967285) {
                                    if (features[47] <= 0.7199445068836212) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[14] <= 32.21382141113281) {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[40] <= 25.926037788391113) {
                                        if (features[15] <= -11.433664798736572) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[38] <= 1351.774169921875) {
                                                classes[0] = 0; 
                                                classes[1] = 9; 
                                            } else {
                                                if (features[34] <= 206899.2109375) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[17] <= -3.374035596847534) {
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
                                        classes[0] = 0; 
                                        classes[1] = 24; 
                                    }
                                }
                            } else {
                                if (features[4] <= 63.823659896850586) {
                                    if (features[45] <= 3.726988673210144) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[51] <= 3.971990466117859) {
                                            if (features[51] <= 0.5101186484098434) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 13; 
                                            }
                                        } else {
                                            if (features[0] <= 6648.5849609375) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 22; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[2] <= 620870.40625) {
                        if (features[26] <= 147535.9765625) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[38] <= 4646.8818359375) {
                                if (features[29] <= 0.2593754455447197) {
                                    if (features[12] <= 104.83333206176758) {
                                        if (features[29] <= 0.011238479055464268) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[51] <= 5.272146940231323) {
                                            classes[0] = 0; 
                                            classes[1] = 63; 
                                        } else {
                                            if (features[1] <= 26.41117286682129) {
                                                classes[0] = 0; 
                                                classes[1] = 19; 
                                            } else {
                                                if (features[19] <= -2.0308514833450317) {
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
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[14] <= 37.81387901306152) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            }
                        }
                    } else {
                        if (features[7] <= 140.81395721435547) {
                            if (features[13] <= 203.69857788085938) {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[10] <= 83.31295776367188) {
                                classes[0] = 0; 
                                classes[1] = 22; 
                            } else {
                                if (features[1] <= 27.316676139831543) {
                                    if (features[0] <= 9264.6826171875) {
                                        if (features[38] <= 2102.6593017578125) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[10] <= 173.3129119873047) {
                                                if (features[15] <= 4.096233129501343) {
                                                    if (features[25] <= -2.3799537420272827) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 20; 
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
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[35] <= 0.0015755400527268648) {
                                        if (features[34] <= 820694.4375) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[9] <= 0.6156027019023895) {
                                            classes[0] = 0; 
                                            classes[1] = 21; 
                                        } else {
                                            if (features[28] <= 152366727168.0) {
                                                if (features[29] <= 0.07148225605487823) {
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
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[36] <= 2737.695068359375) {
                    if (features[44] <= 7.7244908809661865) {
                        if (features[40] <= 128.43027114868164) {
                            if (features[20] <= 1.7806218266487122) {
                                classes[0] = 38; 
                                classes[1] = 0; 
                            } else {
                                if (features[29] <= 0.025525787845253944) {
                                    classes[0] = 5; 
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
                    } else {
                        if (features[21] <= 2.8001673221588135) {
                            if (features[11] <= 0.33629170060157776) {
                                if (features[7] <= 206.59408569335938) {
                                    classes[0] = 0; 
                                    classes[1] = 13; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[18] <= -0.010145246982574463) {
                                    if (features[14] <= 9.30951738357544) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[15] <= -5.90520715713501) {
                        if (features[36] <= 73876.765625) {
                            if (features[14] <= 7.2450220584869385) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[38] <= 5076.4130859375) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 34; 
                                }
                            }
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[8] <= 3149.923828125) {
                            if (features[26] <= 2435460.125) {
                                if (features[5] <= 0.21668706089258194) {
                                    if (features[8] <= 2464.1187744140625) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[7] <= 204.9469985961914) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[21] <= 2.7637678384780884) {
                                    if (features[42] <= 5.713261365890503) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[16] <= 4.229710102081299) {
                                            if (features[13] <= 199.49098205566406) {
                                                classes[0] = 0; 
                                                classes[1] = 18; 
                                            } else {
                                                if (features[7] <= 277.40560150146484) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        } else {
                                            if (features[21] <= 0.1667410284280777) {
                                                if (features[42] <= 15.447106838226318) {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
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
                                    if (features[25] <= -0.5776209533214569) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[12] <= 252.0416717529297) {
                if (features[38] <= 3843.3194580078125) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                if (features[5] <= 0.12189238891005516) {
                    if (features[11] <= 0.28216665983200073) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[1] <= 9.371111869812012) {
                        if (features[10] <= 85.27149963378906) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[42] <= 105.61200332641602) {
                            if (features[28] <= 42317668352.0) {
                                classes[0] = 31; 
                                classes[1] = 0; 
                            } else {
                                if (features[7] <= 127.49528121948242) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[51] <= 0.8341740667819977) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[41] <= 155.39255142211914) {
                                            if (features[25] <= -8.005128622055054) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[14] <= 18.424785614013672) {
                                                    if (features[1] <= 26.347232818603516) {
                                                        classes[0] = 35; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[16] <= -6.799502611160278) {
                                                            if (features[31] <= 0.013385345693677664) {
                                                                if (features[20] <= 1.5165188312530518) {
                                                                    classes[0] = 2; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 5; 
                                                                }
                                                            } else {
                                                                classes[0] = 11; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 26; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[32] <= 1051.7026062011719) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        if (features[1] <= 22.70814800262451) {
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
    } else {
        if (features[51] <= 2.007390260696411) {
            if (features[24] <= 0.43489064276218414) {
                if (features[8] <= 2806.6654052734375) {
                    if (features[35] <= 0.0003291482134955004) {
                        if (features[18] <= 4.5858542919158936) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[25] <= -2.9791890382766724) {
                            if (features[34] <= 672700.71875) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[23] <= 0.7280164361000061) {
                                classes[0] = 217; 
                                classes[1] = 0; 
                            } else {
                                if (features[43] <= 3.176485538482666) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 16; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[13] <= 181.1949920654297) {
                        if (features[29] <= 0.09756819531321526) {
                            if (features[13] <= 178.90715789794922) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[42] <= 22.10303783416748) {
                            classes[0] = 40; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[10] <= 584.231201171875) {
                    if (features[19] <= 0.4895157963037491) {
                        classes[0] = 31; 
                        classes[1] = 0; 
                    } else {
                        if (features[33] <= 3872.7960205078125) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[15] <= 12.44460391998291) {
                                if (features[36] <= 6640.70263671875) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                }
                            } else {
                                classes[0] = 12; 
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
            if (features[1] <= 12.392288208007812) {
                if (features[15] <= 15.603285789489746) {
                    if (features[32] <= 607.1105651855469) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        if (features[37] <= 0.005695996107533574) {
                            if (features[29] <= 0.002083075582049787) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[7] <= 96.5129165649414) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[29] <= 0.06385440193116665) {
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
                    classes[0] = 10; 
                    classes[1] = 0; 
                }
            } else {
                if (features[49] <= 1.0871143341064453) {
                    if (features[33] <= 6205.083251953125) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    if (features[15] <= 8.467155456542969) {
                        if (features[0] <= 5397.104736328125) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[30] <= 228.6639175415039) {
                                if (features[50] <= 3.5172841548919678) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[38] <= 1118.9165954589844) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 15; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[8] <= 4670.23486328125) {
                            if (features[16] <= 19.614789962768555) {
                                if (features[28] <= 3483926656.0) {
                                    if (features[14] <= 53.89040184020996) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[38] <= 105182.55078125) {
                                        if (features[29] <= 0.1971105858683586) {
                                            if (features[22] <= 0.7757652103900909) {
                                                classes[0] = 104; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[46] <= 5.264907360076904) {
                                                    if (features[26] <= 3224793.75) {
                                                        classes[0] = 8; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                } else {
                                                    classes[0] = 32; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[18] <= -3.4169538021087646) {
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
    
    if (features[13] <= 143.5281219482422) {
        if (features[15] <= 8.800291061401367) {
            if (features[14] <= 27.2554874420166) {
                if (features[25] <= -3.906917691230774) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[3] <= 0.10605179145932198) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[25] <= -1.7269092798233032) {
                            if (features[26] <= 5684158.0625) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 27; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[41] <= 6.180152654647827) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    if (features[51] <= 21.60691261291504) {
                        if (features[31] <= 0.006724762264639139) {
                            if (features[43] <= 7.789952278137207) {
                                if (features[31] <= 0.0017719434690661728) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
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
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[41] <= 66.37076568603516) {
                if (features[30] <= 0.0007163469381339382) {
                    if (features[20] <= 2.594196915626526) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[14] <= 65.29386520385742) {
                        if (features[7] <= 124.38521194458008) {
                            if (features[2] <= 237455.140625) {
                                if (features[37] <= 0.00126937149616424) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 170; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[15] <= 20.395651817321777) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[16] <= -0.45368802547454834) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[24] <= -1.1276296377182007) {
                        if (features[13] <= 83.20063972473145) {
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
    } else {
        if (features[37] <= 0.0031426213681697845) {
            if (features[17] <= 1.079207181930542) {
                if (features[13] <= 188.80992889404297) {
                    if (features[4] <= 78.99483871459961) {
                        if (features[24] <= -5.012406826019287) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[23] <= -5.379571914672852) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[24] <= 2.4000661373138428) {
                                    classes[0] = 0; 
                                    classes[1] = 80; 
                                } else {
                                    if (features[17] <= -0.7630639672279358) {
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
                        if (features[25] <= -1.2961861491203308) {
                            if (features[41] <= 58.62687110900879) {
                                classes[0] = 17; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[16] <= 5.526806831359863) {
                                classes[0] = 0; 
                                classes[1] = 17; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[4] <= 36.31214714050293) {
                        classes[0] = 0; 
                        classes[1] = 17; 
                    } else {
                        if (features[43] <= 3.796340584754944) {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        } else {
                            if (features[48] <= 13.800167560577393) {
                                if (features[11] <= 0.3842083513736725) {
                                    if (features[44] <= 2.922221064567566) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[2] <= 746122.4375) {
                                            if (features[5] <= 0.20277126133441925) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[17] <= -3.366657257080078) {
                                                    classes[0] = 4; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        } else {
                                            if (features[43] <= 4.934520959854126) {
                                                if (features[22] <= -2.9790451526641846) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 29; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[21] <= 1.3945668637752533) {
                                        if (features[21] <= -4.026273012161255) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[42] <= 9.198111772537231) {
                                                if (features[32] <= 225.40895080566406) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    if (features[38] <= 2792.5692749023438) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 6; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[4] <= 57.648189544677734) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[42] <= 7.729785919189453) {
                    if (features[32] <= 167.12035369873047) {
                        if (features[48] <= 2.3940441608428955) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        if (features[24] <= 3.3606889247894287) {
                            if (features[10] <= 55.04449272155762) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[25] <= 1.1270025372505188) {
                                    if (features[14] <= 52.09823036193848) {
                                        if (features[51] <= 1.7742779850959778) {
                                            classes[0] = 61; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[29] <= 0.0358054107055068) {
                                                classes[0] = 13; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[13] <= 178.78655242919922) {
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
                                        classes[1] = 2; 
                                    }
                                } else {
                                    if (features[23] <= -2.134892225265503) {
                                        classes[0] = 7; 
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
                } else {
                    if (features[20] <= 3.1171830892562866) {
                        if (features[15] <= 6.83330512046814) {
                            if (features[22] <= -1.3889840841293335) {
                                if (features[39] <= 187.60366821289062) {
                                    if (features[35] <= 0.0023877538042142987) {
                                        classes[0] = 14; 
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
                                if (features[18] <= 5.331794500350952) {
                                    if (features[19] <= -2.9081661701202393) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 23; 
                                    }
                                } else {
                                    if (features[11] <= 0.281541645526886) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[16] <= 13.57279634475708) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[20] <= 26.021763801574707) {
                            if (features[18] <= 4.484626054763794) {
                                classes[0] = 0; 
                                classes[1] = 15; 
                            } else {
                                if (features[22] <= -0.4636080414056778) {
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
            }
        } else {
            if (features[50] <= 1.4101214408874512) {
                if (features[14] <= 40.20745086669922) {
                    if (features[16] <= 1.3906732201576233) {
                        if (features[4] <= 59.89187812805176) {
                            if (features[27] <= 993.0627136230469) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[6] <= 212.59490203857422) {
                                if (features[47] <= 2.1188576221466064) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 17; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[25] <= 0.2250867262482643) {
                            classes[0] = 66; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 1.1181174516677856) {
                                if (features[15] <= 2.7762798070907593) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[20] <= -1.5399232506752014) {
                                        if (features[24] <= 0.24642208218574524) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 22; 
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
                    classes[1] = 1; 
                }
            } else {
                if (features[15] <= 1.727149248123169) {
                    if (features[6] <= 239.9489517211914) {
                        if (features[35] <= 0.002364033251069486) {
                            if (features[19] <= -0.8697633743286133) {
                                if (features[49] <= 2.3481260538101196) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            } else {
                                if (features[18] <= -0.10627049207687378) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[45] <= 35.8382682800293) {
                                if (features[10] <= 166.8164520263672) {
                                    classes[0] = 0; 
                                    classes[1] = 48; 
                                } else {
                                    if (features[43] <= 15.52821397781372) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
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
                    } else {
                        if (features[9] <= 0.6689064502716064) {
                            if (features[41] <= 33.656707763671875) {
                                if (features[50] <= 7.640047311782837) {
                                    if (features[33] <= 10803.49951171875) {
                                        if (features[37] <= 0.013634717091917992) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        if (features[35] <= 0.0006755990907549858) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 15; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 53.28374671936035) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[41] <= 32.93990707397461) {
                                            if (features[35] <= 0.0012511300155892968) {
                                                if (features[50] <= 12.451038837432861) {
                                                    classes[0] = 8; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[46] <= 9.129067420959473) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 22; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                }
                            } else {
                                if (features[30] <= 2.848261784762144) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[1] <= 10.093854904174805) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[33] <= 37647.62109375) {
                                            classes[0] = 45; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[39] <= 610.0181579589844) {
                                if (features[39] <= 379.35853576660156) {
                                    if (features[19] <= 0.6746628880500793) {
                                        if (features[45] <= 9.396198272705078) {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[0] <= 6027.0859375) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            }
                                        }
                                    } else {
                                        if (features[39] <= 41.69073963165283) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                        }
                                    }
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[34] <= 255790.5703125) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[31] <= 0.010898389155045152) {
                                        classes[0] = 0; 
                                        classes[1] = 19; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[16] <= -0.8544718027114868) {
                        if (features[47] <= 13.789985179901123) {
                            if (features[29] <= 0.02151588536798954) {
                                if (features[42] <= 19.359020233154297) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[4] <= 114.08223342895508) {
                                    if (features[20] <= -1.6822223663330078) {
                                        if (features[31] <= 0.0019799963920377195) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 16; 
                                    }
                                } else {
                                    if (features[9] <= 0.7518969774246216) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[32] <= 7379.9619140625) {
                                if (features[6] <= 209.50051879882812) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[4] <= 55.69972229003906) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 25; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        if (features[4] <= 22.912879943847656) {
                            if (features[20] <= 5.6887969970703125) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[35] <= 0.013105731923133135) {
                                if (features[35] <= 0.0009492112149018794) {
                                    if (features[40] <= 17.76146697998047) {
                                        if (features[45] <= 9.645050525665283) {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[31] <= 0.0013626721920445561) {
                                            if (features[18] <= 4.680999994277954) {
                                                if (features[33] <= 6666.9482421875) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            } else {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    }
                                } else {
                                    if (features[44] <= 9.609935283660889) {
                                        if (features[45] <= 7.934272289276123) {
                                            if (features[33] <= 2612.7213745117188) {
                                                if (features[5] <= 0.19926682114601135) {
                                                    if (features[10] <= 40.236491203308105) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    classes[0] = 4; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 64; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[15] <= 12.869913578033447) {
                                                if (features[31] <= 0.0012758783996105194) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[0] <= 5040.595947265625) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 6; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 66; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= 482771.34375) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 5; 
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

