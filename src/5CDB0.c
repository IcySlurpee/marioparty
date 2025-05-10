#include "common.h"
#include "engine/process.h"

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C1B0);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C208);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C2B0);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C384);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C390);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C3CC);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C3FC);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C4D0);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C52C);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C5E8);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C5F4);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C600);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C624);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C6F8);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005C834);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CC3C);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CD4C);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CD7C);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CDAC);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CDE0);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CE04);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CE48);

INCLUDE_ASM("asm/nonmatchings/5CDB0", func_8005CE8C);

void func_8005CEDC(s32 flag) {
    GwQuest.mgFlag[flag / 8] &= ~(1 << flag % 8);
}