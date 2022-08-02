#include <bits/stdc++.h>
using namespace std;

/*
Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.
*/

void printArr(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    // step 1. Finding MAX value

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // step 2. initialise MAX+1 size count array by 0

    int countArr[max + 1];
    for (int i = 0; i <= max; i++)
    {
        countArr[i] = 0;
    }

    // step 3. Frequency calculation

    for (int i = 0; i < size; i++)
    {
        countArr[arr[i]]++;
    }
    cout << "Freq Arr: ";
    printArr(countArr, max + 1);

    // step 4. cumulative sum calculation

    for (int i = 1; i <= max; i++)
    {
        countArr[i] += countArr[i - 1];
    }
    cout << "cumulative sum: ";
    printArr(countArr, max + 1);

    // step 5. Final array --> Backward Traversal of basic Array

    int finalArr[size];
    for (int i = size - 1; i >= 0; i--)
    {
        countArr[arr[i]]--;
        int k = countArr[arr[i]];
        finalArr[k] = arr[i];
    }

    cout << "After sort: ";
    printArr(finalArr, size);

    return 0;
}