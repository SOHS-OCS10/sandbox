#include <iostream>
using namespace std;

int count(int num);

int main() {
    cout << count(12345) << endl;
    return 0;
}

int count(int num) {
    if(num < 10) {
        return 1;
    } else {
        return 1+count(num/10);
    }
}