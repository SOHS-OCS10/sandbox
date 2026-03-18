#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream File;
    File.open("file.txt");
    cout<<File.eof()<<endl;
    File.clear();
    File.seekg(0L, ios::beg);
    char ch;
   int count = 0;
    while (File.get(ch)){
    cout << ch;
    count++;
    }
    cout<<endl;
}