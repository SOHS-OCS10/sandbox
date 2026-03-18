#include <iostream>
using namespace std;

void countdown(int num) {
    if (num >= 0) {
        cout << num << endl;
        countdown(num - 1);
        return;
    }
}

int main() {
    countdown(10);
    return 0;
}