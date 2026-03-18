#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Sujit() {
    cout << "Sujit" << endl;
}

int main() {
    Sujit();
    ifstream file;
    file.open("riverss.txt");

    if (!file) {
        cout << "Can't open file" << endl;
        file.clear();
        file.open("rivers.txt");
    }

    string line;
    while (getline(file, line))
        cout << line << endl;

    cout << "eof: " << file.eof() << endl;
    cout << "fail: " << file.fail() << endl;
    cout << "good: " << file.good() << endl;

    file.close();
    return 0;
}