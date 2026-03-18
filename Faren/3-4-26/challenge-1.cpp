#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream file("rivre.txt");
    if (!file) {
        cout << "Failed to open";
        file.open("river.txt");
    }
    if (!file) {
        cout << "Failed to open";
        return 1;
    }
    string line;
    while (getline(file, line))
        cout << line << endl;

    cout << "EOF reached? " << (file.eof() ? "Yes" : "No") << endl;
    cout << "Fail state? " << (file.fail() ? "Yes" : "No") << endl;
    cout << "Good state? " << (file.good() ? "Yes" : "No") << endl;

    return 0;
}