#include<iostream>
using namespace std;

void reversePrint(const string& str, int i);

int main()
{
    string test = "Hello!";
    
    cout << test << endl;
    reversePrint("Hello!", 0);
    cout << test << endl;

    return 0;
}

void reversePrint(const string& str, int i)
{
    if (i >= str.length())
    {
        return 0;
    } else
    {
        reversePrint(str, i + 1);
        cout << str[i];
    }
}