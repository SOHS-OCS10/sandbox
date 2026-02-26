#include <iostream>
using namespace std;

int main() {
    int size = 100;
    double array[size];
    for(int i = 0; i < size; i++) {
        array[i] = rand();
    }
    size *= 10;
    double array2[size];
    for(int i2 = 0; i2 < size; i2++) {
        array2[i2] = rand();
    }
    size *= 10;
    double array3[size];
    for(int i3 = 0; i3 < size; i3++) {
        array3[i3] = rand();
    }
    return 0;
}

