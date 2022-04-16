#include "bst.h"

#include <cstddef>
#include <iostream>
#include <ostream>

#include "node.h"

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

void BinarySearchTree::addNode(int value) {
    Node* node = new Node(value);
    if (root == nullptr) {
        root = node;
        return;
    }
    Node* trav = root;
    while (trav != nullptr) {
        if (node->value < trav->value) {
            if (trav->left == nullptr) {
                trav->left = node;
                return;
            }
            trav = trav->left;
        } else {
            if (trav->right == nullptr) {
                trav->right = node;
                return;
            }
            trav = trav->right;
        }
    }
    trav = node;
}

void BinarySearchTree::printTree() {
    preOrder(root);
    std::cout << std::endl;
    inOrder(root);
    std::cout << std::endl;
    postOrder(root);
    std::cout << std::endl;
}

BinarySearchTree::~BinarySearchTree() {}

void preOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    std::cout << "[" << root->value << "]-";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left);
    std::cout << "[" << root->value << "]-";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    std::cout << "[" << root->value << "]-";
}
