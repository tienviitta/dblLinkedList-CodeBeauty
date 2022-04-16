#ifndef BST_H
#define BST_H

#include "node.h"

class BinarySearchTree {
   public:
    Node* root;
    BinarySearchTree();
    ~BinarySearchTree();
    void addNode(int value);
    void printTree();
};

void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);

#endif  // BST_H
