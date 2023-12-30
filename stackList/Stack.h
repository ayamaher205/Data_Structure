#ifndef STACK_H
#define STACK_H
#include"node.h"
#include<iostream>
using namespace std;
template <class T>
class Stack
{

public:
      Node<T>* top;
        Stack() {
            top=nullptr;
        }
 /*        Stack(stack<T> &s) {
            top=nullptr;
            if(!(s.isEmpty())){
                Node<T>* temp = s.top;
                Stack<T> temp = new Stack();
                while(temp->ptr != nullptr)
                    temp = s.top;
            }
        } */

    bool isEmpty(){
        if(top == nullptr)
        return true;
        else
        return false;
    }
    void push(T value){
            Node<T>* temp = new Node<T>();
            temp->data = value;
        if(isEmpty()){
            top = temp;
        }
        else {
            temp->ptr = top;
            top = temp;
        }
    }
    void pop(){
        Node <T>* temp = new Node<T>();
        temp = top; 
        if(isEmpty()){
            cout<<"stack is empty\n";
        }
        else {
            top = temp->ptr;
        }
        delete temp;
    }
    void display(){
        if(isEmpty())
        cout<<"stack is empty\n";
        else 
        {
            Node<T>* temp = new Node<T>();
            temp=top;
            while(temp !=nullptr){
                cout<<temp->data<<endl;
                temp = temp->ptr;
            }
        }
    }
         ~Stack() {}

};

#endif // STACK_H