#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void quicksort(int a[], int len) {
    // find pivot
    int pivot = a[0];
    // partition
    int low = 0;
    int less[len];
    int high = 0;
    int more[len];
    for (int i = 0; i < len; i++) {
        if (a[i] < pivot) {
            less[low] = a[i];
            low++;
        } else if (a[i] > pivot) {
            more[high] = a[i];
            high++;
        }
    }
}

int main() {
    srand(time(NULL));
    const int LEN = 20;
    int arr[LEN];
    for (int i = 0; i < LEN; i++) {
        arr[i] = rand() % 20;
    }


}