
// original array: 3,7,9,0,2,6,1,5,8,4
// : 3,0,9,7,2,6,1,5,8,4
// partitioned on 4: 1,3,0,2,4,6,9,5,8,7

// partitioned on 4: 1,3,0,2(j),4,9,5,8,7(i),6

#include <iostream>

using namespace std;

int partition(int arr[], int l, int r) {
    int pivot = r;
    int i = l; // holds the index of the last thing that is bigger than the pivot
    int j = i - 1; // holds the index of the last thing that is smaller than the pivot

    for(int x = l; x < pivot; x++) {
        if(arr[i] > arr[pivot]) {
            i++;
        } else {
            j++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[pivot];
    arr[pivot] = arr[j + 1];
    arr[j+1] = temp;
    return (j+1);
}

// pivot is always going to be "r" ("R"-bitrary choice)
void quicksort(int arr[], int l, int r) {
    // how do you do a partition?
    if(l >= r) {
        return;
    } else {
        int pivotIndex = partition(arr, l, r);
        quicksort(arr, l, pivotIndex - 1); // 2. call quicksort on the things to the left of the pivot
        quicksort(arr, pivotIndex + 1, r); // 3. call quicksort on the things to the right of the pivot
    }
    
}

int main() {

    int array[] = {
        3,7,9,0,2,6,1,5,8,4
    };

    quicksort(array, 0, 9);

    for(int i = 0; i < 10; i++) {
        cout << array[i] << endl;
    }

    return 0;
}