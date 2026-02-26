#include <iostream>
using namespace std;

int main() {
    // 3a: Allocate the large size that crashed Challenge #2 on the HEAP
    int size = 1000000; 
    double* heapArray = new double[size]; 

    // Fill with some data
    for(int i = 0; i < size; i++) {
        heapArray[i] = i * 1.1;
    }

    // 3b: This should not crash!
    cout << "Heap allocation successful for size: " << size << endl;

    // 3c: Use delete to clean up memory
    delete[] heapArray;
    
    return 0;
}