#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high, int& calls){
    calls++;

    if (low < high){
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1, calls);
        quickSort(arr, pivotIndex + 1, high, calls);
    }
}

int main(){
    srand(time(0));

    vector<int> numbers;

    for (int i = 0; i < 20; i++){
        numbers.push_back(rand() % 100 + 1);
    }

    cout << "Original array: ";
    for (int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    int calls = 0;

    quickSort(numbers, 0, numbers.size() - 1, calls);

    cout << "\nSorted array: ";
    for (int num : numbers){
        cout << num << " ";
    }

    cout << "\nFunction calls: " << calls << endl;

    return 0;
}