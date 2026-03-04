#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream myFileStream;
    myFileStream.open("textFile1.txt", ios::out);
    myFileStream<< "The difference between a stream and a river is a river has more data in.";
    myFileStream.close();

    ofstream myOutputStream;
    myOutputStream.open("textFile2.txt");
    myOutputStream << "The difference between a stream and a creek is a creek runs more slowly.";
    myOutputStream.close();
    
    return 0;
}