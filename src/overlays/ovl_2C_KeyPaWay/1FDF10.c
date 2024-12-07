#include "KeyPaWay.h"

void func_800FE230_KeyPaWay(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    func_800178A0(1);
    func_800178E8();
    CZoom = arg1;
    CRot.x = arg2;
    CRot.y = arg3;
    CRot.z = arg4;
    Center.x = arg5;
    Center.y = arg6;
    Center.z = arg7;
    D_800C3110->unk_40 = arg0;
}

void func_800FE2E8_KeyPaWay(void) {
    s32 i;
    for (i = 0; i < D_800F3778; i++) {}
}

void func_800FE320_KeyPaWay(s32 arg0) { //just ignores the arg??
    omOvlReturnEx(1);
}

void func_800FE33C_KeyPaWay(void) {
    D_800EE738.unk_04 = 0;
    D_800EE738.unk_08 = 900.0f;
    D_800EE738.unk_00 = 0;
    D_800C3110->unk_40 = 20.0f;
    D_800EE738.unk_0C = 20.0f;
    D_800EE738.unk_10 = 20000.0f;
    D_800EE738.unk_14 = 10000.0f;
    func_8001D420(0, &D_800FF564_KeyPaWay, &D_800FF584_KeyPaWay, &D_800FF598_KeyPaWay);
    func_8001D57C(0);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE3DC_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE710_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE744_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE814_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE82C_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE858_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FE8EC_KeyPaWay);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_2C_KeyPaWay/1FDF10", func_800FEA28_KeyPaWay);
