#ifndef linkedList_H
#define linkedList_H
#include<iostream>
#include"node.h"
using namespace std;
template <class T>

class linkedList{
node<T>* head;
node<T>* tail;
public:
linkedList(){
    head = nullptr;
}
linkedList(linkedList &l){
    
}
bool isEmpty(){
    if(head==nullptr)
        return true;
    else
    return false;
}
void push_front(T value){
    node<T>* temp=new node<T>();
    temp->data=value;
    if(isEmpty()){
        head = temp;
        tail = temp;
    }
    else {
        temp->next = head;
        head = temp;
    }
}
void push_back(T value){
    node<T>* temp = new node<T>();
    temp->data = value;
    if(isEmpty()){
        head = temp;
        tail = temp;
    }
    else {
        temp->prev = tail;
        tail->next = temp;
        tail = temp ;
    }
}
void inesrt(int nodeDefore ,T value){
    if(isEmpty())
    cout<<"sorry, there is no such node, list is empty\n";
    else
    {
        node<T>* temp = new node<T>();
        temp = head;
        while(temp->data != nodeDefore && temp->next != nullptr){
            temp = temp->next;
        }
        if(temp->next == nullptr)
        cout<<"no such value\n";
        else 
        {
            node<T>* temp2 = new node<T>();
            temp2->data =value;
            temp2->next = temp->next;
            temp2->next->prev = temp2;
            temp->next = temp2;
        }

    }
}
void pop_front(){
    if(isEmpty())
    cout<<"list is empty\n";
    else if(head == tail )
    {
        tail->prev = head;
    }
    node<T>* temp = new node<T>();
    temp = head;
    head->prev = nullptr;
    head = head->next;
    delete temp;
}
void pop_back(){
     if(isEmpty())
    cout<<"list is empty\n";
    else{
    node<T>* temp = new node<T>();
    temp = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete temp;
    }
}
void remove(int nodeValue){
 if(isEmpty())
    cout<<"list is empty\n";
    else
    {
        node<T>* temp = new node<T>();
        temp = head;
        while(temp->data != nodeValue && temp->next != nullptr){
            temp = temp->next;
        }
        if(temp->next == nullptr)
        cout<<"no such value\n";
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        }   
}
void display(){
    if(isEmpty())
    cout<<"list is empty\n";
    else {
        node<T>* temp = new node<T>();
        temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"   ";
            temp = temp->next;
        }
        cout<<"\n";
    }
}
void clear(){
    if(isEmpty())
    cout<<"list is empty\n";
    else {
        node<T>* temp = new node<T>();
        while(head != nullptr){
            temp = head;
            head = head->next;
            delete temp;
        }
    }
}
void search(int value){
    if(isEmpty())
    cout<<"list is empty\n";
    else
    {
        node<T>* temp = new node<T>();
        temp = head;
        while(temp->data != value && temp->next != nullptr){
            temp = temp->next;
        }
        if(temp->next == nullptr)
        cout<<"no such value\n";
        else
        cout<<"node found\n";
}
}
};
#endif