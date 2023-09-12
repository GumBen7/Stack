#include <stddef.h>
#include <iostream>

#include "node.h"

class Stack {
private:
    Node *top = nullptr;
    size_t maxSize;
    size_t size = 0;
    value_type none; // TODO: exit(1);
    double avarage;
    value_type sum;
public:
    Stack(size_t mS);
    Stack(const Stack& other);
    ~Stack();

    void push(const value_type& value);    
    value_type pop();
    const value_type& peek() const;
    friend std::ostream& operator<<(std::ostream& os, const Stack& s);

    double getAvarage();
};

std::ostream& operator<<(std::ostream& os, const Stack& s);

