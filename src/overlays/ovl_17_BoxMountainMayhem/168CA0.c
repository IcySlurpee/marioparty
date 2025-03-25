#include "common.h"

extern s32 D_800FC088_BoxMountainMayhem;

void func_800F9060_BoxMountainMayhem(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F9068_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F90A8_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F918C_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F935C_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F96A4_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F9840_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800F9C20_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FA058_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FA2A0_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FA2FC_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FA3F0_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FA498_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FAB1C_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FAB60_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FAD84_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FAF84_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FAF98_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FAFC8_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FB1BC_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FB440_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FB4E8_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FB598_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FB788_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FB9B4_BoxMountainMayhem);

//direct copy of frandom from mario party 4
u32 func_800FBC58_BoxMountainMayhem(u32 param) {
    s32 rand2, rand3;

    if (param == 0) {
        param = rand8();
        param = param ^ osGetCount();
        param ^= 0xD826BC89;
    }

    rand2 = param / 0x1F31D;
    rand3 = param - (rand2 * 0x1F31D);
    param = rand2 * 0xB14;
    param =  param - rand3 * 0x41A7;
    return param;
}

void func_800FBD2C_BoxMountainMayhem(void) {
    D_800FC088_BoxMountainMayhem = func_800FBC58_BoxMountainMayhem(D_800FC088_BoxMountainMayhem);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FBD54_BoxMountainMayhem);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_17_BoxMountainMayhem/168CA0", func_800FBE9C_BoxMountainMayhem);
