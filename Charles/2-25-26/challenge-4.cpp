#include <iostream>
using namespace std;

int main() {
    while (true) {
        int * memLeak = new int;
    }

    // This is a memory leak and uses up memory that should be deleted
}