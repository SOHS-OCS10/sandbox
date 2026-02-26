#include <iostream>

using namespace std;

int main() {

    // WHY USE THE HEAP?

    // REASON #1: REALLY BIG DATA

    // int x[10000000];

    // for(int i = 0; i < 10000000; i++) { // initialize each element of the array with its index
    //     x[i] = i;
    // } // SEG FAULT

    // int * x = new int[10000000000];

    // for(int i = 0; i < 10000000000; i++) { // initialize each element of the array with its index
    //     x[i] = i;
    //     // OR *(x + i) = i (same thing)
    // }

    // REASON #2: you don't know how much memory you want until runtime

    // int size;

    // cin >> size;

    // int arr[size]; // THIS SHOULDN'T WORK!!!!!!!!! (even though it does)

    // NON-STANDARD C++
    // NOT NECESSARILY ALLOWED, AND NOT PART OF THE C++ STANDARD

    // int * arr = new int[size]; // THIS IS THE WAY

    // for(int i = 0; i < size; i++) { // initialize each element of the array with its index
    //     arr[i] = i;
    // }
    
    // // MEMORY LEAK PATTERN
    // for(int i = 0; i < 2; i++) {
    //     int * x = new int; // the first allocation is no longer accessible by our program
    //     // THIS IS CALLED A MEMORY LEAK
    //     cout << "The memory address pointed to by x is now: " << x << endl;
    // }

    //     // NON MEMORY LEAK PATTERN
    // for(int i = 0; i < 2; i++) {
    //     int * x = new int;
    //     cout << "The memory address pointed to by x is now: " << x << endl;
    //     delete x; // THIS IS THE WAY
    // }

    // dangling pointer
    int * danglingPtr = new int;
    *danglingPtr = 5;
    cout << danglingPtr << endl;
    delete danglingPtr;

    // NOW DO ONE OF THESE
    // danglingPtr = 0;
    // danglingPtr = NULL;
    // danglingPtr = nullptr;

    cout << *danglingPtr << endl; // UNDEFINED BEHAVIOR, weird number
    // MIGHT WORK MIGHT DO SOMETHING BONKERS

    // DOING OTHER STUFF FOR LIKE AN HOUR
    cout << "The program is complete!" << endl;

    return 0;
}