#include <iostream>

#include "stack.h"

using namespace std;

int main() {
    auto stack = new Stack(3);
    stack->push(7);
    stack->push(13);
    cout << *stack << endl;
}