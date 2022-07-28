#include <bits/stdc++.h>
using namespace std;

/*
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subArrays in a given array.
*/

// print the array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// selection sort implementation

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minEleIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minEleIdx])
            {
                minEleIdx = j;
            }
        }
        swap(arr[i], arr[minEleIdx]);
    }
}

int main()
{

    int size;
    cout << "Enter the number of element: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting: ";
    printArr(arr, size);

    selectionSort(arr, size);

    cout << "After sorting: ";
    printArr(arr, size);

    return 0;
}