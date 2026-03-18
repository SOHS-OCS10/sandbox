#include <iostream>
using namespace std;

int countDigits(int n) {
    static int digits = 1;
    if (n < 10) {
        return digits;
    } else {
        countDigits(n / 10);
        digits++;
        return digits;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number of digits in " << number << " is " << countDigits(number) << endl;
}