#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file1("file1.txt");
    cout << file1 << endl;
    file1.close();

    return 0;
}