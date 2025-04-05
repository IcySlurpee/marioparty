#include "PedalPower.h"

void func_800F65E0_PedalPower(void) {
    func_80029090(0x20);
    func_8002ADF0(&D_800EDEC0, 64);
    func_8001DE70(32);
    omInitObjMan(32, 0);
    func_80060088();
    omSetStatBit(omAddObj(0x7FDA, 0, 0, -1, omOutView), 160);
    func_8000942C();
    Center.x = 50.0f;
    Center.y = 200.0f;
    Center.z = -100.0f;
    CRot.x = CRot.y = CRot.z = 0.0f;
    CZoom = 1750.0f;
    func_800F67AC_PedalPower();
    func_800F6870_PedalPower();
    D_800FA72D_PedalPower = 0;
    D_800FA738_PedalPower = 0;
    D_800FA72C_PedalPower = 0;
    func_800F8EE0_PedalPower();
    func_800F79B0_PedalPower();
    func_800F6CF8_PedalPower();
    func_80023448(3);
    func_800234B8(0, 16, 16, 16);
    func_80023504(1, -43.0f, -18.0f, -110.0f);
    func_800234B8(1, 0, 0, 0);
    func_80023504(2, 9.0f, -17.0f, 118.0f);
    func_800234B8(2, 0, 0, 0);
    func_80023504(3, -43.0f, -18.0f, -110.0f);
    func_800234B8(3, 0, 0, 0);
    func_8002890C(0, 15, 0);
    SetFadeInTypeAndTime(0, 16);
}

void func_800F67AC_PedalPower(void) {
    s16 temp_s0;
    u8 temp_s1;

    func_800178A0(1);
    temp_s0 = func_800178E8();
    temp_s1 = temp_s0;
    func_80017660(temp_s1, 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT);
    func_800176C4(temp_s1, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    func_8001D494(temp_s0, 30.0f, 80.0f, 8000.0f);
}

void func_800F6870_PedalPower(void) {
    if (GMesStatAllGet() != 0) {
        GMesStatAllGet();
    }
}

void func_800F689C_PedalPower(s32 arg0, u32 arg1) {
    u32 new_var;
    switch (D_800ED430) {
    case 0:
        GMesStatAllGet();
        if (arg1 == 0) {
            GMesCreate(0);
            if (GMesStatAllGet() != 0) {
                GMesStatAllGet();
                break;
            }
        } else {
            if (arg1 >= 60) {
                func_80009458();
                break;
            }
        }
        break;
    case 1:
        do { (new_var = 0x384); } while (0); //required to match
        if (new_var == arg1) {
            func_80009438();
        }
        break;
    case 2:
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_0C_PedalPower/1217D0", func_800F6944_PedalPower);

void func_800F6CF8_PedalPower(void) {
    omAddObj(2, 2, 0, -1, &func_800F6D2C_PedalPower);
}

void func_800F6D2C_PedalPower(omObjData* arg0) {
    UnkPedalPowerStruct* temp_s1;

    arg0->unk_50 = func_80023684(sizeof(UnkPedalPowerStruct), 0x7918);
    func_8009B770(arg0->unk_50, 0, sizeof(UnkPedalPowerStruct));
    temp_s1 = arg0->unk_50;
    D_800FA73C_PedalPower.x = 400.0f;
    D_800FA73C_PedalPower.y = 250.0f;
    D_800FA73C_PedalPower.z = 600.0f;
    arg0->trans.x = 400.0f;
    arg0->trans.y = D_800FA73C_PedalPower.y;
    arg0->trans.z = D_800FA73C_PedalPower.z;
    arg0->scale.z = 1.2f;
    arg0->scale.y = 1.2f;
    arg0->scale.x = 1.2f;
    arg0->rot.y = -45.0f;
    arg0->func_ptr = &func_800F6ED0_PedalPower;
    arg0->model[0] = LoadFormFile(0xA0088, 0x649);
    func_80009340(arg0, 1, 0x26, 0x64D, 8);
    func_8001E360(temp_s1->unk_22, 255, 255, 255);
    func_8001E2F8(temp_s1->unk_22, 255);
    func_80025EB4(arg0->model[0], 2, 1);
    func_80021240(arg0->model[0]);
    func_80025798(arg0->model[0], arg0->trans.x, arg0->trans.y, arg0->trans.z);
    func_800257E4(arg0->model[0], arg0->rot.x, arg0->rot.y, arg0->rot.z);
    func_80025830(arg0->model[0], arg0->scale.x, arg0->scale.y, arg0->scale.z);
    func_80025830(arg0->model[1], 2.0f, 2.0f, 2.0f);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_0C_PedalPower/1217D0", func_800F6ED0_PedalPower);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_0C_PedalPower/1217D0", func_800F73CC_PedalPower);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_0C_PedalPower/1217D0", func_800F7618_PedalPower);
