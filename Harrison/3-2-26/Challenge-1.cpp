#include <iostream>
#include<fstream>
using namespace std;


int main(){
    fstream FirstFile;
    FirstFile.open("The First file I made",ios::out);
    FirstFile <<"the difference between a river and a stream is that a stream is smaller than a river and is sometimes more dirty.";
    FirstFile.close();
    fstream AnotherFile;
    AnotherFile.open("Another File",ios::out);
    AnotherFile <<"the difference between a stream and a creek is that a creek is smaller and is usually in the mountains flowing in between rocks. you are more lickily to encounter a creek on a hike than a stream, though you may encounter both.";
    AnotherFile.close();
    
    
    return 0;
}