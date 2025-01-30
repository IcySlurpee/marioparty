#include "common.h"

enum {
    PLATFORM_ITEM_NONE = 0,
    PLATFORM_ITEM_COIN = 1,
    PLATFORM_ITEM_MONEY_BAG = 2
};

typedef struct UnkTeeteringTowers0 {
    s32 unk_00;
    s32 unk_04;
    void* func; //
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    char unk_18[0xC];
} UnkTeeteringTowers0; //sizeof 0x24

typedef struct ItemOnPlatform {
/* 0x00 */ s32 type; //0 is none, 1 is coin, 2 is money bag
/* 0x04 */ Vec pos;
} ItemOnPlatform; //sizeof 0x10

typedef struct UnkTeeteringTowers1 {
/* 0x00 */ char unk_00[0x24];
/* 0x24 */ u8 unk_24;
/* 0x25 */ char unk_25[0xF];
/* 0x34 */ f32 unk_34;
/* 0x38 */ char unk_38[4];
/* 0x3C */ f32 unk_3C;
/* 0x40 */ char unk_40[4];
/* 0x44 */ f32 unk_44;
/* 0x48 */ f32 unk_48;
/* 0x4C */ char unk_4C[6];
/* 0x52 */ u8 unk_52;
/* 0x53 */ char unk_53[1];
/* 0x54 */ u8 unk_54;
/* 0x55 */ char unk_55[7];
/* 0x5C*/ s32 unk_5C;
/* 0x60 */ s32 unk_60;
/* 0x64 */ char unk_64[8];
} UnkTeeteringTowers1; //sizeof 0x6C

extern s32 D_800FADC0_TeeteringTowers;
extern ItemOnPlatform D_800FB1E0_TeeteringTowers[9];
extern omObjData* D_800EDE70[];
extern u16 D_800EE984; //obj count
extern s32 D_800FA948_TeeteringTowers;
extern UnkTeeteringTowers0 D_800FA958_TeeteringTowers[];
extern s32 D_800FAD70_TeeteringTowers[]; //array for items on spaces

void func_800F8DC0_TeeteringTowers(omObjData*);
void func_800091BC(omObjData*, s32, s32, s32);
void func_8002346C(s32, s32, s32);
void func_800F6C44_TeeteringTowers(s32*, s32*);
void func_800F7A94_TeeteringTowers(omObjData*);
void func_800F8AF4_TeeteringTowers(omObjData*);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F65E0_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F6748_TeeteringTowers);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", D_800FAFE0_TeeteringTowers);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", D_800FAFEC_TeeteringTowers);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", D_800FAFFC_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F6780_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F6C20_TeeteringTowers);

//swap
void func_800F6C44_TeeteringTowers(s32* arg0, s32* arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    *arg0 = *arg1;
    *arg1 = temp_v1;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F6C58_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F6CA0_TeeteringTowers);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", D_800FB030_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F6CE4_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F773C_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F77E4_TeeteringTowers);

void func_800F7864_TeeteringTowers(void) {
    s32 i;
    //15 platforms total, dont include the starting one?
    for (i = 0; i < 14; i++) {
        //swap item between 2 platforms
        func_800F6C44_TeeteringTowers(&D_800FAD70_TeeteringTowers[i], &D_800FAD70_TeeteringTowers[rand8() % 14]);
    }

    D_800FA948_TeeteringTowers = 0;

    func_800090B8(D_800ED440);
    func_80023448(3);
    func_800234B8(0, 0xFF, 0xFF, 0xFF);
    func_8002346C(0, 1, 1);
    func_800234B8(1, 0, 0, 0xC8);
    func_8002346C(1, 1, 0);
    func_80023504(1, 0.0f, 36.0f, -114.0f);
    func_800234B8(2, 0, 0, 0);
    func_80023504(2, 0.0f, 100.0f, 65.0f);
    func_8002346C(2, 1, 0);
    func_800234B8(3, 0, 0, 0);
    func_80023504(3, 0.0f, -35.0f, 114.0f);
    func_8002346C(3, 1, 0);
    for (i = 0; D_800FA958_TeeteringTowers[i].unk_00 != 0; i++) {
        omAddObj(5, 3, 1, -1, &func_800F7A94_TeeteringTowers);
    }

    //only spawn 3 items? (coin/money bag)
    for (i = 0; i < 3; i++) {
        D_800EDE70[D_800EE984++] = omAddObj(6, 3, 0, -1, &func_800F8AF4_TeeteringTowers);
    }

}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F7A94_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F7EE4_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F7FF0_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F8094_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F8330_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F83F4_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F85EC_TeeteringTowers);

void func_800F8AF4_TeeteringTowers(omObjData* arg0) {
    UnkTeeteringTowers1* temp_v0_2;
    
    arg0->trans.x = D_800FB1E0_TeeteringTowers[D_800FADC0_TeeteringTowers].pos.x;
    arg0->trans.y = D_800FB1E0_TeeteringTowers[D_800FADC0_TeeteringTowers].pos.y + 50.0f;
    arg0->trans.z = D_800FB1E0_TeeteringTowers[D_800FADC0_TeeteringTowers].pos.z;
    arg0->func_ptr = &func_800F8DC0_TeeteringTowers;
    arg0->work[3] = 0;
    arg0->work[2] = 0;
    arg0->work[1] = 0;
    arg0->work[0] = 0;
    arg0->model[0] = -1;
    temp_v0_2 = arg0->unk_50 = func_80023684(sizeof(UnkTeeteringTowers1), 0x7918);
    func_8009B770(temp_v0_2, 0, 0x6C);
    if (D_800FB1E0_TeeteringTowers[D_800FADC0_TeeteringTowers].type == PLATFORM_ITEM_MONEY_BAG) {
        func_800091BC(arg0, 0x37, 0x289, 8);
        func_80009340(arg0, 2, 0x25, 0x289, 8);
        func_80009340(arg0, 3, 0x2A, 0x689, 8);
        func_8001E360(temp_v0_2->unk_24, 0xFF, 0xFF, 0xBE);
        func_8000941C(arg0, 4.5f, 4.5f, 4.5f);
        func_80025830(arg0->model[3], 2.0f, 2.0f, 2.0f);
        temp_v0_2->unk_52 = 6;
    } else {
        func_800091BC(arg0, 0x21, 0x289, 8);
        func_80009340(arg0, 2, 0x25, 0x289, 8);
        func_80009340(arg0, 3, 0x2A, 0x689, 8);
        func_8001E360(temp_v0_2->unk_24, 0xFF, 0xFF, 0xBE);
        func_8000941C(arg0, 4.5f, 4.5f, 4.5f);
        func_80025830(arg0->model[3], 2.0f, 2.0f, 2.0f);
        temp_v0_2->unk_52 = 3;
    }
    arg0->model[1] = func_800174F4(0x2B0004, 0xA99);
    func_80025798(arg0->model[1], arg0->trans.x, arg0->trans.y - 35.0f, arg0->trans.z);
    func_80025830(arg0->model[1], 1.5f, 1.5f, 1.5f);
    func_800211BC(arg0->model[1], 0x32);
    temp_v0_2->unk_5C = 0;
    temp_v0_2->unk_60 = 60;
    temp_v0_2->unk_44 = 0.1f;
    temp_v0_2->unk_48 = 200.0f;
    temp_v0_2->unk_34 = 50.0f;
    temp_v0_2->unk_3C = 0;
    temp_v0_2->unk_54 = 1;
    D_800FADC0_TeeteringTowers++;
}


INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F8DC0_TeeteringTowers);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", func_800F8E20_TeeteringTowers);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_19_TeeteringTowers/1738E0", D_800FB0E8_TeeteringTowers);
