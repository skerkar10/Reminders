#include "Helper.h"

void validateCommandLineArgs(const int argc) {
  if (argc == 1) {
    return;
  }

  fprintf(stderr, "usage: ./main\n");
  exit(1);
}

ReminderList* MakeList(void) {
  ReminderList* out = malloc(sizeof(ReminderList));

  out->count = 0;

  return out;
}
