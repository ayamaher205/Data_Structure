#include<iostream>
using namespace std;
void search(int arr[],int n,int data){
    int last =arr[n-1];
    int i = 0;
    arr[n-1] = data;
    while(arr[i]!=data){
        i++;
    }
    if(data==last)
    cout<<"element found in index:  "<<n-1<<endl;
    else if(i==n-1)
    cout<<"element not found\n";
    else 
    cout<<"element found in index "<<i<<endl;
}
int main (){
    int arr []  = {1,8,7,6,99,4,25,7};
    int n = 8,data;
    cout<<"enter element you want to search : ";
    cin>>data;
    search(arr,n,data);
    return 0;
}