#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

bool recursiveBinarySearch(const vector<int>& arr, int left, int right, int target, int& calls){
    calls++;

    if (left > right){
        return false;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target){
        return true;
    }
    else if (target < arr[mid]){
        return recursiveBinarySearch(arr, left, mid - 1, target, calls);
    }
    else{
        return recursiveBinarySearch(arr, mid + 1, right, target, calls);
    }
}

bool iterativeBinarySearch(const vector<int>& arr, int target, int& calls){
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right){
        calls++;

        int mid = left + (right - left) / 2;

        if (arr[mid] == target){
            return true;
        }
        else if (target < arr[mid]){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return false;
}

int main(){
    srand(time(0));

    vector<int> numbers;

    for (int i = 0; i < 20; i++){
        numbers.push_back(rand() % 100 + 1);
    }

    sort(numbers.begin(), numbers.end());

    cout << "Sorted array: ";
    for (int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    int target;
    cout << "Enter a number to search for: ";
    cin >> target;

    int recursiveCalls = 0;
    int iterativeCalls = 0;

    bool foundRecursive = recursiveBinarySearch(numbers, 0, numbers.size() - 1, target, recursiveCalls);
    bool foundIterative = iterativeBinarySearch(numbers, target, iterativeCalls);

    cout << "\nRecursive Binary Search:\n";
    if (foundRecursive){
        cout << "Number found.\n";
    } else {
        cout << "Number not found.\n";
    }
    cout << "Function calls: " << recursiveCalls << endl;

    cout << "\nIterative Binary Search:\n";
    if (foundIterative){
        cout << "Number found.\n";
    } else {
        cout << "Number not found.\n";
    }
    cout << "Loop iterations: " << iterativeCalls << endl;

    return 0;
}