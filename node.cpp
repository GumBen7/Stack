#include "node.h"

Node *Node::getNext() {
    return this->next;
}

const value_type &Node::getVal() {
    return this->val;
}
