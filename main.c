#include "Globals.h"
#include "Helper.h"
#include "UIHelper.h"

int main(int argc, char** argv) {
  validateCommandLineArgs(argc);

  ReminderList* MainList = MakeList();

  InitWindow(1000, 800, "Sahil's Reminders");
  SetTargetFPS(TARGET_FPS);

  while (!WindowShouldClose()) {
    SetExitKey(KEY_Q);
    if (IsKeyDown(KEY_LEFT_SUPER) && IsKeyDown(KEY_W)) {
      break; // We want Cmd + W to close the window
    }

    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawListSkeleton(MainList);

    EndDrawing();
  }

  CloseWindow();

  free(MainList);

  return 0;
}
