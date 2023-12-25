#include<iostream>
using namespace std;

void InsertionSort(int arr[],int size)
{
for(int i=1;i<size;i++)
{
int j=i;
while((j>0) && (arr[j]<arr[j-1]))
{
swap(arr[j], arr[j-1]);
j--;
}
}
}

int main() {
int arr[]={2,58,77,99,25};
InsertionSort(arr,5);
for (int i=0;i<5;i++)
cout<<arr[i]<<"   ";
  return 0;
}