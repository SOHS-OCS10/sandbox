#include <iostream>
using namespace std;

int main() {
    // 5a: Create int on heap
    int* ptr = new int;
    *ptr = 42;

    // 5b: Delete the memory
    delete ptr;

    // 5c: Try to dereference and print
    cout << "Value: " << *ptr << endl;

    // 5d: What happened?
    // Comment: It prints garbage or crashes because the memory was freed.
    
    return 0;
}