#include "dbll.h"

#include <cstddef>
#include <iostream>
#include <iterator>

#include "node.h"

DblLinkedList::DblLinkedList() : head(nullptr), tail(nullptr) {}

void DblLinkedList::AddTail(int value) {
    Node *node = new Node(value);
    if (head == nullptr) {
        head = node;
        tail = node;
    } else {
        node->right = tail;
        tail->left = node;
        tail = node;
    }
}

void DblLinkedList::PrintForward() {
    Node *trav = head;
    while (trav != nullptr) {
        std::cout << "[" << trav->value << "]=";
        trav = trav->left;
    }
    std::cout << std::endl;
}

void DblLinkedList::PrintBackward() {
    Node *trav = tail;
    while (trav != nullptr) {
        std::cout << "=[" << trav->value << "]";
        trav = trav->right;
    }
    std::cout << std::endl;
}

DblLinkedList::~DblLinkedList() {
    Node *trav = head;
    while (head != nullptr) {
        trav = head;
        head = head->left;
        delete trav;
    }
}