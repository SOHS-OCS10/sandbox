#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream file1("poem.txt");
    ifstream file2("poem.txt");
    
    char line[100];
    string word;

    cout<<"Reading using >>operator: \n";

    while (file1>>word){
        cout<<word<<endl;
    }

    cout<<"\nreading using getline(): \n";

    while (file2.getline(line,100)){
        cout<<line<<endl;
    }

    file1.close();
    file2.close();

    return 0;
}