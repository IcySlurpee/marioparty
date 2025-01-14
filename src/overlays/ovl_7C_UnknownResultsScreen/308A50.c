#include "common.h"

extern s16 D_800FA0D0_UnknownResultsScreen[];
extern s16 D_800FA0D8_UnknownResultsScreen[];
extern s16 D_800FA0F0_UnknownResultsScreen[];

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F65E0_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F6688_UnknownResultsScreen);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", D_800FA0A0_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F6724_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7310_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7614_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7754_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F79C8_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7A3C_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7A78_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7A9C_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7B3C_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7B60_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7BA0_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7BCC_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7BF8_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7C30_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7DB4_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F7F38_UnknownResultsScreen);

void func_800F8194_UnknownResultsScreen(void) {
    s32 i;

    for (i = 0; i < MAX_PLAYERS; i++) {
        D_800FA0F0_UnknownResultsScreen[i] = GwPlayer[i].coins;
        D_800FA0D0_UnknownResultsScreen[i] = GwPlayer[i].coins_mg;
        if ((GwPlayer[i].coins + D_800FA0D0_UnknownResultsScreen[i]) > 999) {
            D_800FA0D0_UnknownResultsScreen[i] = 999 - GwPlayer[i].coins;
        }
        if ((GwPlayer[i].coins + D_800FA0D0_UnknownResultsScreen[i] < 0)) {
            D_800FA0D0_UnknownResultsScreen[i] = -GwPlayer[i].coins;
        }
        GwPlayer[i].coins_total = GwPlayer[i].coins_total + GwPlayer[i].coins_mg;
        D_800FA0D8_UnknownResultsScreen[i] = GwPlayer[i].coins_mg;
        GwPlayer[i].coins_mg = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F82C4_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F8B44_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F90A4_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F9A98_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F9BCC_UnknownResultsScreen);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_7C_UnknownResultsScreen/308A50", func_800F9E68_UnknownResultsScreen);
