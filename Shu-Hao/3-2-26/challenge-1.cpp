#include <iostream>
#include <fstream>
using namespace std;



int main(){
ofstream File("file-1.txt");

File<<"Streams are fast, rivers are bodies of water"<<endl;
File.close();
ofstream File_2("file-2.txt");
File_2<<"Streams are large, creeks are small"<<endl;
File_2.close();

}
