#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    delete ptr;

    cout << *ptr << endl;
    // It doesn't working as the ptr is deleted, so dereferencing doesn't work and become a garbage value

    return 0;
}