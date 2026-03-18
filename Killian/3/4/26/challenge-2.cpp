#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ifstream dataFile;
    dataFile.open("datatypemixer.txt");
    
        cout>>dataFile.getline();
        while(dataFile.fail())
        {
            dataFile.clear();
            dataFile.ignore(); 
        }

    
    dataFile.close();
}