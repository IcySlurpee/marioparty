#include "common.h"

typedef struct unk51200 {
/* 0x00 */ s32* unk0;
/* 0x04 */ u16 unk4;
/* 0x06 */ s16 unk6;
/* 0x08 */ s16 unk8;
/* 0x0A */ s16 unkA;
} unk51200;

typedef struct unkMallocStruct {
/* 0x00 */ s32* unk0;
/* 0x04 */ s16 unk4;
} unkMallocStruct;

extern s16 D_800C52F8;
extern s32 D_800C52FC;
extern unk51200* D_800D8370;
extern s32 D_800C52D0[];
extern s32 D_800C5314[];
extern s16 D_800C5320[];
extern s16 D_800C5324[];

//converts an ascii digit 0-9 to the actual value 0-9
#define ASCII_DIGIT_TO_INT(x) (x - '0')

void func_80050600(unk_Struct02* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    u8 asciiChar;
    void* temp_s6;
    s32 i;

    temp_s6 = ReadMainFS(0xA0122);
    sprintf(pfStrBuf, "%2d", arg2);
    for (i = 0; i < 2; i++, arg3 += 0x10) {
        asciiChar = pfStrBuf[i];
        if (asciiChar != ' ') {
            arg0->unk_0C[arg1] = func_800678A4(temp_s6);
            func_80067208(arg0->unk_0A, arg1, arg0->unk_0C[arg1], ASCII_DIGIT_TO_INT(asciiChar));
            func_80067384(arg0->unk_0A, arg1, 7U);
            func_800674BC(arg0->unk_0A, arg1, 0x01001000);
            func_80066DC4(arg0->unk_0A, arg1, arg3, arg4);
            func_80067558(arg0->unk_0A, arg1, 0xFFU, 0xFFU, 0xFFU, 0xFF);
            arg1++;
        }        
    }
    FreeMainFS(temp_s6);
}

unk_Struct02* func_8005077C(s16 arg0) {
    unk_Struct02* temp_s3;
    void* temp_v0;
    void* temp_v0_2;
    void* temp_v0_3;

    temp_s3 = func_800533F8(7, 0);
    temp_v0 = ReadMainFS(D_800C5314[GwSystem.playType]);
    temp_s3->unk_0C[0] = func_800678A4(temp_v0);
    func_80067208(temp_s3->unk_0A, 0, temp_s3->unk_0C[0], 0);
    func_80067384(temp_s3->unk_0A, 0, 7);
    func_800674BC(temp_s3->unk_0A, 0, 0x1000);
    func_80066DC4(temp_s3->unk_0A, 0, 0xA0, D_800C5320[arg0]);
    func_80067558(temp_s3->unk_0A, 0, 0xFF, 0xFF, 0xFF, 0xFF);
    FreeMainFS(temp_v0);
    temp_v0 = ReadMainFS(0xA0120);
    temp_s3->unk_0C[1] = func_800678A4(temp_v0);
    func_80067208(temp_s3->unk_0A, 1, temp_s3->unk_0C[1], 0);
    func_80067384(temp_s3->unk_0A, 1, 7);
    func_800674BC(temp_s3->unk_0A, 1, 0x1000);
    func_80066DC4(temp_s3->unk_0A, 1, 0x8C, D_800C5324[arg0]);
    func_80067558(temp_s3->unk_0A, 1, 0xFF, 0xFF, 0xFF, 0xFF);
    FreeMainFS(temp_v0);
    switch (GwSystem.playType) {
    case 1:
        func_80050600(temp_s3, 2, GwSystem.maxTurns, 0xCA, D_800C5320[arg0]);
        break;
    case 0:
    case 2:
        func_80050600(temp_s3, 2, GwSystem.maxTurns, 0xAD, D_800C5320[arg0]);
    }
    func_80050600(temp_s3, 4, GwSystem.currentTurn, 0xB6, D_800C5324[arg0]);
    temp_v0 = ReadMainFS(D_800C52D0[GwSystem.curBoardIndex]);
    temp_s3->unk_0C[6] = func_800678A4(temp_v0);
    func_80067208(temp_s3->unk_0A, 6, temp_s3->unk_0C[6], 0);
    func_80067384(temp_s3->unk_0A, 6, 7U);
    func_800674BC(temp_s3->unk_0A, 6, 0x1000);
    func_80066DC4(temp_s3->unk_0A, 6, 0xA0, 0x3C);
    FreeMainFS(temp_v0);
    return temp_s3;
}


void func_80050A7C(unk_Struct02* arg0) {
    func_80053454(arg0);
}

s32 func_80050A98(s32 arg0) {
    s32 var_s0;
    s32 temp_s1;
    unk_Struct02* temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    u16* temp_s0;

    temp_s1 = func_8003EDDC(&D_800C52FC);
    temp_s5 = func_80045D84(9, 0xAE, 0);
    temp_s4 = func_80045D84(5, 0xBC, 0);
    temp_s3 = func_8005077C(0);
    HuPrcVSleep();
    temp_s0 = &ContBtnTrg[arg0];

    while (1) {
        HuPrcVSleep();
        if (D_800C52F8 != 0) {
            if ((*temp_s0 & 2) != 0) {
            var_s0 = 3;
            break;
            }
        } else  {
             if (func_8003EE58(temp_s1) != 0) {
                PlaySound(0x466);
                D_800C52F8 = 1;
                continue;
            }  
        }

        if (*temp_s0 & 0x8000) {
            var_s0 = 4;
            break;
        } else if (*temp_s0 & 0x1000) {
            var_s0 = 0;
            break;
        }
    }

    func_80050A7C(temp_s3);
    func_80045E6C(temp_s5);
    func_80045E6C(temp_s4);
    func_8003EE3C(temp_s1);
    return var_s0;
}

void func_80050BE0(Object* arg0, s16 arg1) {
    Object* temp_v0;
    s16 temp_s1;
    s32 i;
    s16 new_var;

    temp_s1 = arg0->unk_0A;
    temp_v0 = arg0->prev;
    temp_v0->unk_34 = 20.0f;
    temp_v0->unk_38 = -2.5f;
    
    
    if (_CheckFlag(0x2C) == 0) {
        MBMotionSet(arg0->prev, 0, 0);
    }

    new_var = (arg1 - temp_s1) / 14;

    for (i = 0; i < 14; i++, HuPrcVSleep()) {
        temp_s1 = arg0->unk_0A;
        func_800484C4(arg0, temp_s1 + new_var);
    }

    func_800484C4(arg0, arg1);
    if (_CheckFlag(0x2C) == 0) {
        while (!(MBMotionCheck(arg0->prev))) {
            HuPrcVSleep();
        }
        MBMotionSet(arg0->prev, -1, 2);
    }
}

void func_80050D1C(s16 arg0, s32 arg1) {
    func_8006EB40(arg0);
    LoadStringIntoWindow(arg0, (void*)arg1, -1, -1);
}

void func_80050D68(void) {
    s16 temp_v0_2;
    s16 var_s0;
    s32* temp_s2;
    s16 temp;
    Process* process = HuPrcCurrentGet();

    temp_s2 = ((unk51200*)process->user_data)->unk0;
    temp = ((unk51200*)process->user_data)->unk4;
    var_s0 = -1;
    while (1) {
        temp_v0_2 = func_8007186C(temp);
        if ((temp_v0_2 != var_s0) & (~temp_v0_2 != 0)) {
            var_s0 = temp_v0_2;
            func_80050D1C(D_800D8370->unk8, temp_s2[temp_v0_2]);
        }
        HuPrcVSleep();        
    }
}

Process* func_80050E10(s16 arg0, s32* arg1) {
    Process* process;
    unkMallocStruct* processUserData;

    process = omAddPrcObj(&func_80050D68, 0x1005, 0, 0x40);
    processUserData = HuMemMemoryAlloc(process->heap, sizeof(unkMallocStruct));
    process->user_data = processUserData;
    processUserData->unk0 = arg1;
    processUserData->unk4 = arg0;
    return process;
}

INCLUDE_ASM("asm/nonmatchings/51200", func_80050E7C);

Process* func_80050E10(s16, s32*);
extern s32 D_800C5360[2];
extern s32 D_800C5368[2];



#ifdef NON_MATCHING
s32 func_80051198(s16 arg0) {
    Process* temp_s2;
    s16 temp_v0;
    s16 temp_v0_2;
    GW_SYSTEM* system = &GwSystem;

    temp_v0 = func_8006D010(0x5A, 0x50, 0xA2, 0x22, 0, 0);
    func_8006E0A4(temp_v0, 5);
    func_8006E154(temp_v0, 0);
    LoadStringIntoWindow(temp_v0, (void* )0x160, -1, -1);
    func_8006E070(temp_v0, 0);
    while ((func_8006FCC0(temp_v0)) != 0) {
        HuPrcVSleep();
    }
    if (_CheckFlag(0x2C) == 0) {
        temp_s2 = func_80050E10(temp_v0, D_800C5360);
    } else {
        temp_s2 = func_80050E10(temp_v0, D_800C5368);
    }
    func_8007155C(temp_v0, (0x10000 << arg0) >> 0x10); //?
    temp_v0_2 = func_8006FCF0(temp_v0, system->minigameExplanation, 0);
    if (temp_v0_2 >= 0) {
        system->minigameExplanation = temp_v0_2;
    }
    EndProcess(temp_s2);
    func_80070D90(temp_v0);
    return 4;
}
#else
INCLUDE_ASM("asm/nonmatchings/51200", func_80051198);
#endif

INCLUDE_ASM("asm/nonmatchings/51200", func_800512F4);

INCLUDE_ASM("asm/nonmatchings/51200", func_80051428);

INCLUDE_ASM("asm/nonmatchings/51200", func_80051548);

INCLUDE_ASM("asm/nonmatchings/51200", func_8005165C);

INCLUDE_ASM("asm/nonmatchings/51200", func_800516C8);

INCLUDE_ASM("asm/nonmatchings/51200", func_80051778);

INCLUDE_ASM("asm/nonmatchings/51200", func_8005188C);

INCLUDE_ASM("asm/nonmatchings/51200", func_80051898);

INCLUDE_ASM("asm/nonmatchings/51200", func_80051954);

INCLUDE_ASM("asm/nonmatchings/51200", func_80051AE0);

INCLUDE_ASM("asm/nonmatchings/51200", func_80052614);

INCLUDE_ASM("asm/nonmatchings/51200", func_800526D8);

INCLUDE_ASM("asm/nonmatchings/51200", func_800527A0);

INCLUDE_ASM("asm/nonmatchings/51200", func_80052934);
