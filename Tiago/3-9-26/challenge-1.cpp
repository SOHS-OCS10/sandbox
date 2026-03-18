#include <iostream>
using namespace std;

void countdown(int start, int end);

int main() {
    countdown(10, 0);
    return 0;
}

void countdown(int start, int end) {
    cout << start << endl;
    if(start > end) {
        countdown(start-1, end);
    }
}