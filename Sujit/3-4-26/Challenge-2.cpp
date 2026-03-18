#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("mixed.txt");
    int num, fails = 0;

    while (!file.eof()) {
        if (file >> num) {
            cout << num << endl;
        } else {
            fails++;
            file.clear();
            file.ignore(100, ' ');
        }
    }

    cout << "Failures: " << fails << endl;
    file.close();
    return 0;
}