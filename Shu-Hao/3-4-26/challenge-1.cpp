#include <iostream>
#include <fstream>
using namespace std;



int main(){
    ifstream File;
    File.open("river.txt");
    if (!File){
        cout<<"Wrong file name"<<endl;
        File.open("rivers.txt");
        cout<<File.fail()<<endl;
    }
}