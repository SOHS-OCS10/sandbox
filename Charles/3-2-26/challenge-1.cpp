#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream filestream;

    filestream.open("creek.txt", ios::out);
    filestream << "The difference between a stream and a creek is that a creek is smaller than a stream, and a stream is a broader term for a long body of water";
    filestream.close();

    ofstream outputstream;
    outputstream.open("river.txt");
    outputstream << "The difference between a stream and a river is that a stream is usually smaller and narrower than a river";
    outputstream.close();

    return 0;
}