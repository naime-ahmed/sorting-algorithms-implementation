#include <bits/stdc++.h>
using namespace std;

/*
Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.
*/

void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// optimized bubble sort implementation

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1]) // change ">" to "<" for descending order
            {
                swap(arr[j], arr[j + 1]);
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                flag++;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sort: ";
    printArr(arr, size);

    bubbleSort(arr, size);

    cout << "After sort: ";

    printArr(arr, size);

    return 0;
}