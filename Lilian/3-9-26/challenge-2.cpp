#include<iostream>
using namespace std;

int sum (int n);

int main()
{
    int size = 5;
    int results = sum(size);

    cout << "The sum of integers from 1 to " << size << " is " << results << endl;

    return 0;
}

int sum (int n)
{
    if (n <=0)
    {
        return 0;
    } else
    {
        return n + sum(n-1);
    }
}