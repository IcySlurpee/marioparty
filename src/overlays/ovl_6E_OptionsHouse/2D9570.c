#include "OptionsHouse.h"

void func_800F65E0_OptionsHouse() {
    InitCameras(1);
    omInitObjMan(0x20, 4);
    omSetStatBit(omAddObj(0x7FDA, 0U, 0U, -1, func_80059EBC), 0xA0);
    D_800F384C = 0;
    func_8006CEA0();
    func_800234B8(0U, 0U, 0U, 0U);
    func_800234B8(1U, 0U, 0U, 0U);
    func_800F6BFC_OptionsHouse();
    func_800F6C90_OptionsHouse();
    D_800F8314_OptionsHouse = omAddPrcObj(func_800F6750_OptionsHouse, 0xAU, 0, 0);
    SetFadeInTypeAndTime(0xFF, 8);
    func_8005AF60();
    D_800F8310_OptionsHouse = func_80059C28();
    func_80060128(5);
}

void func_800F66C4_OptionsHouse(s32 arg0) {
    D_800ED610 = &D_800F7EA0_OptionsHouse[arg0];
    D_800ED72C = &D_800F7F24_OptionsHouse[arg0];
}

void func_800F66FC_OptionsHouse(void* arg0) {
    func_8006EB40(D_800F8310_OptionsHouse);
    func_8006E288(D_800F8310_OptionsHouse, 7);
    LoadStringIntoWindow(D_800F8310_OptionsHouse, arg0, -1, -1);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", func_800F6750_OptionsHouse);

void func_800F6A78_OptionsHouse(omObjData* arg0) {
    if ((D_800F5144 != 0) || (D_800F800C_OptionsHouse != 0)) {
        func_80072724(0xFF, 0xFF, 0xFF);
        func_800601D4(0x1E);
        if (D_800F800C_OptionsHouse != 0) {
            func_800726AC(0, 0x28);
        } else {
            func_800726AC(0, 4);
        }
        arg0->func_ptr = &func_800F6AFC_OptionsHouse;
    }
}

void func_800F6AFC_OptionsHouse() {
    s16 var_a0;

    if (func_80072718() == 0) {
        func_80070ED4();
        if (D_800F800C_OptionsHouse != 0) {
            func_8005B060();
            var_a0 = 2;
        } else {
            func_8005B244();
            var_a0 = 1;
        }
        omOvlReturnEx(var_a0);
    }
}

void func_800F6B5C_OptionsHouse(omObjData* arg0) {
    arg0->model[0] = func_800174C0(0x90056, 0x2B9);
    arg0->model[1] = func_800174C0(0x90057, 0x2B9);
    arg0->model[2] = func_800174C0(0x90058, 0x2B9);

    arg0->trans.x = arg0->trans.y = arg0->trans.z = 0.0f;
    func_80025798((s16) arg0->model[0], 0.0f, arg0->trans.y, arg0->trans.z);
    arg0->func_ptr = &func_800F6A78_OptionsHouse;
}

void func_800F6BFC_OptionsHouse() {
    CRot.x = 0.0f;
    CRot.y = 180.0f;
    CRot.z = 0.0f;
    Center.x = 0.0f;
    Center.y = 180.0f;
    Center.z = 650.0f;

    func_800F66C4_OptionsHouse(0);
    func_80023504(1, -10.0f, 69.0f, 69.0f);
    omAddObj(1, 4U, 0U, -1, func_800F6B5C_OptionsHouse);
}

void func_800F6C90_OptionsHouse() {
    omObjData* temp_v0;
    s16 var_a0;
    s16 var_a1;

    temp_v0 = omAddObj(1, 1U, 3U, -1, NULL);
    D_800F8318_OptionsHouse = temp_v0;
    *temp_v0->model = LoadFormFile(0x9005E, 0x2B9);
    func_80025EB4(*temp_v0->model, 2, 2);
    temp_v0->motion[0] = func_80025E48(*temp_v0->model);
    temp_v0->motion[1] = func_8005A22C(0x9005F);
    temp_v0->motion[2] = func_8005A22C(0x90060);
    temp_v0->trans.x = 0.0f;
    temp_v0->trans.y = 80.0f;
    temp_v0->trans.z = -323.0f;
    temp_v0->scale.x = temp_v0->scale.y = temp_v0->scale.z = 1.0f;
    temp_v0->rot.x = 0.0f;
    temp_v0->rot.y = 0.0f;
    temp_v0->rot.z = 0.0f;

    temp_v0 = omAddObj(1, 1U, 2U, -1, NULL);
    D_800F831C_OptionsHouse = temp_v0;
    *temp_v0->model = LoadFormFile(0x90061, 0x2B9);
    func_80025EB4(*temp_v0->model, 2, 2);
    temp_v0->motion[0] = func_80025E48(*temp_v0->model);
    temp_v0->motion[1] = func_8005A22C(0x90062);
    if (_CheckFlag(0x23) == 0) {
        func_800258EC(*temp_v0->model, 4, 4);
    }
    temp_v0->trans.x = -430.0f;
    temp_v0->trans.y = 240.0f;
    temp_v0->trans.z = -100.0f;
    temp_v0->scale.x = temp_v0->scale.y = temp_v0->scale.z = 1.0f;
    temp_v0->rot.x = 0.0f;
    temp_v0->rot.y = 0.0f;
    temp_v0->rot.z = 0.0f;

    temp_v0 = omAddObj(1, 1U, 2U, -1, NULL);
    D_800F8320_OptionsHouse = temp_v0;
    *temp_v0->model = LoadFormFile(0x9005C, 0x2B9);
    temp_v0->motion[0] = func_80025E48(*temp_v0->model);
    temp_v0->motion[1] = func_8005A22C(0x9005D);
    if (_CheckFlag(0x10) != 0) {
        func_8002888C(*temp_v0->model, temp_v0->motion[0]);
    } else {
        func_8002888C(*temp_v0->model, temp_v0->motion[1]);
    }
    func_80025EB4(*temp_v0->model, 0, 0);
    temp_v0->trans.x = temp_v0->trans.y = temp_v0->trans.z = 0.0f;
    temp_v0->scale.x = temp_v0->scale.y = temp_v0->scale.z = 1.0f;
    temp_v0->rot.x = temp_v0->rot.y = temp_v0->rot.z = 0.0f;

    temp_v0 = omAddObj(1, 1U, 2U, -1, NULL);
    D_800F8324_OptionsHouse = temp_v0;
    *temp_v0->model = LoadFormFile(0x9005A, 0x2B9);
    temp_v0->motion[0] = func_80025E48(*temp_v0->model);
    temp_v0->motion[1] = func_8005A22C(0x9005B);
    func_8002888C(*temp_v0->model, temp_v0->motion[1]);
    func_80025EB4(*temp_v0->model, 0, 0);
    temp_v0->trans.x = temp_v0->trans.y = temp_v0->trans.z = 0.0f;
    temp_v0->scale.x = temp_v0->scale.y = temp_v0->scale.z = 1.0f;
    temp_v0->rot.x = temp_v0->rot.y = temp_v0->rot.z = 0.0f;
}

void func_800F7020_OptionsHouse() {
    TextWindow* temp_v0_2;
    s16 temp_v0;
    s32 temp_v0_3;

    func_800F66C4_OptionsHouse(5);
    func_80025C20(*D_800F8318_OptionsHouse->model, D_800F8318_OptionsHouse->motion[1], 0, 0xA, 0);
    func_800F66FC_OptionsHouse(0x450);
    HuPrcSleep(0x1E);
    func_80025C20(*D_800F8318_OptionsHouse->model, *D_800F8318_OptionsHouse->motion, 0, 0xA, 2);

    while (func_8006FCC0(D_800F8310_OptionsHouse) != 0) {
        HuPrcVSleep();
    }

    if (func_8006FCF0(D_800F8310_OptionsHouse, 0, 0) != 1) {
        func_80025C20(*D_800F8318_OptionsHouse->model, D_800F8318_OptionsHouse->motion[1], 0, 0xA, 0);
        func_800F66FC_OptionsHouse(0x451);
        HuPrcSleep(0x1E);
        func_80025C20(*D_800F8318_OptionsHouse->model, *D_800F8318_OptionsHouse->motion, 0, 0xA, 2);

        while (func_8006FCC0(D_800F8310_OptionsHouse) != 0) {
            HuPrcVSleep();
        }

    } else {
        func_80025C20(*D_800F8318_OptionsHouse->model, D_800F8318_OptionsHouse->motion[2], 0, 0xA, 1);
        HuPrcSleep(5);
        func_8002888C(*D_800F8318_OptionsHouse->model, D_800F8318_OptionsHouse->motion[2]);
        func_8005A258(*D_800F8318_OptionsHouse->model);
        HuPrcSleep(5);
        func_800F66C4_OptionsHouse(0xA);
        HuPrcSleep(0x28);
        func_8002888C(*D_800F8324_OptionsHouse->model, *D_800F8324_OptionsHouse->motion);
        PlaySound(0x1E);
        func_80060F04(0, 5, 0, 5);
        func_8005A258(*D_800F8324_OptionsHouse->model);
        temp_v0 = func_8006D010(0x39, 0x38, 0xCE, 0x5A, 0, 0);
        temp_v0_2 = func_8006DD60(temp_v0);
        temp_v0_2->unk_04 = 0;
        temp_v0_2->unk_03 = 0;
        LoadStringIntoWindow(temp_v0, 0x452, -1, -1);
        func_800F66FC_OptionsHouse(0x453);

        while (func_8006FCC0(D_800F8310_OptionsHouse) != 0) {
            HuPrcVSleep();
        }

        if (func_8006FCF0(D_800F8310_OptionsHouse, 0, 0) == 1) {
            func_80070D90(temp_v0);
            func_800F66FC_OptionsHouse(0x454);

            while (func_8006FCC0(D_800F8310_OptionsHouse) != 0) {
                HuPrcVSleep();
            }

            while (!((temp_v0_3 = func_80059CB8()) & 0x4000)) {
                if (temp_v0_3 & 0x1000) {
                    PlaySound(0x20);
                    D_800F800C_OptionsHouse = 1;
                    while (TRUE) {
                        HuPrcVSleep();
                    }
                }
                HuPrcVSleep();
            }
            func_8002888C(*D_800F8324_OptionsHouse->model, D_800F8324_OptionsHouse->motion[1]);
            func_80025C20(*D_800F8318_OptionsHouse->model, *D_800F8318_OptionsHouse->motion, 0, 0xA, 2);
        } else {
            func_80070D90(temp_v0);
            func_8002888C(*D_800F8324_OptionsHouse->model, D_800F8324_OptionsHouse->motion[1]);
            func_80025C20(*D_800F8318_OptionsHouse->model, *D_800F8318_OptionsHouse->motion, 0, 0xA, 2);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", func_800F73B0_OptionsHouse);

void func_800F74C0_OptionsHouse() {
    s32 temp_s0;

    D_800F8010_OptionsHouse = -1;
    func_80060198();

    if (D_800F8012_OptionsHouse == 0) {
        temp_s0 = PlaySound(0x23);
    } else {
        temp_s0 = PlaySound(0xA3);
    }

    while (func_800115C8(temp_s0) != 0) {
        HuPrcVSleep();
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", func_800F752C_OptionsHouse);

void func_800F75D4_OptionsHouse() {
    if (D_800F8012_OptionsHouse == 0) {
        PlaySound(0xF5);
    } else {
        PlaySound(0x21);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", func_800F7604_OptionsHouse);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", func_800F7ACC_OptionsHouse);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", func_800F7CE0_OptionsHouse);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", D_800F82F4_OptionsHouse);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_6E_OptionsHouse/2D9570", D_800F8308_OptionsHouse);
