#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFileStream;

    myFileStream.open("myNewFiiiile.txt");

    string x;
    myFileStream >> x;
    cout << x << endl;

    cout << (!myFileStream) << endl;

    myFileStream.clear();

    cout << (!myFileStream) << endl;

    myFileStream.close();

    return 0;
}