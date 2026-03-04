#include <iostream>
#include <fstream>
#include <ofstream>
using namespace std;

int main() {
    fstream file;
    file.open("file.txt",ios::out);
    //cout
    file.close();
    ofstream file2;
    file2.open("file2.txt", ios::out);
    //cout
    file2.close();
    return 0;
}