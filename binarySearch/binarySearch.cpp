#include<iostream>
using namespace std;
int binarySearch(int arr[], int r, int x)
{
    int l=0;
    while (l <= r) {
        int m = l + (r - l) / 2;
         if (arr[m] == x)
            return m;
         if (arr[m] < x)
            l = m + 1;
         else
            r = m - 1;
    } 
    return -1;
}
int main(){
    int arr []  = {1,6,7,8,99,105,180,270};
    int n = 8,data;
    data = 99;
    int x = binarySearch(arr,n,data);
    if(x!=-1)
    cout<< "element found in "<<x<<endl;
    else
    cout<<"element not found\n";
    return 0;
}