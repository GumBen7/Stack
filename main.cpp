#include <iostream>

#include "stack.h"

using namespace std;

int main() {
    auto stack = new Stack(3);
    stack->push(12);
    stack->push(3);
    stack->push(7);
    cout << stack->pop() << " " << stack->peek() << endl;
}