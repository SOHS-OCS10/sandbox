#include<iostream>

using namespace std;
int sum(int n);
int main(){
    cout<<sum(1);
    return 0;
}
int sum(int n){
    int number = n;
    if(n > 1){
        number += sum(n-1);
    }
    return number;
}