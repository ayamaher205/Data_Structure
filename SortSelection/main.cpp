#include <iostream>

using namespace std;
template <class T>
void sortSelection(int size, T arr[]){
int min_idx;
for(int i = 0 ;i < size-1;i++){
    min_idx=i;
    for(int j = i+1; j<size;j++){
        if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
int main()
{
    int n,arr[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortSelection(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
