using namespace std;
#include <iostream>
#include <fstream>

int main(){

    ofstream file1("Stream_vs_river.txt");
    file1 <<"A stream is smaller than a river. \n";
    file1 <<"A river is larger and wider. \n";
    file1.close();

    fstream file2("Stream_vs_creek.txt", ios::out);
    file2<<"A creek is usually small. \n";
    file2 <<"A stream and creek are often similar.\n";
    file2.close();

    return 0;
}