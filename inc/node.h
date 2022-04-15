#ifndef NODE_H
#define NODE_H

class Node {
   public:
    int value;
    Node *next;
    Node *prev;
    Node();
    Node(int value);
};

#endif  // NODE_H
