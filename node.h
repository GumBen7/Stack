typedef int value_type;

class Node {
private:
    Node* next;
    value_type val;
public:
    Node* getNext();
    const value_type& getVal();
};