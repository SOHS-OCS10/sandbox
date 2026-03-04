#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file1;
    file1.open("file1.txt", ios::out);
    file1<<"A river can hold more data than a stream.";
    file1.close();
    ofstream file2;
    file2.open("file2.txt");
    file2<<"Creeks run slower than streams.";
    file2.close();
    return 0;
}