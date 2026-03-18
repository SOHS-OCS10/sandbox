#include<iostream>
using namespace std;

int countDigits(int n);

int main()
{
    int test1 = 2345;
    int count1 = countDigits(test1);
    cout << "There are a total of " << count1 << " digits in" << test1 << endl;

    int test2 = 25;
    int count2 = countDigits(test2);
    cout << "There are a total of " << count2 << " digits in" << test2 << endl;

    return 0;
}

int countDigits(int n)
{
    if (n < 10)
    {
        return 1;
    } else
    {
        return 1 + countDigits(n/10);
    }
}