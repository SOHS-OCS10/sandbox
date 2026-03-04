#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream file1("/Users/deenvon/Downloads/sample2.txt");
    string word;
    int count = 0;
    
    cout << "First file words:\n";

    while (count < 10 && file1 >> word) {
        cout << word << " ";
        count++;
    }
    file1.close();
    
    cout << "\n\n";

    ifstream file2("/Users/deenvon/Downloads/sample3.txt");
    string line;
    count = 0;
    cout << "Second file words:\n";

    while (count < 10 && file2 >> word){
        cout << word << " ";
        count++;
    }
    file2.close();

    if (!file1){
        cout << "Could not open sample2.txt\n";
    }
    
    return 0;
}
