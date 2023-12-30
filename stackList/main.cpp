#include<iostream>
using namespace std;
#include "node.h"
#include"Stack.h"


int main(){
    Stack <int> s;
    s.push(5);
    s.push(8);
    s.push(9);
    Stack<int> s2(s);
    s2.display();
    s.pop();
    s.display();
    s.front();
    return 0;
}