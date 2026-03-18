#include <iostream>

using namespace std;


void countdown(int n){
    cout << n << endl;
    if (n <= 0) {
        return;
    }
    else {
        countdown(n-1);
    }

}
int main(){
    int NUM = 10;
    countdown(NUM);
    return 0;
}