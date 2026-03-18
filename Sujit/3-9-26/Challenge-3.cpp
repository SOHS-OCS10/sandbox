#include <iostream>
#include <string>
using namespace std;

void reversePrint(const string& str, int index) {
    if (index >= str.length()) {
        return;
    }

    reversePrint(str, index + 1);
    cout << str[index] << endl;
}

int main() {
    reversePrint("hello", 0);
    return 0;
}