#include "node.h"

#include <cstddef>

Node::Node() : value(0), next(nullptr), prev(nullptr) {}

Node::Node(int value) : value(value), next(nullptr), prev(nullptr) {}
