#ifndef DBLL_H
#define DBLL_H

#include "node.h"

class DblLinkedList {
public:
  Node *head;
  Node *tail;
  DblLinkedList();
  ~DblLinkedList();
  void AddTail(int value);
  void PrintForward();
  void PrintBackward();
};

#endif // DBLL_H
