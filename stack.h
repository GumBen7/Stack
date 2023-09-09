#include <stddef.h>
#include <iostream>

#include "node.h"

class Stack {
private:
    Node *top = nullptr;
    size_t maxSize;
    size_t size = 0;
public:
    Stack(size_t mS);
    Stack(const Stack& other);
    ~Stack();

    const Node* getTop() const {
        return this->top;
    }
    size_t getSize() const {
        return this->size;
    }

    void push(const value_type& value);    
    value_type pop();
    const value_type& peek() const;
    //friend std::ostream& operator<<(std::ostream& os, const Stack& s);
};

/*std::ostream& operator<<(std::ostream os, const Stack& s){
    auto it = s.getTop();
    for (auto i = 0; i < s->getSize() - 1; ++i) {
        os << it->getValue() << " ";
    }
    return os;
}*/