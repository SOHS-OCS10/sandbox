

#include <iostream>
#include <fstream>
using namespace std;

int main() {


    // 1. >> extraction operator
    // 2. you can't stream directly from the file to cout
    //    you have to put in a string first.

    std::cout << ios::goodbit << endl;

    return 0;
}