#include <iostream>
#include <fstream>
using namespace std;



int main(){
    ifstream File;
    File.open("file.txt");
    int x;
    File>>x;
    
     int value;
    int failCount = 0;

    while (!File.eof()) {
        File>>value;
        if (File.fail()) {
            failCount++;
            File.clear();              
            File.ignore(1000, ' ');    
        } else {
            cout<<"Read integer: "<<value<<endl;
        }
    }

    cout <<"Number of failures: "<<failCount<< endl;

    File.close();
}