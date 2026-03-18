#include<iostream>
using namespace std;

int recursiveBinary(int a[], int low, int high, int index);

int main()
{
    int target, index, SIZE = 7;
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    cout << "Enter the target index: ";
    cin >> target;
    
    index = recursiveBinary(arr, 0, SIZE, target);

    cout << "Found at " << index << endl;

    return 0;
}

int recursiveBinary(int a[], int low, int high, int index)
{
    while (low < high)
    {
        int middle = (low + high)/2;
        if (a[index] == a[middle])
            return middle;
        else if (a[index] > a[middle]) // I think this is comparing a value to an index.
            return recursiveBinary(a, low, middle - 1, index);
        else
            return recursiveBinary(a, middle + 1, high, index);
    }
}