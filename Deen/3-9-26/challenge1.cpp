#include <iostream>
using namespace std;

void countdown(int n){
    if (n < 0){
        return;
    }

    cout << n << endl;
    countdown(n - 1);
}
int main(){
    countdown(3);
    return 0;
}