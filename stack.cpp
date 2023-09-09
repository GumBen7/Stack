#include <iostream>

#include "stack.h"

Stack::Stack(size_t mS){
    this->maxSize = mS;
}

Stack::Stack(const Stack &other) {
}

Stack::~Stack() {
    auto n = this->size;
    for (auto i = 0; i < n; ++i) {
        this->pop();
    }
}

void Stack::push(const value_type &value) {
    if (this->size == this->maxSize) {
        std::cout << "Переполнение стека сверху" << std::endl;
    } else {
        auto newNode = new Node(value, this->top);
        this->top = newNode;
        ++this->size;
    }
}

value_type Stack::pop() {
    if (top == nullptr) {
        std::cout << "Переполнение стека снизу" << std::endl;
        //exit(1);
    } else {
        auto poppedValue = this->top->getValue();;
        auto popped = this->top;
        this->top = this->top->getNext();
        delete popped;
        --this->size;
        return poppedValue;
    }
}

const value_type& Stack::peek() const {
    if (top == nullptr) {
        std::cout << "Попытка подглядеть на пустой стек" << std::endl;
        //exit(1);
    } else {
        return this->top->getValue();
    }
}

/*std::ostream &operator<<(std::ostream &os, const Stack &s) {
    auto it = s.top;
    for (auto i = 0; i < s.size - 1; ++i) {
        os << it->getValue() << " ";
    }
    return os;
}*/
