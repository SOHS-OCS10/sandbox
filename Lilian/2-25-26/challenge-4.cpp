#include<iostream>
using namespace std;

int main()
{
    while (true){
        double *leak = new double[1000000];
    }
    // The program will not work because there is not enough memory

    return 0;
}