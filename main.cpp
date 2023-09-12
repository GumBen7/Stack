#include <iostream>

#include "stack.h"

using namespace std;

int main() {
    auto s0 = new Stack(3);
    s0->push(7);
    s0->push(13);
    auto s1 = new Stack(*s0);
    cout << *s0 << endl;
    cout << *s1 << endl;
    cout << s1->pop() << endl;
    cout << s0->getAvarage() << " " << s1->getAvarage() << endl;

    s0->pop();
    s0->pop();
    s0->push(23);
    cout << s0->getAvarage() << endl;
}
