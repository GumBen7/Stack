#include "node.h"

Node::Node(const value_type &v, Node* n) {
    this->value = v;
    this->next = n;
}


Node *Node::getNext() const {
    return this->next;
}

const value_type &Node::getValue() const {
    return this->value;
}

void Node::setNext(Node *n) {
    this->next = n;
}

void Node::setValue(const value_type &v) {
    this->value = v;
}
