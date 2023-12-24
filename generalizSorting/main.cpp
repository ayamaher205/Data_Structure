#include<iostream>
#include"sort.h"
#include"ascending.h"
#include"descending.h"
using namespace std;
int main(){


    int arr[]={2,8,7,3,1,9,0,11,4,5};
    sort *p = new Descending();
    p->bubleSort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}