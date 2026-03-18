#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string out;
    int fail;
    ifstream mix;
    mix.open("mixed.txt");
    if (!mix) {
        cout << "file not found" << endl;
    }
    mix.open("mixed.txt");
    cout << mix.eof() << endl << mix.fail() << endl << mix.good() << endl;
    for (int i = 1; i <= 5; i++) {
        getline(mix, out);
        cout << out;
    }
mix.close();
}