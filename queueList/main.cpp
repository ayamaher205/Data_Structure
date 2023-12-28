#include<iostream>
#include"Queue.h"

using namespace std;
int main(){
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(7);
    q.dequeue();
    q.display();
    return 0; 
}