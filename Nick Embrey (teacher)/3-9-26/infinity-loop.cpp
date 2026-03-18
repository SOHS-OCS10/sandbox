#include <iostream>

using namespace std;

void countdown(int count) {
    cout << count << endl;

    if(count == 0) { // base case
        return;
    } else {
        (count - 1);
        return;
        // recursive case
    }
    
}

int main() {
    countdown(10);
    return 0;
}

