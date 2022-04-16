#ifndef NODE_H
#define NODE_H

class Node {
   public:
    int value;
    Node *left;
    Node *right;
    Node();
    Node(int value);
};

#endif  // NODE_H
