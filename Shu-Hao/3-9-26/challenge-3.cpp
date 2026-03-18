#include <iostream>
using namespace std;



void reversePrint(const string& str, int index){
    if (index>=str.length()){
        return;
    }
    else{
        reversePrint(str, index+1);
        cout<<str[index]<<endl;
    }
}

int main(){
    string str="hello";
    int index=0;
    reversePrint(str,index);
}