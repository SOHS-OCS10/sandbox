#include <iostream>
using namespace std;

void quickSort(int a[], int start, int end);

int main() {
    const int SIZE = 20;
    int a[SIZE] = {15, 4, 26, 39, 28, 14, 2, 0, 62, 4, 3, 43, 29, 127, 30, 45, 6, 2, 292, 303};
    int start = 0;
    int end = SIZE - 1;
    quickSort(a, start, end);
    return 0;
}

void quickSort(int a[], int start, int end) {
    
}