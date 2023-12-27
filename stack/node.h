#ifndef Node_H
#define Node_H 
template<class T>

class Node {
public:
    T data;
    Node* ptr;
   
    // Constructor
    Node(){ptr = NULL;}
    Node(T n)
    {
        this->data = n;
        this->ptr = NULL;
    }
};
#endif