#ifndef Descending_H
#define Descending_H
#include"sort.h"
#include<iostream>
using namespace std;
class Descending:public sort
{
    public:
        Descending() {}
        void bubleSort (int arr[],int n){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]<arr[j])
                    swap(arr[i],arr[j]);
                }
            }
        }
        virtual ~Descending() {}

    protected:

    private:
};

#endif // ASCENDING_H