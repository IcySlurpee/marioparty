#include "common.h"

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003D960);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003D990);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003D9B8);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003DA04);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003DA58);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelInit);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelClose);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003DB1C);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelCreate);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003DE60);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003E040);

INCLUDE_ASM("asm/nonmatchings/3E560", func_8003E174);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelIDSet);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelParamCreate);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelAttrSetDispOn);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelDispOn);

void MBModelAttrSetDispOff(Object* arg0) {
    func_800258EC(*arg0->unk_3C->unk_40, 4, 4);
    if (arg0->unk_40 != NULL) {
        func_800258EC(*arg0->unk_40->unk_40, 4, 4);
    }
}

void MBModelDispOff(Object* arg0) {
    MBModelAttrSetDispOff(arg0);
    arg0->unk_0A &= ~8;
}

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelKill);

INCLUDE_ASM("asm/nonmatchings/3E560", MBModelCheck);

INCLUDE_ASM("asm/nonmatchings/3E560", MBMotionSet);

INCLUDE_ASM("asm/nonmatchings/3E560", MBMotionShiftSet);

INCLUDE_ASM("asm/nonmatchings/3E560", MBMotionCheck);
