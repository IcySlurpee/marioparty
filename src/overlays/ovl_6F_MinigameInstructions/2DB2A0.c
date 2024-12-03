#include "common.h"

void func_800F6610_MinigameInstructions(void);
void func_800F6924_MinigameInstructions(void);

board_overlay_entrypoint D_8010E4D0_MinigameInstructions[] = {
    {0, &func_800F6610_MinigameInstructions},
    {1, &func_800F6924_MinigameInstructions},
    {1, &func_800F6924_MinigameInstructions},
    {-1, 0}
};

void func_800F65E0_MinigameInstructions(void) {
    ExecBoardScene(D_8010E4D0_MinigameInstructions, D_800C597A);
}
