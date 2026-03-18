#include<iostream>

using namespace std;
void countdown(int n);
int main(){
    countdown(17);
    return 0;
}
void countdown(int n){
    cout<<n<<endl;
    if(n > 0){
        countdown(n-1);
    }
}