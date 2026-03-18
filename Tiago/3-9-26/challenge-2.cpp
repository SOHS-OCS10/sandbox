#include <iostream>
using namespace std;

int fibbonacci(int end);

int main() {
    cout << fibbonacci(10) << endl;
    return 0;
}

int fibbonacci(int end) {
    if (end <= 0) {
        return 0;
    } else if (end == 1) {
        return 1;
    } else {
        return fibbonacci(end-1)+fibbonacci(end-2);
    }
}