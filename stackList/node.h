#ifndef NODE_H
#define NODE_H

template<class T>

class Node
{

    public:
       T data;
       Node<T> * ptr;
        Node() {
            //data = T();
            ptr=nullptr;
            }
        Node(T value) {
             ptr=nullptr;
             data = value;
         }
        ~Node() {}



};

#endif // NODE_H