#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

    double * ptr = new double [1000000];
    for(int i=0;i<1000000;i++)
    {
        ptr[i]=rand();
    }
    delete ptr;
}