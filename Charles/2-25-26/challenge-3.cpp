#include <iostream>
using namespace std;

int main() {
    double * arr = new double[1000000];
    delete arr;
    // double array needs 100 000 000 000 000 items to crash the heap

    return 0;
}