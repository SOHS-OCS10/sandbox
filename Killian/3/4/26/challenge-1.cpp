#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ifstream riverText;
    riverText.open("rvers.txt");

    if(!riverText)
    {
        cout<< riverText.bad()<<endl;
        riverText.open("rivers.txt");
    }

    cout<<riverText.getline();
    cout<<riverText.good()<<endl;
    riverText.close("rivers.txt");
}