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
 list.clear();
 list.display();
   return 0;
}