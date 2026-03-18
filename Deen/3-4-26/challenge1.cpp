#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream riverFile;
    string line;
    
    riverFile.open("riverz.txt");

    if(!riverFile){
        cout<<"Error opening file\n";

        riverFile.clear();
        riverFile.open("rivers.txt");

    }

    if (riverFile){
        cout <<"Reading file contents: \n";

        while (getline(riverFile, line)){
            cout<< line << endl;

        }
    }

    cout<<"\nstream status: \n";
    cout<<"good (): " << riverFile.good() <<endl;
    cout<<"fail (): " << riverFile.fail() <<endl;
    cout<<"eof(): " << riverFile.eof() <<endl;

    riverFile.close();

    return 0;
}

