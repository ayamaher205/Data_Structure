// Merge sort in C++

#include <iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end) {  
  int n1 = mid - start + 1;
  int n2 = end - mid;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = arr[start + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[mid + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = start;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int end) {
  if (l < end) {
    int m = l + (end - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, end);
    merge(arr, l, m, end);
  }
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  return 0;
}
