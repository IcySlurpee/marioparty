#include "HammerDrop.h"

void func_800F65E0_HammerDrop(void) {
    func_800F67BC_HammerDrop();
    func_80029090(0x32);
    func_8002ADF0(&D_800EDEC0, 0x40);
    func_80009500();
    func_8001DE70(0x42);
    omInitObjMan(0x28, 0);
    func_80060088();
    omSetStatBit(omAddObj(0x7FDA, 0, 0, -1, omOutView), 0xA0);
    func_800F6848_HammerDrop(2370.0f, 324.0f, 0.0f, 0.0f, 0.0f, 205.0f, 0.0f);
    func_8005D98C(4, 4);
    omAddObj(0xA, 0, 0, -1, &func_800F6814_HammerDrop);
    omAddObj(2, 2, 0, -1, &func_800F690C_HammerDrop);
    omAddObj(2, 3, 0, -1, &func_800F6A54_HammerDrop);
    omAddObj(4, 0xA, 0x32, -1, &func_800F7488_HammerDrop);
    omAddObj(4, 0xA, 0x32, -1, &func_800F74A4_HammerDrop);
    omAddObj(4, 0xA, 0x32, -1, &func_800F74C0_HammerDrop);
    omAddObj(4, 0xA, 0x32, -1, &func_800F74DC_HammerDrop);
    func_8007B168(&D_800FB5C0_HammerDrop, 1);
    func_800F7D28_HammerDrop();
    func_800F9350_HammerDrop();
    func_800F8508_HammerDrop();
    SetFadeInTypeAndTime(0, 0x10);
}

void func_800F67BC_HammerDrop(void) {
    D_800ED440 = 0;
    D_800F2BC0 = 0;
    D_800EE984 = 0;
    D_800FB6C4_HammerDrop = 4;
    D_800FB98C_HammerDrop = 0;
    D_800FB988_HammerDrop = 0;
    D_800FB6C8_HammerDrop = _CheckFlag(MINIGAME_ISLAND_ENDING);
}

void func_800F6814_HammerDrop(void) {
    if (D_800F5144 != 0) {
        func_800601D4(40);
        omOvlReturnEx(1);
    }
}

void func_800F6848_HammerDrop(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    func_800178A0(1);
    CZoom = arg0;
    CRot.x = arg1;
    CRot.y = arg2;
    CRot.z = arg3;
    Center.x = arg4;
    Center.y = arg5;
    Center.z = arg6;
    D_800FB6CC_HammerDrop = 25.0f;
    func_8001D494(0, 25.0f, D_800C3110->unk_44, D_800C3110->unk_48);
}

void func_800F690C_HammerDrop(omObjData* arg0) {
    unkGlobalStruct_02* temp_s1;

    func_80017660(0, 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT);
    func_800176C4(0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    temp_s1 = func_80023684(sizeof(unkGlobalStruct_02), 0x7918);
    arg0->unk_50 = temp_s1;
    arg0->model[0] = func_800174C0(0x330001, 0x69D);
    arg0->model[1] = func_800174C0(0x170000, 0x699);
    arg0->model[2] = func_800174C0(0x170006, 0x699);
    func_800090B8(D_800ED440);
    D_800F2AF8[D_800ED440++] = arg0;
    func_8009B770(arg0->unk_50, 0, sizeof(unkGlobalStruct_02));
    temp_s1->unk_04 = 1;
    temp_s1->unk_05 = 0;
    arg0->func_ptr = &func_800FA2D8_HammerDrop;
}

void func_800F6A54_HammerDrop(omObjData* arg0) {
    arg0->unk_50 = func_80023684(sizeof(unkGlobalStruct_02), 0x7918);
    arg0->model[0] = LoadFormFile(0x380002, 0x48D);
    arg0->model[1] = LoadFormFile(0x380003, 0x48D);
    omSetTra(arg0, 0.0f, 1000.0f, 1000.0f);
    func_800FA2E0_HammerDrop();
    arg0->func_ptr = &func_800F6ADC_HammerDrop;
}

void func_800F6ADC_HammerDrop(void) {
    func_800FB050_HammerDrop();
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F6AF8_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F6F9C_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F736C_HammerDrop);

void func_800F7488_HammerDrop(omObjData* arg0) {
    func_800F6AF8_HammerDrop(arg0, 0);
}

void func_800F74A4_HammerDrop(omObjData* arg0) {
    func_800F6AF8_HammerDrop(arg0, 1);
}

void func_800F74C0_HammerDrop(omObjData* arg0) {
    func_800F6AF8_HammerDrop(arg0, 2);
}

void func_800F74DC_HammerDrop(omObjData* arg0) {
    func_800F6AF8_HammerDrop(arg0, 3);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F74F8_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F77E4_HammerDrop);

void func_800F7AD4_HammerDrop(omObjData *arg0) {
    f32 temp_f22;
    f32 temp;
    unkGlobalStruct_00* temp_s0 = arg0->unk_50;
    unk_Struct01* test2 = temp_s0->unk_E4;
    temp_f22 = temp_s0->unk_3C;
    (void) test2->unk_50;
    if (test2->unk_50 && temp_s0->unk_E4) {}
    rand8();
    temp = 70.0f;
    ContStkX[temp_s0->unk_56] = func_800AEAC0(temp_f22) * temp;
    ContStkY[temp_s0->unk_56] = func_800AEFD0(temp_f22) * -temp;
}

void func_800F7B6C_HammerDrop(omObjData* arg0) {
    unkGlobalStruct_00* temp_a0;
    s32 tempVar = 0x8000;

    temp_a0 = arg0->unk_50;
    ContBtnTrg[temp_a0->unk_56] |= tempVar;
    ContBtn[temp_a0->unk_56] |= tempVar;
}

void func_800F7BB4_HammerDrop(omObjData* arg0) {
    unkGlobalStruct_00* temp_a0;

    temp_a0 = arg0->unk_50;
    ContBtnTrg[temp_a0->unk_56] |= 0x2000;
    ContBtn[temp_a0->unk_56] |= 0x2000;
}

s32 func_800F7BFC_HammerDrop(omObjData* arg0, f32 arg1) {
    omObjData* temp_v0;
    f32 temp_f0, temp_f12, temp_f4, phi_f20;
    s32 phi_v0, phi_v1;
    s32 i;
    unk_Struct01* temp;

    D_800FB6A0_HammerDrop = -1;
    phi_f20 = 50000.0f;
    temp = ((unkGlobalStruct_00*) arg0->unk_50)->unk_E4;
    
    for (i = 0; i < 4; i++) {
         if (i != temp->unk_24) {
            temp_v0 = D_800FB998_HammerDrop[i];
            temp_f4 = (arg0->trans.x - temp_v0->trans.x) * (arg0->trans.x - temp_v0->trans.x);
            temp_f0 = (arg0->trans.z - temp_v0->trans.z) * (arg0->trans.z - temp_v0->trans.z);
            temp_f12 = sqrtf(temp_f4  + temp_f0);
             
            if (!(temp_f12 < arg1)) {
                phi_v0 = 0;
            } else {
                phi_v0 = 1;
            }
            
            if (!(temp_f12 < phi_f20)) {
                phi_v1 = 0;
            } else {
                phi_v1 = 1;
            }
             
            if (phi_v0 & phi_v1) {
                phi_f20 = temp_f12;
                D_800FB6A0_HammerDrop = i;
            }
        }       
    }
    return D_800FB6A0_HammerDrop;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7D28_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7D64_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7DEC_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7E28_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7EF4_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7F58_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7F90_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F7FFC_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F8080_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F813C_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F82E0_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F8394_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F84A0_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F8508_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F896C_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F9228_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F9350_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F95E8_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F9794_HammerDrop);

s32 func_800F9C1C_HammerDrop(omObjData* arg0, omObjData* arg1) {
    unkGlobalStruct_00* temp_s0;
    unkHammerDropStruct* temp_s2;
    unk_Struct01* temp_a1;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;

    D_800FB6A4_HammerDrop = 0;
    temp_s0 = arg0->unk_50;
    temp_a1 = temp_s0->unk_E4;
    temp_s2 = (unkHammerDropStruct*) ((unkGlobalStruct_00*) arg1->unk_50)->unk_68; // probably not an unkGlobalStruct_00*

    if (temp_s0->unkAE != 0) {
        return 0;
    }

    if (temp_s2->unk_38 == 2) {
        func_80060540(0x296, temp_a1->unk_24);

        if (arg0->trans.y < arg1->trans.y - temp_s2->unk_3C) {
            func_80018450(arg0, 1);
        }

        if (temp_s0->unkAE != 0) {
            D_800F370C++;
            return 1;
        }

        temp_f24 = arg1->trans.x - (arg0->trans.x + D_800ED6B8);
        temp_f22 = arg1->trans.z - (arg0->trans.z + D_800F5254);

        if (temp_s0->unk_50 & 0x200) {
            return 1;
        }

        temp_f20 = func_8000A72C(func_800AEAC0(temp_s0->unk_3C), func_800AEFD0(temp_s0->unk_3C), temp_f24, temp_f22);

        if (temp_s0->unk_50 & 0x20) {
            func_8000A534(arg0, D_800B8988);
        }

        if (temp_f20 > 0.0f) {
            func_800184BC(arg0, 9);
            temp_s0->unk_40 = -D_800B8980;
        } else {
            func_800184BC(arg0, 10);
            temp_s0->unk_40 = D_800B8980;
        }

        temp_s0->unk_38 = -D_800B8964 * 0.7f;
        temp_s0->unkAE = 105;

        func_80017C0C(arg0, 5, arg1->trans.x, arg0->trans.y, arg1->trans.z, 0, func_800B0CD8(temp_f24, temp_f22) + 180.0f);
        func_80060F04(temp_s0->unk_58, 2, 2, 20);
    }

    return D_800FB6A4_HammerDrop;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F9E68_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F9E74_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800F9E98_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800FA1AC_HammerDrop);

void func_800FA2D8_HammerDrop(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800FA2E0_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800FAA30_HammerDrop);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_1B_HammerDrop/17E710", func_800FB050_HammerDrop);
