#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

#include "bst.h"
#include "dbll.h"

int main(int argc, char *argv[]) {
    // Doubly LInked List

    // DblLinkedList mDbll;
    // for (int i = 0; i < 10; ++i) {
    //     mDbll.AddTail(i);
    // }
    // mDbll.PrintForward();
    // mDbll.PrintBackward();
    // return 0;

    // Binary Search Tree

    BinarySearchTree mBst;
    std::vector<int> vBst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto rng = std::default_random_engine{};
    std::shuffle(std::begin(vBst), std::end(vBst), rng);
    for (auto value : vBst) {
        mBst.addNode(value);
    }
    mBst.printTree();
}
