#include <iostream>

#include "stack.h"

Stack::Stack(size_t mS){
    this->maxSize = mS;
}

Stack::Stack(const Stack &other) {
    this->maxSize = other.maxSize;
    this->avarage = other.avarage;
    this->sum = other.sum;
    auto it1 = other.top;
    auto it0 = this->top = new Node(it1->getValue());
    ++this->size;
    for (auto i = 0; i < other.size - 1; ++i) {
        it1 = it1->getNext();
        auto newNode = new Node(it1->getValue());
        it0->setNext(newNode);
        it0 = it0->getNext();
        ++this->size;
    }  
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
        this->sum += value;
        this->avarage = this->sum / this->size;
    }
}

value_type Stack::pop() {
    if (top == nullptr) {
        std::cout << "Переполнение стека снизу" << std::endl;
        return value_type(); // TODO: exit(1);
    } else {
        auto poppedValue = this->top->getValue();;
        auto popped = this->top;
        this->top = this->top->getNext();
        delete popped;
        --this->size;
        this->sum -= poppedValue;
        if (this->size == 0) {
            this->avarage = 0;
        } else {
            this->avarage = this->sum / this->size;
        }
        return poppedValue;
    }
}

const value_type& Stack::peek() const {
    if (top == nullptr) {
        std::cout << "Попытка подглядеть на пустой стек" << std::endl;
        return this->none; // TODO: exit(1);
    } else {
        return this->top->getValue();
    }
}

double Stack::getAvarage() {
    return this->avarage;
}

std::ostream &operator<<(std::ostream& os, const Stack &s) {
    auto it = s.top;
    for (auto i = 0; i < s.size; ++i) {
        os << it->getValue() << " ";
        it = it->getNext();
    }    
    return os;
}
