#ifndef ASCENDING_H
#define ASCENDING_H
#include"sort.h"
#include<iostream>
using namespace std;
class Ascending:public sort
{
    public:
        Ascending() {}
        void bubleSort (int arr[],int n){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]>arr[j])
                    swap(arr[i],arr[j]);
                }
            }
        }
        virtual ~Ascending() {}

    protected:

    private:
};

#endif // ASCENDING_H