#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("rivers.txt");
    string line;

    while (getline(file, line))
        cout << line << endl;

    file.clear();
    file.seekg(0);

    int count = 0;
    char ch;
    while (file.get(ch))
        count++;

    cout << "Characters: " << count << endl;
    file.close();
    return 0;
}