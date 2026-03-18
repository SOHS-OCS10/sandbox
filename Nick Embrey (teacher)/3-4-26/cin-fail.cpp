#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int x;

    cin >> x;

    cout << cin.fail() << endl;

    cout << x << endl;

    cout << cin.fail() << endl;

    cout << cout.fail() << endl;

    cin
    // doesn't even run if there was a first failure
    cin >> x;

    cout << cin.fail() << endl;

    return 0;
}