#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file1;
    file1.open("file1.txt");
    string x;
    file1 >> x;
    cout << x << endl;
    file1.close();

    return 0;
}