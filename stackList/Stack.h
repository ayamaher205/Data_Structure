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
        // copy constructor 
    /* Stack(Stack<T> &s) {
            top=nullptr;
            if(!(s.isEmpty())){
                Node<T>* temp = s.top;
                Stack<T> tempStack;
                while(temp != nullptr){
                    tempStack.push(temp->data);
                    temp = temp->ptr;
                }
                temp = tempStack.top;
                while(temp != nullptr){
                    push(temp->data);
                    temp = temp->ptr;
                }
            }
        } 
 */
        Stack(Stack<T> &s) {
            top=nullptr;
            if(!(s.isEmpty())){
                top = s.top;
                Node<T>* temp = new Node<T>();
                Node<T>* temp2 = new Node<T>();
                temp = s.top;
                // top->ptr = temp;
                temp2=top;
                while(temp != nullptr){
                    temp = temp->ptr;
                    temp2->ptr = temp;
                    temp2 = temp; 
                }
            }
        }
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
                cout<<temp->data<<"  ";
                temp = temp->ptr;
            }
            cout<<"\n";
        }
    }
    // return top 
    void front(){
        cout<<top->data<<endl;
    }
         ~Stack() {}

};

#endif // STACK_H