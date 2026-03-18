#include <iostream>
using namespace std;

int sum(int top) {
    static int n = 1;
    static int total = 0;
    if (n <= top) {
        total += n;
        n++;
        sum(top - 1);
    }
    return total;
}

int main() {
    int tr;
    int total;
    cout << "Enter triangular number:";
    cin >> tr;
    tr *= 2;
    total = sum(tr);
    cout << total;
}