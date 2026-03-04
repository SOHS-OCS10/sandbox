#include <iostream>
#include <fstream>
using namespace std;



int main(){
    ifstream File1("book1.txt");
    string line;
    for (int i=0;i<10;i++){
        getline(File1,line);
        cout<<line<<endl;
    }
    File1.close();
    ifstream File2("book1.txt");
    string line2;
    for (int j=0;j<10;j++){
        getline(File2,line2);
        cout<<line2<<endl;
    }
    File2.close();


}