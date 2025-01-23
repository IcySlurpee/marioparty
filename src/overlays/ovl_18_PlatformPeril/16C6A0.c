#include "PlatformPeril.h"

void func_800F6F60_PlatformPeril(void) {
}

void func_800F6F68_PlatformPeril(void) {
    u8 temp_s0;

    func_800178A0(1);
    temp_s0 = func_800178E8();
    func_80017660(temp_s0, 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT);
    func_800176C4(temp_s0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    func_8001D494(0, 30.0f, 80.0f, 8000.0f);
    Center.x = D_800FDD74_PlatformPeril.unk4;
    Center.y = D_800FDD74_PlatformPeril.unk8;
    Center.z = D_800FDD74_PlatformPeril.unkC;
    CRot.x = D_800FDD74_PlatformPeril.unk10;
    CRot.y = D_800FDD74_PlatformPeril.unk14;
    CRot.z = D_800FDD74_PlatformPeril.unk18;
    CZoom = D_800FDD74_PlatformPeril.unk_00.float32;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F7070_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F76E4_PlatformPeril);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", D_800FDFD0_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F7868_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F815C_PlatformPeril);

void func_800F8218_PlatformPeril(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F8220_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F87A0_PlatformPeril);

void func_800F8AE8_PlatformPeril(omObjData* arg0) {
    arg0->trans.y = D_800FE1D8_PlatformPeril[arg0->work[0]]->trans.y + 50.0f;
    func_80025798(arg0->model[1], arg0->trans.x, D_800FE1D8_PlatformPeril[arg0->work[0]]->trans.y, arg0->trans.z);
    func_80025830(arg0->model[1], 0.7f, 0.7f, 0.7f);
}

void func_800F8B7C_PlatformPeril(void) {
    s32 i;
    D_800FE250_PlatformPeril = 0;
    
    for (i = 0; D_800FD8F4_PlatformPeril[i].unk_00.signed32 != 0; i++) {
        D_800EDE70[D_800EE984++] = omAddObj(0xA, 5, 5, -1, &func_800F8C2C_PlatformPeril);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F8C2C_PlatformPeril);

void func_800F90C0_PlatformPeril(void) {
    D_800FCDA0_PlatformPeril = 300.0f;
    D_800FE2B0_PlatformPeril.unk0 = 0;
    D_800FE2B0_PlatformPeril.unk4 = 0;
    D_800FE2B0_PlatformPeril.unk8 = 0;
    D_800FE2B0_PlatformPeril.unkC = 0;
    func_80009500();
    func_80009618(0);
    D_800B8955 = 0;
    func_8005D98C(2, 4);
    D_800F3FB0[D_800F2BC0++] = omAddObj(2, 9, 0x3C, 2, &func_800F94EC_PlatformPeril);
    D_800F3FB0[D_800F2BC0++] = omAddObj(2, 9, 0x3C, 2, &func_800F9598_PlatformPeril);
    D_800F3FB0[D_800F2BC0++] = omAddObj(2, 9, 0x3C, 2, &func_800F9644_PlatformPeril);
    D_800F3FB0[D_800F2BC0++] = omAddObj(2, 9, 0x3C, 2, &func_800F96F0_PlatformPeril);
}

void func_800F922C_PlatformPeril(omObjData* arg0, s32 arg1, s32 arg2, u16 arg3, f32 arg4, f32 arg5, f32 arg6) {
    unkGlobalStruct_00* temp_s0_2;
    s32 i;
    s32 temp = 0x699;

    func_8000979C(arg0, arg1, arg2, arg3, temp, temp);
    D_800FE2A0_PlatformPeril[arg3] = GwPlayer[arg3].cpu_difficulty;
    func_800187D0(arg0, 0, arg1, 1, 0);
    func_800187D0(arg0, 1, arg1 | 1, 1, 0);
    func_800187D0(arg0, 2, arg1 | 3, 1, 0);
    func_800187D0(arg0, 6, arg1 | 5, 1, 0x13);
    
    if (!(rand8() & 1)) {
        func_8001775C(arg0, 0xD, arg1 | 0xF);
        func_8001775C(arg0, 0xE, arg1 | 0x10);
    } else {
        func_8001775C(arg0, 0xD, arg1 | 0x38);
        func_8001775C(arg0, 0xE, arg1 | 0x3C);
    }
    
    func_8001874C(arg0, 0x15, arg1 | 0x62, 0, 0);
    arg0->trans.x = arg4;
    arg0->trans.y = arg5;
    arg0->trans.z = arg6;
    arg0->scale.x = 1.0f;
    arg0->scale.y = 1.0f;
    arg0->scale.z = 1.0f;
    MtxRotate(D_800F2B7C[arg0->model[0]].unk7C, 0, 180.0f, 0);
    func_80025830(arg0->model[1], arg0->scale.x, arg0->scale.y, arg0->scale.z);
    func_800257E4(arg0->model[1], arg0->rot.x, arg0->rot.y, arg0->rot.z);
    func_80025798(arg0->model[1], arg0->trans.x, 1.0f, arg0->trans.z);
    func_80025798(arg0->model[0], arg0->trans.x, arg0->trans.y, arg0->trans.z);
    temp_s0_2 = arg0->unk_50;
    func_80008FD0(arg0, 30.0f);
    arg0->func_ptr = &func_800F979C_PlatformPeril;
    arg0->work[0] = arg3;
    
    if (GwPlayer[arg3].flags & 1) { //checking if CPU?
        arg0->work[1] = 1;
    } else {
        arg0->work[1] = 0;
    }
    
    arg0->work[2] = 0;

    for (i = 0; i < 4; i++) {
        D_800FE1B0_PlatformPeril[i][1] = 0;
        D_800FE1B0_PlatformPeril[i][0] = 0;
    }
    temp_s0_2->unk_3C = 180.0f;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F94EC_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F9598_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F9644_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F96F0_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800F979C_PlatformPeril);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_18_PlatformPeril/16C6A0", func_800FAAE0_PlatformPeril);
