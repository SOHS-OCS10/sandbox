#include <iostream>
using namespace std;

int main() {
    // 4a: Create a while loop that allocates memory on the heap 
    // using 'new' but never deletes it.
    cout << "Starting memory leak test... Check your system monitor!" << endl;

    while (true) {
        // We allocate an array of 10,000 doubles every iteration.
        // Since we never call 'delete', this memory stays "claimed."
        double* leak = new double[10000];
        
        // 4b: TEST COMMENT
        /* WHAT IT DID: 
           When I ran this in Codespaces, the program began consuming RAM rapidly. 
           Because the 'delete' keyword was omitted, the program never released 
           the old memory before grabbing new memory. Eventually, the operating 
           system's OOM (Out of Memory) killer would terminate the process to 
           prevent the entire system from crashing.
        */
    }

    return 0;
}
