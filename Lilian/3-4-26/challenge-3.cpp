#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream file("rivers.txt");

    if (!file)
    {
        cout << "Can't open file.\n";
        return 1;
    }

    string line;
    while (getline(file, line))
        cout << line << endl;

    
}