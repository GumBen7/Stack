#include "node.h"

class Stack{
public:
    Stack();
    Stack(const Stack& other);
    ~Stack();

    void push(const value_type& value);    
    const value_type& pop();
};