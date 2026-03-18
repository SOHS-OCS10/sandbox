#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string out; // use a char array instead of string
    ifstream rivers;
    rivers.open("river.txt");
    if (!rivers) {
        cout << "file not found" << endl;
    }
    rivers.open("rivers.txt");
    cout << rivers.eof() << endl << rivers.fail() << endl << rivers.good() << endl;
    for (int i = 1; i <= 5; i++) {
        //cout << rivers.getline(rivers, out);
        getline(rivers, out);
        cout << out;
    }
    rivers.close();
}