const uint32_t prec = 19, lutsp = 10, abdp = 0;
static int32_t fpcos_lut[] = {524288, 524278, 524249, 524199, 524130, 524041, 523933, 523804, 523656, 523489, 523301, 523094, 522867, 522621, 522355, 522069, 521763, 521438, 521093, 520729, 520345, 519942, 519518, 519076, 518613, 518132, 517630, 517109, 516569, 516010, 515430, 514832, 514214, 513577, 512920, 512244, 511549, 510834, 510101, 509348, 508576, 507785, 506974, 506145, 505296, 504429, 503542, 502637, 501712, 500769, 499807, 498826, 497826, 496808, 495771, 494715, 493640, 492547, 491436, 490305, 489157, 487990, 486805, 485601, 484379, 483139, 481880, 480604, 479309, 477997, 476666, 475317, 473951, 472566, 471164, 469744, 468307, 466852, 465379, 463889, 462381, 460856, 459313, 457753, 456176, 454582, 452971, 451342, 449697, 448034, 446355, 444659, 442947, 441217, 439471, 437709, 435930, 434134, 432322, 430494, 428650, 426789, 424913, 423020, 421112, 419188, 417248, 415292, 413321, 411334, 409331, 407313, 405280, 403232, 401168, 399089, 396996, 394887, 392763, 390625, 388472, 386304, 384122, 381925, 379714, 377489, 375249, 372995, 370728, 368446, 366150, 363841, 361518, 359181, 356831, 354467, 352090, 349700, 347297, 344880, 342451, 340008, 337553, 335085, 332605, 330112, 327606, 325089, 322559, 320016, 317462, 314896, 312318, 309728, 307127, 304514, 301889, 299253, 296606, 293948, 291279, 288599, 285907, 283205, 280493, 277770, 275036, 272292, 269538, 266774, 263999, 261215, 258421, 255617, 252803, 249980, 247148, 244306, 241455, 238595, 235726, 232848, 229961, 227066, 224162, 221250, 218329, 215400, 212463, 209518, 206565, 203605, 200636, 197660, 194677, 191687, 188689, 185684, 182672, 179653, 176627, 173595, 170556, 167511, 164460, 161402, 158338, 155268, 152193, 149111, 146025, 142932, 139834, 136731, 133623, 130510, 127392, 124269, 121141, 118009, 114872, 111731, 108586, 105437, 102284, 99126, 95966, 92801, 89633, 86462, 83287, 80110, 76929, 73745, 70559, 67370, 64178, 60984, 57788, 54590, 51389, 48187, 44983, 41777, 38569, 35360, 32150, 28938, 25726, 22512, 19298, 16082, 12867, 9650, 6434, 3217, 0, -3217, -6434, -9650, -12867, -16082, -19298, -22512, -25726, -28938, -32150, -35360, -38569, -41777, -44983, -48187, -51389, -54590, -57788, -60984, -64178, -67370, -70559, -73745, -76929, -80110, -83287, -86462, -89633, -92801, -95966, -99126, -102284, -105437, -108586, -111731, -114872, -118009, -121141, -124269, -127392, -130510, -133623, -136731, -139834, -142932, -146025, -149111, -152193, -155268, -158338, -161402, -164460, -167511, -170556, -173595, -176627, -179653, -182672, -185684, -188689, -191687, -194677, -197660, -200636, -203605, -206565, -209518, -212463, -215400, -218329, -221250, -224162, -227066, -229961, -232848, -235726, -238595, -241455, -244306, -247148, -249980, -252803, -255617, -258421, -261215, -263999, -266774, -269538, -272292, -275036, -277770, -280493, -283205, -285907, -288599, -291279, -293948, -296606, -299253, -301889, -304514, -307127, -309728, -312318, -314896, -317462, -320016, -322559, -325089, -327606, -330112, -332605, -335085, -337553, -340008, -342451, -344880, -347297, -349700, -352090, -354467, -356831, -359181, -361518, -363841, -366150, -368446, -370728, -372995, -375249, -377489, -379714, -381925, -384122, -386304, -388472, -390625, -392763, -394887, -396996, -399089, -401168, -403232, -405280, -407313, -409331, -411334, -413321, -415292, -417248, -419188, -421112, -423020, -424913, -426789, -428650, -430494, -432322, -434134, -435930, -437709, -439471, -441217, -442947, -444659, -446355, -448034, -449697, -451342, -452971, -454582, -456176, -457753, -459313, -460856, -462381, -463889, -465379, -466852, -468307, -469744, -471164, -472566, -473951, -475317, -476666, -477997, -479309, -480604, -481880, -483139, -484379, -485601, -486805, -487990, -489157, -490305, -491436, -492547, -493640, -494715, -495771, -496808, -497826, -498826, -499807, -500769, -501712, -502637, -503542, -504429, -505296, -506145, -506974, -507785, -508576, -509348, -510101, -510834, -511549, -512244, -512920, -513577, -514214, -514832, -515430, -516010, -516569, -517109, -517630, -518132, -518613, -519076, -519518, -519942, -520345, -520729, -521093, -521438, -521763, -522069, -522355, -522621, -522867, -523094, -523301, -523489, -523656, -523804, -523933, -524041, -524130, -524199, -524249, -524278, -524288, -524278, -524249, -524199, -524130, -524041, -523933, -523804, -523656, -523489, -523301, -523094, -522867, -522621, -522355, -522069, -521763, -521438, -521093, -520729, -520345, -519942, -519518, -519076, -518613, -518132, -517630, -517109, -516569, -516010, -515430, -514832, -514214, -513577, -512920, -512244, -511549, -510834, -510101, -509348, -508576, -507785, -506974, -506145, -505296, -504429, -503542, -502637, -501712, -500769, -499807, -498826, -497826, -496808, -495771, -494715, -493640, -492547, -491436, -490305, -489157, -487990, -486805, -485601, -484379, -483139, -481880, -480604, -479309, -477997, -476666, -475317, -473951, -472566, -471164, -469744, -468307, -466852, -465379, -463889, -462381, -460856, -459313, -457753, -456176, -454582, -452971, -451342, -449697, -448034, -446355, -444659, -442947, -441217, -439471, -437709, -435930, -434134, -432322, -430494, -428650, -426789, -424913, -423020, -421112, -419188, -417248, -415292, -413321, -411334, -409331, -407313, -405280, -403232, -401168, -399089, -396996, -394887, -392763, -390625, -388472, -386304, -384122, -381925, -379714, -377489, -375249, -372995, -370728, -368446, -366150, -363841, -361518, -359181, -356831, -354467, -352090, -349700, -347297, -344880, -342451, -340008, -337553, -335085, -332605, -330112, -327606, -325089, -322559, -320016, -317462, -314896, -312318, -309728, -307127, -304514, -301889, -299253, -296606, -293948, -291279, -288599, -285907, -283205, -280493, -277770, -275036, -272292, -269538, -266774, -263999, -261215, -258421, -255617, -252803, -249980, -247148, -244306, -241455, -238595, -235726, -232848, -229961, -227066, -224162, -221250, -218329, -215400, -212463, -209518, -206565, -203605, -200636, -197660, -194677, -191687, -188689, -185684, -182672, -179653, -176627, -173595, -170556, -167511, -164460, -161402, -158338, -155268, -152193, -149111, -146025, -142932, -139834, -136731, -133623, -130510, -127392, -124269, -121141, -118009, -114872, -111731, -108586, -105437, -102284, -99126, -95966, -92801, -89633, -86462, -83287, -80110, -76929, -73745, -70559, -67370, -64178, -60984, -57788, -54590, -51389, -48187, -44983, -41777, -38569, -35360, -32150, -28938, -25726, -22512, -19298, -16082, -12867, -9650, -6434, -3217, 0, 3217, 6434, 9650, 12867, 16082, 19298, 22512, 25726, 28938, 32150, 35360, 38569, 41777, 44983, 48187, 51389, 54590, 57788, 60984, 64178, 67370, 70559, 73745, 76929, 80110, 83287, 86462, 89633, 92801, 95966, 99126, 102284, 105437, 108586, 111731, 114872, 118009, 121141, 124269, 127392, 130510, 133623, 136731, 139834, 142932, 146025, 149111, 152193, 155268, 158338, 161402, 164460, 167511, 170556, 173595, 176627, 179653, 182672, 185684, 188689, 191687, 194677, 197660, 200636, 203605, 206565, 209518, 212463, 215400, 218329, 221250, 224162, 227066, 229961, 232848, 235726, 238595, 241455, 244306, 247148, 249980, 252803, 255617, 258421, 261215, 263999, 266774, 269538, 272292, 275036, 277770, 280493, 283205, 285907, 288599, 291279, 293948, 296606, 299253, 301889, 304514, 307127, 309728, 312318, 314896, 317462, 320016, 322559, 325089, 327606, 330112, 332605, 335085, 337553, 340008, 342451, 344880, 347297, 349700, 352090, 354467, 356831, 359181, 361518, 363841, 366150, 368446, 370728, 372995, 375249, 377489, 379714, 381925, 384122, 386304, 388472, 390625, 392763, 394887, 396996, 399089, 401168, 403232, 405280, 407313, 409331, 411334, 413321, 415292, 417248, 419188, 421112, 423020, 424913, 426789, 428650, 430494, 432322, 434134, 435930, 437709, 439471, 441217, 442947, 444659, 446355, 448034, 449697, 451342, 452971, 454582, 456176, 457753, 459313, 460856, 462381, 463889, 465379, 466852, 468307, 469744, 471164, 472566, 473951, 475317, 476666, 477997, 479309, 480604, 481880, 483139, 484379, 485601, 486805, 487990, 489157, 490305, 491436, 492547, 493640, 494715, 495771, 496808, 497826, 498826, 499807, 500769, 501712, 502637, 503542, 504429, 505296, 506145, 506974, 507785, 508576, 509348, 510101, 510834, 511549, 512244, 512920, 513577, 514214, 514832, 515430, 516010, 516569, 517109, 517630, 518132, 518613, 519076, 519518, 519942, 520345, 520729, 521093, 521438, 521763, 522069, 522355, 522621, 522867, 523094, 523301, 523489, 523656, 523804, 523933, 524041, 524130, 524199, 524249, 524278, 524288};