#ifndef linkedList_H
#define linkedList_H

template <class T>

class node {
    T data;
    node *head;
};

class linkedList{
public:
node* n;
bool isEmpty(){
    if(n->head==nullptr){
        return true;
    }
    else
    return false;
}
void push(T value){
    if(isEmpty())
    {
        node * temp;
        temp->data = value;
        temp->head = 

    }
}



};
#endif