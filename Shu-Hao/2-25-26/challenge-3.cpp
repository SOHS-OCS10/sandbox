#include <iostream>

using namespace std;

int main(){
    int *x=new int[10000000];
    for (int i=0;i<10000000;i++){
        x[i]=i;
    }
    delete x;
}


