#include <iostream>

int main(){
    int n = 100;
    double arr[n];

    for (int i = 0; i <100; i++)
    arr[i] = i + 1;

int a = 1000;
double arrr[a];

for (int i = 0; i <1000; i++)
    arrr[i] = i + 1;
int b = 10000000;
double arrrr[b];

for (int i = 0; i <10000000; i++)
    arrrr[i] = i + 1;   


return 0; //The code crashes at 1 million doubles, which is 8MB.
} 