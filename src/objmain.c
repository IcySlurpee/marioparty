#include "common.h"
#include "engine/process.h"

extern s16 omovlhisidx;
extern s16 D_800D89B2[];
extern s16 D_800ED56C;
extern s16 D_800ED550;
extern omObjData* D_800C5984;
extern s16 D_800F65BA;
extern s16 D_800ED56C;
extern s16 D_800C598A;
extern s16 D_800C5988;
extern s16 D_800C598C; //dtor index
extern u16 D_800C5976;
extern unkProcessStruct* D_800C5990;
extern s16 D_800C5996;
extern u16 D_800C5998;

s16 func_80010ED4(s16, s16);
s32 func_80012C7C(s16);
void func_8005DA64(u16, omObjData*);
void omInsertObj(omObjData*);

INCLUDE_ASM("asm/nonmatchings/objmain", omInitObjMan);

INCLUDE_ASM("asm/nonmatchings/objmain", omDestroyObjMan);

omObjData* omAddObj(s16 arg0, u16 arg1, u16 arg2, s16 arg3, void* arg4) {
    omObjData* temp_s0;

    if (D_800ED56C == D_800ED550) {
        return NULL;
    }

    temp_s0 = &D_800C5984[D_800F65BA];
    temp_s0->next_idx_alloc = D_800F65BA;
    temp_s0->prio = arg0;
    omInsertObj(temp_s0);

    if (arg1 != 0) {
        temp_s0->model = func_80023684(arg1 * sizeof(s16), 0x7918);
        temp_s0->mdlcnt = arg1;
    } else {
        temp_s0->model = NULL;
        temp_s0->mdlcnt = 0;
    }

    if (arg2 != 0) {
        temp_s0->motion = func_80023684(arg2 * sizeof(s16), 0x7918);
        temp_s0->mtncnt = arg2;
    } else {
        temp_s0->motion = NULL;
        temp_s0->mtncnt = 0;
    }

    if (arg3 >= 0) {
        func_8005DA64(arg3, temp_s0);
    } else {
        temp_s0->group = arg3;
        temp_s0->group_idx = 0;
    }

    temp_s0->stat = 4;
    temp_s0->unk_10 = 0;
    temp_s0->func_ptr = arg4;
    temp_s0->work[0] = temp_s0->work[1] = temp_s0->work[2] = temp_s0->work[3] = 0;

    D_800F65BA = temp_s0->next_idx;
    D_800ED56C++;

    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/objmain", omSetObjPrio);

INCLUDE_ASM("asm/nonmatchings/objmain", omInsertObj);

INCLUDE_ASM("asm/nonmatchings/objmain", omDelObj);

INCLUDE_ASM("asm/nonmatchings/objmain", omSetStat);

INCLUDE_ASM("asm/nonmatchings/objmain", omSetStatBit);

INCLUDE_ASM("asm/nonmatchings/objmain", omResetStatBit);

INCLUDE_ASM("asm/nonmatchings/objmain", omPrcSetStat);

INCLUDE_ASM("asm/nonmatchings/objmain", omPrcSetStatBit);

INCLUDE_ASM("asm/nonmatchings/objmain", omPrcResetStatBit);

INCLUDE_ASM("asm/nonmatchings/objmain", omSetTra);

INCLUDE_ASM("asm/nonmatchings/objmain", omSetRot);

INCLUDE_ASM("asm/nonmatchings/objmain", omSetSca);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005D98C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DA64);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DAD4);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DB44);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DB5C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DB84);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DBE4);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005DC18);

Process* omAddPrcObj(void (*func)(), u16 priority, s32 stack_size, s32 extra_data_size) {
    unkProcessStruct* temp_s0;
    Process* process;
    s16 temp_s1;
    
    if (D_800C598A != D_800C5988) {
        temp_s1 = D_800C598C;
        temp_s0 = &D_800C5990[D_800C598C];
        temp_s0->unk0 = 4;
        D_800C598C = temp_s0->unk2;
        process = HuPrcCreate(*func, priority, stack_size, extra_data_size);
        temp_s0->processInstance = process;
        process->dtor_idx = temp_s1;
        HuPrcDestructorSet2(temp_s0->processInstance, &omDelPrcObj);
        temp_s0->unk8 = 0;
        D_800C598A++;
        return temp_s0->processInstance;
    } else {
        return NULL;
    }
}

Process* func_8005DCD8(process_func arg0, u16 arg1, s32 arg2, s32 arg3, Process* arg4) {
    unkProcessStruct* temp_s0;
    Process* process;
    s16 temp_s1;
    
    if (D_800C598A != D_800C5988) {
        temp_s1 = D_800C598C;
        temp_s0 = &D_800C5990[D_800C598C];
        temp_s0->unk0 = 4;
        D_800C598C = temp_s0->unk2;
        process = HuPrcChildCreate(arg0, arg1, arg2, arg3, arg4);
        temp_s0->processInstance = process;
        process->dtor_idx = temp_s1;
        HuPrcDestructorSet2(temp_s0->processInstance, omDelPrcObj);
        temp_s0->unk8 = 0;
        D_800C598A++;
        return temp_s0->processInstance;
    }
    
    return NULL;
}

s32 EndProcess(Process* arg0) {
    if (arg0 != NULL) {
        return HuPrcKill(arg0);
    }
    
    if (HuPrcKill(HuPrcCurrentGet()) == 0) {
        HuPrcVSleep();
    }
    
    return -1;
}

void omDelPrcObj(void) {
    Process* temp_s1 = HuPrcCurrentGet();
    unkProcessStruct* temp_s0 = &D_800C5990[temp_s1->dtor_idx];
    
    if (temp_s0->unk8 != 0) {
        (temp_s0->unk8)();
    }
    
    temp_s0->unk0 = 1;
    temp_s0->unk2 = D_800C598C;
    D_800C598C = temp_s1->dtor_idx;
    D_800C598A--;
}

void omDestroyPrcObj(s32 arg0, void (*arg1)()) {
    unkProcessStruct* temp = &D_800C5990[HuPrcCurrentGet()->dtor_idx];
    temp->unk8 = arg1;
}

void omPrcSetDestructor(void) {
    unkProcessStruct* var_v1 = D_800C5990;
    s32 i;
    
    for (i = 0; i < D_800C5988; i++) {
        if ((var_v1->unk0 & 4) && (var_v1->processInstance->exec_mode == EXEC_PROCESS_DEAD)) {
            var_v1->unk0 = 1;
            var_v1->unk2 = D_800C598C;
            D_800C598C = i;
            D_800C598A--;
        }
        var_v1++;
    }
}

s32 omOvlCallEx(s32 arg0, s16 arg1, u16 arg2) {
    omOvlHisData* history;
    s32 ret;

    if (omovlhisidx < ARRAY_COUNT(omovlhis)) {
        history = &omovlhis[++omovlhisidx];
        history->overlayID = arg0;
        history->event = arg1;
        history->stat = arg2;
        omOvlGotoEx(arg0, arg1, arg2);
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

s32 omOvlReturnEx(s16 level) {
    omovlhisidx -= level;
    
    if (omovlhisidx < 0) {
        omovlhisidx = 0;
        omOvlGotoEx(omovlhis[0].overlayID, omovlhis[0].event, omovlhis[0].stat);
        return 0;
    }
    omOvlGotoEx(omovlhis[omovlhisidx].overlayID, omovlhis[omovlhisidx].event, omovlhis[omovlhisidx].stat);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/objmain", omOvlGotoEx);

void omOvlHisChg(s16 arg0, s32 overlay, s16 event, s16 stat) {
    s32 ovlhisIndex = omovlhisidx - arg0;
    omOvlHisData* history;
    
    if (ovlhisIndex >= 0) {
        history = &omovlhis[ovlhisIndex];
        history->overlayID = overlay;
        history->event = event;
        history->stat = stat;
    }
}

INCLUDE_ASM("asm/nonmatchings/objmain", omOvlKill);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB530);

INCLUDE_ASM("asm/nonmatchings/objmain", omMain);

INCLUDE_ASM("asm/nonmatchings/objmain", omOutView);

INCLUDE_ASM("asm/nonmatchings/objmain", omOutViewMulti);

INCLUDE_ASM("asm/nonmatchings/objmain", omSystemKeyCheckSetup);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB574);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB57C);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB584);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB58C);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB594);

INCLUDE_RODATA("asm/nonmatchings/objmain", D_800CB59C);

INCLUDE_ASM("asm/nonmatchings/objmain", omDBGSystemKeyCheck);

INCLUDE_ASM("asm/nonmatchings/objmain", omSystemKeyCheck);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005FD5C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005FD7C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005FECC);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8005FFFC);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060058);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060088);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060128);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060198);

void func_800601D4(s32 arg0) {
    D_800C5996 = -1;
    func_8000C250(arg0);
    D_800C5998 |= 8;
}

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060214);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060234);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060268);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060288);

INCLUDE_ASM("asm/nonmatchings/objmain", PlaySound);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8006035C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060398);

INCLUDE_ASM("asm/nonmatchings/objmain", func_800603F0);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060440);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060468);

s16 func_80060540(s16 arg0, s16 arg1) {
    s16 temp_v0;

    if (D_800C5976 == 0) {
        return 0;
    }

    temp_v0 = func_80012C7C(arg0);

    if (temp_v0 > 0) {
        if (D_800D89B2[temp_v0] == -1) {
            D_800D89B2[temp_v0] = func_80010ED4(arg0, arg1);
        }
        return D_800D89B2[temp_v0];
    } else {
        return func_80010ED4(arg0, arg1);
    }
}

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060618);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8006071C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8006073C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060758);

INCLUDE_ASM("asm/nonmatchings/objmain", func_800607A8);

INCLUDE_ASM("asm/nonmatchings/objmain", func_800607C4);

INCLUDE_ASM("asm/nonmatchings/objmain", func_800607E8);

INCLUDE_ASM("asm/nonmatchings/objmain", func_8006086C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_800608EC);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060AB4);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060AF0);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060BC8);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060C84);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060D4C);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060DFC);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060E20);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060E54);

INCLUDE_ASM("asm/nonmatchings/objmain", func_80060F04);