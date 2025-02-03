#include <time.h>
#include <stdint.h>
#ifndef MACROS_H
#define MACROS_H

#define TARGET_FPS 60
#define MAX_REMINDERS 100

struct Reminder {
  char* Title;
  time_t CreatedAt;
}; typedef struct Reminder Reminder;

struct ReminderList {
  Reminder List[MAX_REMINDERS];
  uint16_t count;
}; typedef struct ReminderList ReminderList;

#endif
