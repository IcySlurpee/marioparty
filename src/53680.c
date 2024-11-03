#include "common.h"
#include "engine/process.h"

extern u8 D_800C53E0[]; // { 0, 1, 2 }
extern u8 D_800C53E4[]; // { 1, 2, 3 }
extern void *D_800C5490[];
extern u8 D_800C54A8[]; // { 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C }
extern u8 D_800C54B0[]; // { 0x5E, 0x5F, 0x60, 0x61, 0x62, 0x63 }
extern s16 D_800D8380;
extern s16 D_800ED5DC; // current player index

u8 func_80052F6C(s16 index);

s16 GetCurrentPlayerIndex(void) {
    return D_800ED5DC;
}

GW_PLAYER* GetPlayerStruct(s32 index) {
    if (index < 0) {
        index = GetCurrentPlayerIndex();
    }
    return &GwPlayer[index];
}

// Returns true if the given index matches the current player index.
s16 PlayerIsCurrent(s16 index) {
    return index == D_800ED5DC;
}

// Returns true if the given player is the same as the current player.
u32 PlayerStructIsCurrent(GW_PLAYER* player) {
  s16 cur_index = GetCurrentPlayerIndex();
  return player->player_index == cur_index;
}

u32 PlayerIsCPU(s16 index) {
    return GetPlayerStruct(index)->flags & 1;
}

/*
 * Adjust's a player's coin total by a given count.
*/
void AdjustPlayerCoins(s32 index, s32 count) {
    GW_PLAYER* player = GetPlayerStruct(index);
    player->coins += count;
    if (player->coins >= 1000) {
        player->coins = 999;
    }
    if (player->coins < 0) {
        player->coins = 0;
    }

    if (player->coins_max <= player->coins) {
        player->coins_max = player->coins;
    }
}

/*
 * Returns true if a player has at least the given coin count.
*/
s32 PlayerHasCoins(s32 index, s32 count) {
    GW_PLAYER* player = GetPlayerStruct(index);
    return player->coins >= count;
}

/*
 * Updates the given player's current animation.
*/
void SetPlayerAnimation(s32 index, s16 animation, s32 unk) {
    GW_PLAYER* player = GetPlayerStruct(index);
    if (player == GetPlayerStruct(-1)) {
        func_8003E81C(player->player_obj, animation, unk);
    }
}

void func_80052C44(s32 index, s16 a, s16 b, s16 c, u16 d) {
    GW_PLAYER* player = GetPlayerStruct(index);
    if (player == GetPlayerStruct(-1)) {
        func_8003E8B8(player->player_obj, a, b, c, d);
    }
}

void func_80052CCC(s32 index, u8 b) {
    GW_PLAYER* player = GetPlayerStruct(index);
    player->cpu_difficulty_copy = b;
    if (!IsFlagSet(44)) {
        player->cpu_difficulty = D_800C53E0[b];
    }
    else {
        player->cpu_difficulty = D_800C53E4[b];
    }
}

void func_80052D34(void) {
    Process* process = HuPrcCurrentGet();
    GW_PLAYER* player = (GW_PLAYER*)process->user_data;
    u16 flags;
    f32 val;

    while (1) {
        HuPrcVSleep();
        while (((flags = player->flags) & 4) != 0) {
            HuPrcVSleep();
        }

        val = 1.0f;

        if ((flags & 2) == 0 && !PlayerStructIsCurrent(player)) {
            val = 0.7f;
        }

        func_800A0D00(&player->player_obj->xScale, val, val, val);
        
    }
}

void func_80052DC8(s16 index, void *param_2) {
    u8 character;
    Process* process;

    GW_PLAYER* player = GetPlayerStruct(index);
    player->player_index = index;

    // This was hard to match, seems awkward still.
    if (D_800D8380 != 0) {
        if (PlayerIsCurrent(index) != 0) {
            character = player->character;
        }
        else {
            character = func_80052F6C(index);
        }
    }
    else {
        character = player->character;
    }

    player->player_obj = CreateObject(character, param_2);

    process = omAddPrcObj(func_80052D34, 0x5000, 0, 0);
    player->process = process;
    process->user_data = player;
}

void func_80052E84(s16 index) {
    GW_PLAYER* player = GetPlayerStruct(index);
    func_80052DC8(index, D_800C5490[player->character]);
}

void func_80052ECC(s16 index, u8 param_2) {
    GW_PLAYER* player = GetPlayerStruct(index);
    func_8003E1BC(player->player_obj, param_2);
}

u8 func_80052F04(s16 index) {
    GW_PLAYER* player = GetPlayerStruct(index);
    return D_800C54A8[player->character];
}

void func_80052F34(s16 index) {
    u8 var1 = func_80052F04(index);
    func_80052ECC(index, var1);
}

u8 func_80052F6C(s16 index) {
    GW_PLAYER* player = GetPlayerStruct(index);
    return D_800C54B0[player->character];
}

void func_80052F9C(s16 index) {
    u8 var1 = func_80052F6C(index);
    func_80052ECC(index, var1);
}

void func_80052FD4(s16 index) {
    GW_PLAYER* player = GetPlayerStruct(index);
    if (player->player_obj != NULL) {
        EndProcess(player->process);
        DestroyObject(player->player_obj);
        player->player_obj = NULL;
    }
}

void func_80053020(void) {
    s32 i;
    GW_PLAYER* player;

    for (i = 0; i < MAX_PLAYERS; i++) {
        player = GetPlayerStruct(i);
        player->player_obj = NULL;
    }
    D_800D8380 = 0;
}

void func_80053064(void) {
    D_800D8380 = 1;
}

void func_80053074(void) {
}