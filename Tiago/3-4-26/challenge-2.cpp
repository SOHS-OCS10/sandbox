#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("mix.txt", ios::in);
    int count = 0;
    int x;
    file >> x;
    cout << x;
    if(file.fail()) {
        
    }
    return 0;
}