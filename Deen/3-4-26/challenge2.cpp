#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int main(){

    ifstream file("mixed.txt");

    int value;
    int failures =0;

    while(!file.eof()){

        file >> value;

        if (file.fail()){
            failures++;

            file.clear();
            file.ignore(numeric_limits<streamsize>::max(),' ');
                     
        }
        else{
            cout<<"integer read: "<<value<<endl;
        }
    }

    cout<<"\n number of failers: " <<failures <<endl;

    file.close();

    return 0;
}