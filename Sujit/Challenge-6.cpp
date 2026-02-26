#include <iostream>
using namespace std;

// 6a: Return pointer to heap memory
int* allocateOnHeap() {
    int* heapPtr = new int(100);
    return heapPtr;
}

// 6b: Return pointer to local stack memory
int* allocateOnStack() {
    int stackVar = 200;
    return &stackVar; 
}

int main() {
    // Testing Heap
    int* pHeap = allocateOnHeap();
    cout << "Heap: " << *pHeap << endl;
    // 6i: Comment: Works; heap memory persists until deleted.

    // Testing Stack
    int* pStack = allocateOnStack();
    cout << "Stack: " << *pStack << endl;
    // 6ii: Comment: Fails; local variable died when function ended.

    // 6c: Why different?
    // Comment: Heap lives until 'delete'; Stack is wiped after return.

    delete pHeap; 
    return 0;
}