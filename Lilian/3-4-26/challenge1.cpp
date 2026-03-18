#include<iostream>
#include<fstream>
#include<string)
using namespace std;

int main()
{
    ifstream file;

    file.open("rivers.txt");

    if (!file)
    {
        cout << "Can't open file";

        file.clear();
        file.open("river.txt");
    }

    string line;
    while (getline(file, line))
        cout << line << endl;

    cout << "Stream Status:\n";
    cout << "eof(): " << file.eof() << endl;
    cout << "fail(): " << file.fail() << endl;
    cout << "good(): " << file.good() << endl;

    file.close();
    return 0;
}