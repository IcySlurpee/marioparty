#include "MushroomMixup.h"

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F65E0_MushroomMixup);

void func_800F6CA8_MushroomMixup(void) {
    switch((D_800F5144 ^ 1) < 1) {
        case 0:
            break;
        default:
            func_800601D4(0x28);
            func_8002890C(0, 0, 0);
            omOvlReturnEx(1);
            break;
    }
}

#ifdef NON_EQUIVALENT
void func_800F6CF4_MushroomMixup(void) {
    s16 loopInteriorIteration;
    s16 loopIteration;
    s16 var_v1;
    s32 randomByte;
    s32 arrayOrStructIndex;
    s32 conditionLessThanFour;

    for (loopIteration = 0; loopIteration < 4; loopIteration++) {
        // randomByte = (s32) rand8() % (4 - loopIteration); // first 0-3, then 0-2, etc.
        rand8();
        // loopInteriorIteration = 0;

        for (loopInteriorIteration = 0; loopInteriorIteration < 4; loopInteriorIteration++) {
loop_2:
        var_v1 = loopIteration;

        // run when not first loop
        if (loopIteration != 0) {
            arrayOrStructIndex = var_v1 * 2;
loop_4:
            if (*(&D_800FC8AC_MushroomMixup + arrayOrStructIndex) != loopInteriorIteration) {
                var_v1 -= 1;
                arrayOrStructIndex = var_v1 * 2;
                if (var_v1 != 0) {
                    goto loop_4;
                }
            }
            // if (var_v1 == 0) {
                // goto block_7;
            //     if (randomByte != 0) {
            //         randomByte -= 1;
            //     }
            // }
            // continue; // goto block_9;
        }
        
// block_7:
        // conditionLessThanFour = loopInteriorIteration < 4;
        // if (randomByte != 0) { // loop condition???
        //     randomByte -= 1;
// block_9:
            // loopInteriorIteration += 1;
            // conditionLessThanFour = loopInteriorIteration < 4;
            // if (conditionLessThanFour != FALSE) {
            //     goto loop_2;
            // }
        }
        // if (conditionLessThanFour == FALSE) {
            loopInteriorIteration = loopIteration;
        // }
        *(&D_800FC8AE_MushroomMixup + (loopIteration * 2)) = loopInteriorIteration;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F6CF4_MushroomMixup);
#endif

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F6DF4_MushroomMixup);

void func_800F7088_MushroomMixup(s16 arg0) {
    func_80025EB4(arg0, 1, 1);
    func_80026040(arg0);
}

void func_800F70C4_MushroomMixup(void) {
    LoadFormBinary(ReadMainFS(0x2C0001), 0x20D);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F70F0_MushroomMixup);

void func_800F7188_MushroomMixup(s16 arg0) {
    PlaySound((s32) arg0);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F71A8_MushroomMixup);

s32 func_800F7574_MushroomMixup(void) {
    s32 index;
    s32 flags;

    index = 0; // goes from 0 -> 6

    // check if all flags are 1(?)
    flags = (s32) D_800FC98C_MushroomMixup; // is D_800FC98C_MushroomMixup a 1-byte array of length 6?
loop_1:
    if ((flags >> index) & 1) {
        index += 1;
        if (index >= NUM_OF_MUSHROOMS) {
            return TRUE;
        }
        goto loop_1;
    }
    return FALSE;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F75B0_MushroomMixup);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F7FCC_MushroomMixup);

u8 func_800F8260_MushroomMixup(omObjData* arg0) {
    s32 var_a1;

    var_a1 = 0;
    if ((arg0->trans.y < 50.0f) && (arg0->work[2] != 1)) {
        arg0->work[2] = 1;
    }
    if (arg0->work[2] != 0) {
        var_a1 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F82AC_MushroomMixup);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F846C_MushroomMixup);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F84F0_MushroomMixup);

void func_800F8840_MushroomMixup(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F8848_MushroomMixup);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F88AC_MushroomMixup);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F8A58_MushroomMixup);

void func_800F9364_MushroomMixup(omObjData* arg0) {
    if (D_800FC994_MushroomMixup != 0) {
        Center.x += D_800FC89C_MushroomMixup;
        Center.y += D_800FC99C_MushroomMixup;
        Center.z += D_800FC998_MushroomMixup;
        CZoom += D_800FC988_MushroomMixup;
        D_800FC994_MushroomMixup -= 1;
    }
    else {
        arg0->func_ptr = NULL;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F93F0_MushroomMixup);

#ifdef NON_EQUIVALENT
void func_800F9510_MushroomMixup(omObjData* arg0, s32 arg1) {
    // s16 a = arg0->unk_40->unk_00.signed16[0];
    f32 b = arg0->unk_18;
    f32 c = arg0->unk_1C;
    f32 d = arg0->unk_20;
    arg1 = arg0->unk_40->unk_00.signed32 * 2 + (arg1 * 2);
    return func_80025798(arg1, b, c, arg0->unk_20);
}
#else
INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F9510_MushroomMixup);
#endif

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F9548_MushroomMixup);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1A_MushroomMixup/1784E0", func_800F9890_MushroomMixup);

void func_800F9CF0_MushroomMixup(omObjData* arg0) {
    u8 temp_v0;
    u8 temp_v0_2;

    switch (arg0->work[0]) {
    case 0:
        temp_v0 = arg0->work[1];
        arg0->work[1] = temp_v0 + 1;
        if (temp_v0 >= 0x2E) {
            arg0->work[0] = 1;
            arg0->work[1] = 0;
        }
        CZoom = 2766.0f;
        CRot.x = 309.0f;
        CRot.y = 0.0f;
        CRot.z = 0.0f;
        Center.x = 4.0f;
        Center.y = 188.0f;
        Center.z = -219.0f;
        return;
    case 1:
        temp_v0_2 = arg0->work[1];
        arg0->work[1] = temp_v0_2 + 1;
        if (temp_v0_2 < 0x1E) {
            CZoom += 36.666668f;
            Center.x += 2.0f;
            return;
        }
        arg0->work[0] = 2;
    case 2:
        CZoom = 3866.0f;
        CRot.x = 309.0f;
        CRot.y = 0.0f;
        CRot.z = 0.0f;
        Center.x = 64.0f;
        Center.y = 188.0f;
        Center.z = -214.0f;
        arg0->func_ptr = NULL;
        return;
    }
}

void func_800F9E9C_MushroomMixup(omObjData* arg0) {
    arg0->work[0] = 0;
    arg0->work[1] = 0;
    arg0->func_ptr = &func_800F9CF0_MushroomMixup;
}
