#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    double a[100];
    srand(static_cast<unsigned int>(time(0)));
    for (int count=0; count<100; count++)
        a[count]=rand()%1000;
    double b[1000];
    for (int count=0; count<100; count++)
        b[count]=rand()%1000;
    /*
    double c[50000000]
    for (int count=0; count<50000000; count++)
        c[count]=rand()%1000; 
    program crash */
    return 0;
}