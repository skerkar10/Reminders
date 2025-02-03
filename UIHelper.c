#include "UIHelper.h"

#define INIT_HEIGHT 15
#define VERTICAL_PADDING 5
#define RECT_HEIGHT 40
#define RECT_WIDTH 400

void DrawListSkeleton(ReminderList* ReminderList) {
  int itemHeight = INIT_HEIGHT;
  for (uint16_t i = 0; i < ReminderList->count; i++) {
    Reminder* currentReminder = &ReminderList->List[i];
    DrawRectangleLines(100, itemHeight, RECT_WIDTH, RECT_HEIGHT, GRAY);
    //TODO: Add text in rectangle if it will fit
    itemHeight += RECT_HEIGHT + VERTICAL_PADDING;
  }
}
