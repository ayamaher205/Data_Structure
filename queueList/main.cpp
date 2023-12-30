#include<iostream>
#include"Queue.h"

using namespace std;
int main(){
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(7);
    Queue<int> q2(q);
    q2.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    return 0; 
}