#include <iostream>

int main(){

int b = 10000000;

double * arr = new double[b];

for (int i = 0; i <10000000; i++)
    arr[i] = i + 1;   

delete[] arr;
return 0;

}