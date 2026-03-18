#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int bsearch(int arr[], int target, int len, int low) {
    static int calls = 0;
    int mid = len / 2;
    if (target == arr[mid]) {
        return calls;
    } else if (target < arr[mid]) {
        calls++;
        bsearch(arr, target, mid - 1, low);
        return calls;
    } else {
        // target above middle
        calls++;
        low = mid + 1;
        bsearch(arr, target, len, mid + 1);
        return calls;
    }
}

int main() {
    int search;
    srand(time(NULL));
    const int LEN = 20;
    int arr[LEN] = {};
    for (int i = 1; i < LEN; i++) {
        arr[i] = arr[i - 1] + rand() % 20;
    }

    cout << "Find a number to pick: ";
    cin >> search;

    cout << "Calls used: " << bsearch(arr, search, LEN, 0);
}