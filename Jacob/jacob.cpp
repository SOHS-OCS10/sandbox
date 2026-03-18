#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // challenge 1
    ifstream file;

    file.open("river.txt");
    if (!file) {
        cout << "Error!";
    }


    return 0;
}