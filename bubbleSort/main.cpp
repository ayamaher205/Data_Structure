#include <iostream>
#include"Employee.h"
using namespace std;

// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
void swapEmployees(Employee& emp1, Employee& emp2) {
    Employee temp = emp1;
    emp1 = emp2;
    emp2 = temp;
}

void bubbleSort(Employee arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j].getId() > arr[j + 1].getId()) {

            swapEmployees(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}
void printArray(int arr[], int size)
{
	int i;
}

int main()
{
    int n ;
    cin>>n;
    Employee arr[10];
    arr[0].setId(1);
    arr[1].setId(8);
    arr[2].setId(3);
    bubbleSort(arr,n);
	for (int i = 0; i < n; i++)
		cout << " " << arr[i].getId();
    return 0;
}
