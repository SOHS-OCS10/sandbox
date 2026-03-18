#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

    ifstream myFile( "rivrs.txt" );

    if(!myfile) {

        cout << " wrong file " << endl; 

        myFile.clear();
        myFile.open( "rivrs.txt ");
    }


    string line; 
    while (getline(myFile, line)) {

        cout << "Line: " << endl; 
    }
}