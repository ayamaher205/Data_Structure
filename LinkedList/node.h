#ifndef node_H
#define node_H

template <class T>

class node {
    public:
    T data;
    node *next;
    node *prev;
    node (){
        next = nullptr;
        prev = nullptr;
    }
    node (T value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

#endif