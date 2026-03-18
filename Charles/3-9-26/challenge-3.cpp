#include <iostream>
#include <string>
using namespace std;

void reverse(string& str, int index) {
    int currentIndex = str.length() - index;
    cout << str[currentIndex] << endl;
    if (index <= str.length()) {
        reverse(str, index + 1);
    }
}

int main() {
    string flip;
    cout << "Enter a string to flip: ";
    cin >> flip;

    reverse(flip, 0);
}