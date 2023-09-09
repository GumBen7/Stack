typedef int value_type;

class Node {
private:
    value_type value;
    Node *next;
public:
    Node(const value_type &v, Node* n = nullptr);
    Node* getNext() const;
    const value_type& getValue() const;
    void setNext(Node *n);
    void setValue(const value_type &v);
};