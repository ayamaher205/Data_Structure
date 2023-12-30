#include<iostream>
#include"node.h"
#include"Linkedlist.h"
using namespace std;

int main(){
 linkedList<int> list;
 list.push_front(5);
 list.push_front(7);
 list.push_back(9);
 list.push_back(3);
 list.search(5);
 list.search(15);
 list.inesrt(11,4);
 list.inesrt(9,4);
 list.remove(9);
 list.remove(9);
 list.pop_front();
 list.pop_back();
 list.display();
 list.inesrt(4,22);
 list.inesrt(5,22);
 list.display();
 linkedList <int>l(list);
 l.push_front(7);
 l.push_back(8);
 l.display(); 
 list.display();
 l.bubbleSort();
 l.display();
 list.clear();
 list.display(); 
   return 0;
}