#include <iostream>

using namespace std;


// DON'T DO THIS
// specifically, don't return the address of something that was allocated on the stack
int * getMemoryOnStack() {
    int y = 5; // the star means "this is a pointer" (data type of pointer)
    cout << "The address of y is: " << &y << endl;
    return &y;
}

// set aside some memory on the heap and give the address
// memory on the heap endures between function calls
int * getMemoryOnHeap() {
    int * x = new int; // the star means "this is a pointer" (data type of pointer)
    *x = 5; // the star means "get the value at this address" (dereferencing operator)
    return x;
}

int main() {
    int * x = getMemoryOnHeap();
    cout << "The value of x is: " << *x << endl;
    int * y = getMemoryOnStack();
    cout << "The address of y is: " << y << endl;
    return 0;
}