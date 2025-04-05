#include "engine/process.h"
#include "286700.h"

Vec3f D_800F70D0_BowserVisitPeachBoard = {-115.0f, 0.0f, 1120.0f};
Vec3f D_800F70DC_BowserVisitPeachBoard[2] = {{30.0f, 350.0f, 1475.0f}, {30.0f, 120.0f, 1475.0f}};
Vec3f D_800F70F4_BowserVisitPeachBoard = {115.0f, 0.0f, 1520.0f};

s32 D_800F7100_BowserVisitPeachBoard[] = {0x00000003, 0x000A0068, 0x000A006A, 0x000A006C};
s32 D_800F7110_BowserVisitPeachBoard[] = {0x00000002, 0x0001003C, 0x0001003E};
s32 D_800F711C_BowserVisitPeachBoard[] = {0x00000002, 0x0002003C, 0x0002003E};
s32 D_800F7128_BowserVisitPeachBoard[] = {0x00000002, 0x0006003C, 0x0006003E};
s32 D_800F7134_BowserVisitPeachBoard[] = {0x00000002, 0x0003003C, 0x0003003E};
s32 D_800F7140_BowserVisitPeachBoard[] = {0x00000002, 0x0004003C, 0x0004003E};
s32 D_800F714C_BowserVisitPeachBoard[] = {0x00000002, 0x00050010, 0x00050010};
s32* D_800F7158_BowserVisitPeachBoard[] = {D_800F7110_BowserVisitPeachBoard, D_800F711C_BowserVisitPeachBoard, D_800F7128_BowserVisitPeachBoard, D_800F7134_BowserVisitPeachBoard, D_800F7140_BowserVisitPeachBoard, D_800F714C_BowserVisitPeachBoard};

void func_800F65E0_BowserVisitPeachBoard(void) {
    D_800F7180_BowserVisitPeachBoard = GwSystem.curPlayerIndex;
    omInitObjMan(50, 10);
    func_800F7008_BowserVisitPeachBoard();
    func_800F6E18_BowserVisitPeachBoard();
    func_800544E4();
    func_800546B4(0, GwPlayer[0].turn_status);
    func_800546B4(1, GwPlayer[1].turn_status);
    func_800546B4(2, GwPlayer[2].turn_status);
    func_800546B4(3, GwPlayer[3].turn_status);
    func_8006CEA0();
    omAddPrcObj(func_800F66BC_BowserVisitPeachBoard, 0x300, 0, 0);
    omAddObj(0x1000, 0, 0, -1, &func_800F6DCC_BowserVisitPeachBoard);
    func_80060128(18);
    SetFadeInTypeAndTime(3, 16);
}

void func_800F66BC_BowserVisitPeachBoard(void) {
    f32 var_f20;
    s32 temp_s1;

    HuPrcSleep(0x10);
    PlaySound(0x46A);
    HuPrcSleep(0xA);
    if (GwPlayer[D_800F7180_BowserVisitPeachBoard].coins == 0) {
        temp_s1 = CreateTextWindow(0x3C, 0x28, 0x10, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x1A0, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
        temp_s1 = CreateTextWindow(0x3C, 0x28, 0x0F, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x1A1, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        PlaySound(0x46A);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
    } else if (!(GwPlayer[D_800F7180_BowserVisitPeachBoard].coins >= 20)) {
        temp_s1 = CreateTextWindow(0x37, 0x28, 0x10, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x19D, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
        temp_s1 = CreateTextWindow(0x37, 0x28, 0x10, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x19E, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow( temp_s1);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
        MBMotionSet(D_800F7184_BowserVisitPeachBoard, 1, 0);
        func_8004F40C(D_800F7184_BowserVisitPeachBoard, 0, 2);
        MBMotionSet(D_800F718C_BowserVisitPeachBoard, 1, 0);
        func_80055960(D_800F7180_BowserVisitPeachBoard, -GwPlayer[D_800F7180_BowserVisitPeachBoard].coins);
        func_800503B0(D_800F7180_BowserVisitPeachBoard, 5);
        func_80060618(0x44A, D_800F7180_BowserVisitPeachBoard);
        HuPrcSleep(0x1E);
        temp_s1 = CreateTextWindow(0x64, 0x28, 0x0B, 2);
        LoadStringIntoWindow(temp_s1, (void* )0x19F, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        PlaySound(0x469);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
    } else {
        temp_s1 = CreateTextWindow(0x37, 0x28, 0x10, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x19A, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
        func_8004F4D4(D_800F7184_BowserVisitPeachBoard, 2, 0);
        func_8004F40C(D_800F7184_BowserVisitPeachBoard, 0, 2);
        HuPrcSleep(0x14);
        var_f20 = D_800F70DC_BowserVisitPeachBoard[0].y;

        while (D_800F70DC_BowserVisitPeachBoard[1].y <= var_f20) {
            D_800F7188_BowserVisitPeachBoard->unk_30 = var_f20;
            HuPrcVSleep();
            var_f20 -= 2.0f;
        }

        D_800F7188_BowserVisitPeachBoard->unk_30 = D_800F70DC_BowserVisitPeachBoard[1].y;
        D_800F7190_BowserVisitPeachBoard->work[0] = 1;
        HuPrcVSleep();
        MBMotionSet(D_800F7184_BowserVisitPeachBoard, 1, 0);
        func_8004F40C(D_800F7184_BowserVisitPeachBoard, 0, 2);
        HuPrcSleep(0x28);
        temp_s1 = CreateTextWindow(0x37, 0x28, 0x11, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x19B, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
        MBMotionSet(D_800F7184_BowserVisitPeachBoard, 1, 0);
        func_8004F40C(D_800F7184_BowserVisitPeachBoard, 0, 2);
        MBMotionSet(D_800F718C_BowserVisitPeachBoard, 0, 0);
        func_80055960(D_800F7180_BowserVisitPeachBoard, -20);
        func_800503B0(D_800F7180_BowserVisitPeachBoard, 5);
        func_80060618(0x44A, D_800F7180_BowserVisitPeachBoard);
        HuPrcSleep(0x1E);
        temp_s1 = CreateTextWindow(0x46, 0x28, 0x10, 3);
        LoadStringIntoWindow(temp_s1, (void* )0x19C, -1, -1);
        func_8006E070(temp_s1, 0);
        ShowTextWindow(temp_s1);
        PlaySound(0x469);
        func_8004DBD4(temp_s1, D_800F7180_BowserVisitPeachBoard);
        HideTextWindow(temp_s1);
    }

    D_800F5144 = 1;
    while (1) {
        HuPrcVSleep();
    }
}

void func_800F6C10_BowserVisitPeachBoard(omObjData* arg0) {
    Object* temp_s0;
    Object* temp_s0_2;
    Object* temp_s0_3;

    temp_s0 = D_800F7188_BowserVisitPeachBoard;
    temp_s0->unk_18.x = sinf(arg0->rot.x * (M_PI/180));
    temp_s0_2 = D_800F7188_BowserVisitPeachBoard;
    temp_s0_2->unk_18.z = cosf(arg0->rot.x * (M_PI/180));
    if ((arg0->work[0] == 0) || !(arg0->rot.x < -310.0f)) {
        arg0->rot.x = arg0->rot.x - 5.0f;
        if (arg0->rot.x <= -360.0f) {
            arg0->rot.x = arg0->rot.x + 360.0f;
        }
    } else {
        temp_s0_3 = D_800F7188_BowserVisitPeachBoard;
        temp_s0_3->unk_30 = ((sinf(arg0->rot.y * (M_PI/180))) * 4.0f) + D_800F70DC_BowserVisitPeachBoard[1].y;
        arg0->rot.y = arg0->rot.y + 5.0f;
        if (arg0->rot.y >= 360.0f) {
            arg0->rot.y -= 360.0f;
        }
    }
}

void func_800F6D80_BowserVisitPeachBoard(void) {
    if (func_80072718() == 0) {
        func_800F70A8_BowserVisitPeachBoard();
        func_800F6FBC_BowserVisitPeachBoard();
        func_80054654();
        func_80070ED4();
        omOvlReturnEx(1);
    }
}

void func_800F6DCC_BowserVisitPeachBoard(omObjData* arg0) {
    if (D_800F5144 != 0) {
        func_800726AC(3, 16);
        func_800601D4(32);
        arg0->func_ptr = &func_800F6D80_BowserVisitPeachBoard;
    }
}

void func_800F6E18_BowserVisitPeachBoard(void) {
    MBModelInit();
    func_8004F2AC();
    D_800F7184_BowserVisitPeachBoard = MBModelCreate(6, &D_800F7100_BowserVisitPeachBoard);
    D_800F7184_BowserVisitPeachBoard->coords.x = D_800F70D0_BowserVisitPeachBoard.x;
    D_800F7184_BowserVisitPeachBoard->coords.y = D_800F70D0_BowserVisitPeachBoard.y;
    D_800F7184_BowserVisitPeachBoard->coords.z = D_800F70D0_BowserVisitPeachBoard.z;
    D_800F7184_BowserVisitPeachBoard->zScale = 1.5f;
    D_800F7184_BowserVisitPeachBoard->yScale = 1.5f;
    D_800F7184_BowserVisitPeachBoard->xScale = 1.5f;
    D_800F7188_BowserVisitPeachBoard = MBModelCreate(0x80, NULL);
    D_800F7188_BowserVisitPeachBoard->coords.x = D_800F70DC_BowserVisitPeachBoard[0].x;
    D_800F7188_BowserVisitPeachBoard->coords.y = 0.0f;
    D_800F7188_BowserVisitPeachBoard->unk_30 = D_800F70DC_BowserVisitPeachBoard[0].y;
    D_800F7188_BowserVisitPeachBoard->coords.z = D_800F70DC_BowserVisitPeachBoard[0].z;
    D_800F7190_BowserVisitPeachBoard = omAddObj(0x1000, 0, 0, -1, &func_800F6C10_BowserVisitPeachBoard);
    D_800F7190_BowserVisitPeachBoard->rot.x = -12.0f;
    D_800F7190_BowserVisitPeachBoard->rot.y = 0.0f;
    D_800F7190_BowserVisitPeachBoard->work[0] = 0;
    D_800F7188_BowserVisitPeachBoard->unk_0A |= 1;
    D_800F718C_BowserVisitPeachBoard = MBModelCreate(func_80052F04(D_800F7180_BowserVisitPeachBoard), D_800F7158_BowserVisitPeachBoard[GwPlayer[D_800F7180_BowserVisitPeachBoard].character]);
    D_800F718C_BowserVisitPeachBoard->coords.x = D_800F70F4_BowserVisitPeachBoard.x;
    D_800F718C_BowserVisitPeachBoard->coords.y = D_800F70F4_BowserVisitPeachBoard.y;
    D_800F718C_BowserVisitPeachBoard->coords.z = D_800F70F4_BowserVisitPeachBoard.z;
    func_8004CCD0(&D_800F718C_BowserVisitPeachBoard->coords, &D_800F7184_BowserVisitPeachBoard->coords, &D_800F718C_BowserVisitPeachBoard->unk_18);
    func_8004CCD0(&D_800F7184_BowserVisitPeachBoard->coords, &D_800F718C_BowserVisitPeachBoard->coords, &D_800F7184_BowserVisitPeachBoard->unk_18);
}

void func_800F6FBC_BowserVisitPeachBoard(void) {
    omDelObj(D_800F7190_BowserVisitPeachBoard);
    MBModelKill(D_800F718C_BowserVisitPeachBoard);
    MBModelKill(D_800F7184_BowserVisitPeachBoard);
    MBModelKill(D_800F7188_BowserVisitPeachBoard);
    func_8004F2EC();
}

void func_800F7008_BowserVisitPeachBoard(void) {
    func_800178A0(1);
    func_80017660(0U, 0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT);
    func_800176C4(0U, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    LoadBackgroundData(FE2310_ROM_START);
    LoadBackgroundIndex(10);
}

void func_800F70A8_BowserVisitPeachBoard(void) {
    func_8004A140();
    func_80049F0C();
}
