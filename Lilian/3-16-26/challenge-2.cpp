#include<iostream>
#include<cstdlib>
using namespace std;

int callCount = 0;

void quickSort(int [], int, int);
int partition(int [], int, int);

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
        arr[i] = rand();

    cout << "Orginial Array: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    
    quickSort(arr, 0, SIZE - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    
    cout << "Total number of calls: " << callCount << endl;

    return 0;
}

void quickSort(int arr[], int start, int end)
{
    callCount++;

    if (start < end)
    {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    for (int pos = start + 1; pos <= end; pos++)
    {
        if (arr[pos] < arr[start])
        {
            swap(arr[start + 1], arr[pos]);
            swap(arr[start], arr[start + 1]);
        }
    }

    return start;
}