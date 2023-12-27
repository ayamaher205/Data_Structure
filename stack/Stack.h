#ifndef Stack_H
#define Stack_H
#include"node.h"

template <class T>

class Stack
{
private:
Node* top;
public:
bool isEmpty(){
    if(top==NULL)
    return true;
    else
    return false;
}
void push(T value){
    if(isEmpty()){
        Node* temp;
        temp->data = value;
        top = temp;
    }
}
    Stack();
    ~Stack();
};

#endif