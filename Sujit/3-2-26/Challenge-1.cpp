#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // a. fstream with constructor
    fstream f1("river.txt", ios::out);
    f1 << "Rivers have more data/flow than streams.";
    f1.close();

    // b. ofstream with constructor
    ofstream f2("creek.txt");
    f2 << "Creeks run more slowly than streams.";
    f2.close();

    return 0;
}