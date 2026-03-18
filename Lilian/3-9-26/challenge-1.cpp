#include<iostream>
using namespace std;

void countdown(int n);

int main()
{
    countdown(3);
    return 0;
}

void countdown(int n)
{
    if (n < 0) 
    {
        return 0; // return without 0
    } else 
    {
        cout << n << endl;
        countdown(n-1);
    }
}