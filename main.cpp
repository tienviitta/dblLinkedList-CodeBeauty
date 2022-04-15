#include "dbll.h"
#include <iostream>

int main(int argc, char *argv[]) {
  DblLinkedList mDbll;
  for (int i = 0; i < 10; ++i) {
    mDbll.AddTail(i);
  }
  mDbll.PrintForward();
  mDbll.PrintBackward();
  return 0;
}
