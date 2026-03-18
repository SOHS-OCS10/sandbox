#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file1;
    file1.open("riverrss.txt");
    if (!file1)
    {
        cout<<"Error! File not found!\n";
        file1.open("rivers.txt");
        file1.close();
    }
    cout<<file1.fail()<<endl;
    cout<<file1.good()<<endl;
    cout<<file1.eof()<<endl;
    return 0;
}