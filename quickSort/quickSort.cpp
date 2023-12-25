#include <iostream>
using namespace std;
// void swap(int &n1, int &n2);
int partition(int arr[], int Start, int End);
void QuickSort(int arr[], int LB, int HB);
int main()
{
    int arr[] = {7, 2, 8, 5, 4, 6};

    QuickSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << "  ";
    return 0;
}

int partition(int arr[], int Start, int End)
{
    int start = Start;
    int end = End;
    int pivot = Start;
    while (start < end)
    {
        while ((arr[start] <= arr[pivot]))
        {
            start++;
        }
        while ((arr[end] >= arr[pivot]))
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[end], arr[pivot]);
    return end;
}
void QuickSort(int arr[], int LB, int HB)
{
    if(HB>LB){
    int part_location = partition(arr, LB, HB);
    QuickSort(arr, LB, part_location - 1);
    QuickSort(arr, part_location+1, HB);
    }
}