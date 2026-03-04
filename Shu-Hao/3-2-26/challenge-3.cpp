#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;


int main(){
    string input;
    cout<<"Enter the string: ";
    getline(cin,input);
    ostringstream obj;
    obj<<left<<setw(10)<<setfill('*')<<input<<endl;
    string new_string=obj.str();
    cout<<"New string: "<<new_string<<endl;


}