#include <iostream>
using namespace std;

void countdown(int n){
    cout<<n<<endl;
    if (n!=0){
        countdown(n-1);
    }
}
int main(){
countdown(10);
}