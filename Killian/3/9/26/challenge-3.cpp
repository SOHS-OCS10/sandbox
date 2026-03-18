#include<iostream>
#include<cstring>
using namespace std;

void reversePrint(const char arr [], int index)
{
    if(index==strlen(arr)+1)
        return;
    cout<<arr[strlen(arr)-index];
    reversePrint(arr, ++index);

}

int main()
{
    const char arr [6] = "Hello";
    reversePrint(arr, 0);
}