#ifndef linkedList_H
#define linkedList_H
#include<iostream>
#include"node.h"
using namespace std;
template <class T>

class linkedList{
node<T>* head;
node<T>* tail;
int count = 0;
public:
// constructor
linkedList(){
    head = nullptr;
    tail = nullptr;
}
// copy constructor 
linkedList(linkedList<T> &l){
    head = nullptr;
    tail = nullptr;
    if(!(l.isEmpty()))
   {
    node<T>* temp = l.head;
    while(temp->next != nullptr ){
        this->push_back(temp->data);
     temp = temp->next;
    }   
  }
}
bool isEmpty(){
    if(head==nullptr)
        return true;
    else
    return false;
}
void push_front(T value){
    count++;
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
    count++;
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
void inesrt(int nodeBefore ,T value){
    if(isEmpty())
    cout<<"sorry, there is no such node, list is empty\n";
    else
    {
        count++;
        node<T>* temp2 = new node<T>();
        temp2->data =value;
        node<T>* temp = new node<T>();
        temp = head;
        while(temp->data != nodeBefore && temp->next != nullptr){
            temp = temp->next;
        }
        // check if this tail or not
            if(temp->data == nodeBefore && temp->next == nullptr)
            {   
                temp2->prev = tail;
                tail->next = temp2;
                tail = temp2 ;
            }
        else if (temp->next != nullptr)
        {
            temp2->next = temp->next;
            temp2->next->prev = temp2;
            temp->next = temp2;
        }
        else 
        {
            cout<<"no such node\n";
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
void swapNodes(T &node1,T &node2){
 T temp = node1;
 node1 = node2;
 node2 = temp;
}
void bubbleSort(){
node<T>* temp = head;
while(temp->next != nullptr){
node<T>* temp2 = head;
    while(temp2->next != nullptr){
            if(temp2->next->data < temp2->data){
                swapNodes(temp2->next->data,temp2->data);
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}
/* void bubbleSortFor(){
    node<T>* temp = tail;
    for(int i = count; i>0;i--){
        node<T>* temp2 = tail;
        for(int j = count-1; j>0 ; j--){
            if(temp2->next->data > temp2->data ){
                swapNodes(temp2->next->data , temp2->data);
            }
            temp2 = temp2->prev;
        }
    temp = temp->prev;
}
    } */
};
#endif