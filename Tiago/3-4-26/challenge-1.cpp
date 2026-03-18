#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;
    ifstream file("rivurs.txt", ios::in);
    if(!file) {
        cout << "error";
        file.close();
        file.open("rivers.txt", ios::in);
    }
    for(int i = 0; i < 3; i++) {
        getline(text, 50); // .getline wants a character array rather than a string (aka "c style string")
    }
    cout << "eof: " << file.eof() << endl;
    cout << "fail: " << file.fail() << endl;
    cout << "good: " << file.good() << endl;
    file.close();
    return 0;
}