#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream file("story.txt");

    char ch;
    int count =0;
    cout <<"File contents : \n";

    while (file.get(ch)){
        cout << ch;
    }

    if(file.eof()){
        cout<<"\n\n reached end of the file.\n";
    }

    file.clear();
    file.seeking(0L, ios::beg);

    while(file.get(ch)){
        count++;
    }

    cout<<"\n Total character count:"<<count<<endl;

    file.close();

    return 0;
}