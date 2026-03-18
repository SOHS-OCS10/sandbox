#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream file("textFile2.txt");

    if (!file)
    {
        cout << "Can't open file.\n";
        exit(1);
    }

    int value;
    int failCount = 0;

    while (!file.eof())
    {
        file >> value;

        if (file.fail())
        {
            failCount++;
            file.clear();
            file.ignore();
        } 
        else 
            cout << "Read integer: " << value << endl;
    }

    cout << "Number of failures: " << failCount << endl;

    file.close();
    return 0;
}