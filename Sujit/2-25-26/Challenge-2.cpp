#include <iostream>
using namespace std;

int main() {
    // 2c: Array for 100 doubles
    double smallArray[100];
    for(int i = 0; i < 100; i++) {
        smallArray[i] = i * 1.5; 
    }
    
    // 2d: Array for 1000 doubles
    double largeArray[1000];
    for(int i = 0; i < 1000; i++) {
        largeArray[i] = i * 2.5;
    }

    // 2e: Smallest size to crash? 
    // Try increasing this number (e.g., 1000000) to find the limit.
    // double crashArray[1000000]; 
    
    cout << "Arrays filled successfully." << endl;
    return 0;
}