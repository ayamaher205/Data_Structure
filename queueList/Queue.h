#ifndef Queue_H
#define Queue_H
#include "Node.h"
#include<iostream>
using namespace std;
template <class T>

class Queue
{
private:
    Node<T>* head;
    Node<T>* tail;
public:
    Queue(){
        head = nullptr;
        tail = nullptr;
    }
    Queue(Queue<T> &q){
        head = nullptr;
        tail = nullptr;
    if(!(q.isEmpty()))
   {
        Node<T>* temp = q.head;
        while(temp != nullptr ){
        this->enqueue(temp->data);
        temp = temp->ptr;
    }   
  }
    }
    bool isEmpty(){
        if(tail == nullptr)
        return true;
        else
        return false;
    }
    void enqueue (T value){
            Node<T>* temp = new Node<T>();
            temp->data = value;
            if(isEmpty()){
                head = temp;
                tail = temp;
            }
                tail->ptr = temp;
                tail = temp;
    }
    void dequeue(){
        if(isEmpty())
        cout<<"Queue is Empty\n";
        else 
        {
            Node<T>* temp = new Node<T>();
            temp = head;
            head = head->ptr ;
            delete temp;
        }
    }
    void display(){
         if(isEmpty())
        cout<<"Queue is empty\n";
        else 
        {
            Node<T>* temp = new Node<T>();
            temp=head;
            while(temp !=nullptr){
                cout<<temp->data<<endl;
                temp = temp->ptr;
            }
        }
    }
};
#endif
