#include <iostream>
using namespace std;

int main() {
    int * heapPtr = new int;
    delete heapPtr;
    cout << *heapPtr;

    // Hanging pointer, it is pointing to nothing
}