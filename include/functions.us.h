#ifndef _FUNCTIONS_
#define _FUNCTIONS_

#include "types.h"
#include "common_structs.h"

void SetPlayerAnimation(s32, s32, s32);
void func_8004CB20(s32);
void func_800587BC(s32, s32, s32, s32);
void SetNextChainAndSpace(s32, s16, s32);
void func_8003FEFC(u8);
void func_800405DC(u8);
s16 GetAbsSpaceIndexFromChainSpaceIndex(u16, u16);
void func_8003E5E0(unk_Struct03*);
void func_8003E664(unk_Struct03*);
Process* func_8004D648(Vec3f*, Vec3f*, Vec3f*, f32);
void func_80058910(s32, s32);
void func_800211BC(s16, u8);
u8 func_80052F6C(s16 index);
s16 GetCurrentPlayerIndex(void);
void func_80045E6C(s32);
s32 func_80045D84(s32, s32, s32);
s16 RunDecisionTree(void*);
void LinkChildProcess(Process* process, Process* child);
void WaitForChildProcess(void);
void func_8004CD84(Vec3f*);
Process* func_8004D1EC(Vec3f*, Vec3f*, Vec3f*, s32);
unk_Struct03* func_8003E320(unk_Struct03*);
unk_Struct03* func_8003E320(unk_Struct03*);
void func_8003E664(unk_Struct03*);
void func_800A0E80(Vec3f*, Vec3f*, Vec3f*);
void func_80052E84(s16);
void func_80056A08(s32, s32, s32, s32);
void func_8006DDC8(s16, s32, s16);
void func_8003B798(ProcessHeader*);
void func_80072080(s16);
void func_80025F10(s16, s32);
s16 func_8007194C(s32, s32, s32);
void func_8001D520(s32, Vec3f*, Vec3f*);
s16 GetCurrentSpaceIndex(void);
void func_80070D90(s16);
void func_800717C0(s16);
s16 func_8006D010(s32, s32, s32, s32, s32, s32);
void func_8006E154(s16, s32);
void func_800F86EC_2BD6CC(void);
void func_80072080(s16);
void func_80025F10(s16, s32);
void func_80027C1C(s16, f32, f32, s32, s32);
void func_8005AF60(void);
void func_80026B8C(s16, f32, f32, s32);
void func_80059348(s16);
void func_8005DF44(s32, s32, s32);
void func_8004F504(void*);
void func_800503B0(s32, s32);
void func_8008C490(s32*, char[], s32);
void func_8004F2AC(void);
void func_80054868(s32);
void func_80055A34(s32);
void func_8003C314(s8 a, void* ptr, s32 c, s32 d);
void func_8003E174(unk_Struct03* ptr);
void func_800584F0(s32 unk);
void EventTableHydrate(struct event_table_entry *table);
void InitCameras(s32 count);
void SetPlayerOntoChain(s16 player, s16 chain_index, s16 space_index);
void func_80056AF4(void);
s32 func_8004B850(void);
void func_8004B5C4(f32 unk);
void func_8004B838(f32 unk);
f32 func_8004B5DC(Vec3f*);
SpaceData* GetSpaceData(s32 spaceID);
void func_8006EB40(s16 win_id);
void func_80071C8C(s16 a, s32 b);
void func_80071E80(s16 a, s32 b);
void func_80072644(s16 a, s16 b);
void func_800726AC(s16 a, s16 b);
void func_8004B5C4(f32 unk);
mystery_struct_ret_func_80048224* func_80048224(s16 *ptr);
void func_8004847C(mystery_struct_ret_func_80048224 *);
void func_8004A520(void);
void LoadStringIntoWindow(s16 win_id, s32 string_id, s32 a, s32 b);
void func_800427D4(void* );
void func_800A0D50(Vec3f* ptr, Vec3f* ptr2);
void* func_80042728(unk_Struct03* ptr, s32 num);
void func_800A40D0(void* ptr, f32 unk);
void func_8004CDCC(unk_Struct03* unk);
void SetSpaceType(s16, s32);
void func_8004F2EC(void);
void func_8004F5F0(void);
void func_80067704(s16);
void func_80067384(s16, s32, s32);
void KillChildProcess(Process* process);
void KillProcess(Process* process);
s32 setjmp(jmp_buf* jump_buf);
s32 longjmp(jmp_buf* jump_buf, s32 val);
void UnlinkChildProcess(Process* process);
s32 GetMemoryAllocSize(s32 value);
void* MakeHeap(void* ptr, u32 size);
void Free(void* ptr);
void *Malloc(HeapNode* heap, s32 size);
void *Realloc(HeapNode* heap, void* mem, u32 new_size);
u32 GetAllocatedHeapSize(HeapNode* heap);
u32 GetUsedMemoryBlockCount(HeapNode* heap);
s32 GetMemoryAllocSize(s32 value);
void EndProcess(void*);
void func_8003E1BC(unk_Struct03*, u8);
void SleepVProcess(void);
Process* GetCurrentProcess(void);
void func_8003E8B8(unk_Struct03* ptr, s16 a, s16 b, s16 c, u16 d);
void DecodeFile(void* src, void* dest, s32 len, s32 decode_type);
void* MallocTemp(u32 size);
void bcopy(void*, void*, int);
s32 bcmp(void*, void*, int);
void bzero(void*, s32);
void func_80061FE8(u8*, void*, s32);
void func_80021B14(s16, u8, s32);
void func_800421E0(void);
void func_8004EE14(s32, void*, s32, void*);
void func_8004F00C(void*, f32, f32);
void func_8004F044(void*);
void func_8004F4D4(void*, s32, s32);
void func_80060468(s32, u8);
void func_8003E81C(void*, s32, u16);
void func_800A40D0(void*, f32);
u16 func_8003E940(unk_Struct03*);
void func_800421E0(void);
void func_8004E3E0(s32, f32*, s32, void*);
void func_8004F044(void*);
void func_8004F4D4(void*, s32, s32);
void func_80055960(u8, s32);
void SleepProcess(s32);
void func_8005D96C(Object*, f32, f32, f32);
void func_8005D97C(Object*, f32, f32, f32);
void InitCameras(s32);
void func_8005AD18(void);
void func_80062450(void);
s32 func_8005CE48(s32);
playerMain* GetPlayerStruct(s32 playerIndex);
void func_8008C040(playerMain*, playerMain*, s32);
void WaitForTextConfirmation(s16);
void func_8006DA5C(s16, void*, s8);
void func_80009028(Object*, s32, f32, f32, f32, f32);
void func_80009090(Object*);
void HideTextWindow(s32);
s32 CreateTextWindow(s32, s32, s32, s32);
void ShowTextWindow(s32);
void func_8006E070(s16, s32);
u16 func_800174F4(s32, s32);
void func_8001775C(Object*, s32, s32);
void func_800264F8(s16, s16, f32, s32*, s32*, s32);
f32 func_80088060(f32);
void func_8001D420(s32, void*, void*, void*);
void func_8001D57C(s32);
f32 func_800B1750(f32);
void SetBasicSpriteSize(u16, f32, f32);
void func_80018E50(s32, u16, s32);
void func_80009058(Object*, f32, f32, f32, f32, f32, f32);
void SetBasicSpritePos(u16, s32, s16);
void func_80018D84(u16, s32);
void func_80060540(s32, s32);
void func_8009ECB0(s32, f32, f32, f32);
void func_800258EC(s16, s32, s32);
s16 func_8001E00C(s32, s32, s32);
void func_80064D38(s16);
void func_8006752C(s8, s32, u8);
void func_8001D934(s32, s32, f32*);
void func_80079078(s16);
void func_8005D718(s32);
s32 func_8005021C(f32); //getRandInRange
void func_800A0D00(void*, f32, f32, f32);
void func_80025CA8(s16, s32);
void func_80025B34(s16);
void func_80026040(s16);
void func_80039C48(s32*, s16*);
void func_80009340(Object*, s32, s32, s32, s32);
void func_8001E2F8(s16, u8);
void func_8001E360(s16, u8, u8, u8);
void func_80021240(s16);
void func_80025798(s16, f32, f32, f32);
void func_800257E4(s16, f32, f32, f32);
void func_80025830(s16, f32, f32, f32);
void func_80025EB4(s16, s32, s32);
void func_80009438(void);
void func_8000942C(void);
void func_8003E694(void*);
unk_Struct03* func_8003DBE0(u8, void*);
void func_8004CCD0(Vec3f*, Vec3f*, Vec3f*);
u8 func_80052F04(s16);
void func_8004F284(void);
void func_8004F28C(s32, s16);
void func_800546B4(s32, s32);
void func_8005E3A8(void);
void SleepVProcess(void);
void func_800568A4(void);
void ClearBoardFeatureFlag(s32 flag);
void SetBoardFeatureFlag(s32 flag);
void func_800567D4(void);
void func_8005E044(s32, s32, s32);
void func_8005E36C(s32, s32, s32, s32);
void ExecBoardScene( void(*function), s32);
void func_8006B870(void);
s32 func_8006B8A4(s32, s32, s32, s32, s32);
f64 fabs(f64 f);
u8 GetRandomByte(void);
void func_80017660(u8, f32, f32, f32, f32);
void func_800176C4(u8, f32, f32, f32, f32, f32, f32);
void func_800178A0(s32);
s16 func_800178E8(void);
void func_8001D494(s16, f32, f32, f32);
void func_8001DE70(s32);
void func_80023448(s32);
void func_800234B8(u8, u8, u8, u8);
void func_80023504(s32, f32, f32, f32);
void func_80029090(s32);
void func_8005CF30 (s32 maxObjects, s32 maxProcesses);
Object* func_8005D384(s32, s32, s32, s32, void*);
void func_8005D8B8(Object*, s32);
void func_80060088(void);
s32 PlaySound(s32);
void func_8007B168(s32*, s32);
void func_80086F08(f32*, void*);
f32 func_800AEAC0(f32);
f32 func_800AEFD0(f32);
u32 func_8005EB1C(void);
s32 IsBoardFeatureFlagSet(s32);
s16 func_8000C544(void);
s32 func_80075FE0(void);
s32 func_80072718(void);
void func_80009730(void);
void func_800601D4(s32);
void func_800790C0(void);
void func_8005DFB8(s32);
void func_80060198(void);
void func_8008B6A0(s32);
void func_80060398(s32);
void func_80075CCC(s32, ...);
s16 ReadImgPackand(s32);
void func_80025930(s16, s32, s32);
s32 func_80076174(void);
f32 func_800B0CD8(f32, f32);
void* ReadMainFS(s32);
void FreeMainFS(void*);
u16 LoadFormFile(s32, s32);
s16 func_800678A4(void*);
s16 func_80023FC8(s16);
void func_80049F0C(void);
void func_8004A140(void);
s32 func_80054654(void);
void func_80070ED4(void);
void func_8004F1D0(void);
void func_80049E70(Addr*);
void func_80049F4C(s32);
void func_8003DAA8(void);
void func_8004F140(s16);
void func_80049F0C(void);
void func_8004A140(void);
void func_800544E4(void);
void func_80054834(s32, s32);
Process* InitProcess(process_func func, u16 priority, s32 stack_size, s32 extra_data_size);
void func_80060128(s32);
void func_8006CEA0(void);
void func_80066DC4(s16, s16, s16, s16);
void func_800671DC(s16, s16, s16);
void func_800672B0(s16, s16, s16);
void func_80067354(s16, s32, f32, f32);
void func_80060128(s32);
void func_80025C20(s16, s16, s32, s32, s32);
s16 func_80025E48(s16);
void func_8005D95C(Object*, f32, f32, f32);
void func_80009458(void);
void func_80009624(unkGlobalStruct_00*, s32);
void func_80017DB0(Object*);
void func_800184BC(Object*, s32);
void func_8006071C(s16);
void func_80008FB8(Object*, f32);
void func_80008FC4(Object*, f32);
u16 func_800174C0(s32, s32);
unkGlobalStruct_00* func_80023684(s32, s32);
void func_8009B770(unkGlobalStruct_00*, s32, s32);
void func_80009500(void);
void func_800090B8(u16);
f32 sqrtf(f32);
void* MallocPerm(s32 size);
s16 func_80060288(void);
void func_80018C90(u16);
u16 func_80019060(s16, s16, s16);
void func_80067480(s16, s32, s32); //could also be  void func_80067480(s16, s32, u16); (as required by functions in face lift)
void func_800672DC(s16, u16, u16, s32);
void func_800674BC(s16, s16, u16);
s16 func_80064EF4(s32, s32);
void func_80067208(s16, s32, s16, s32);
void func_80009000(Object*, s32, f32);

void FreePerm(void*);
s16 InitSprite(s32);
void func_8002578C(s32);
void func_8002890C(s32, s32, s32);
void func_8002ADF0(s32*, s32);
s16 func_80039084(void*);
void func_8005D98C(s32, s32);
Object** func_8005DB44(s32);
void func_80009468(void);

#endif