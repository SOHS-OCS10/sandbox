#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream book1("textFile1.text");
    string words;

    for (int i = 0; i < 10 && book1 >> word; i ++)
        cout << words << " ";
    cout << "\n";
    book1.close();

    return 0;
}