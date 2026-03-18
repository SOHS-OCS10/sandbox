#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void InitializeArray(int a[]);
int RecursiveBinarySearch(int a[], int n, int first, int last, int &calls);
int LoopBinarySearch(int a[], int n, int &calls);

int main()
{
    int arr[20];
    int calls=0;
    InitializeArray(arr);
    cout<<"Would you like to use a loop or recursive function (1/2)? ";
    int input;
    cin>>input;
    if (input==1)
    {
        cout<<"What value would you like to search for? ";
        int input;
        cin>>input;
        cout<<input<<" was found at index "<<binarySearch(arr, input, arr[0], arr[20])<<" with "<<calls<<" function calls.\n";
    }
    else
    {
        cout<<"What value would you like to search for? ";
        int input;
        cin>>input;
    }
    return 0;
}

void InitializeArray(int a[])
{
    srand(static_cast<unsigned int>(time(0)));
    for (int count=0; count<20; count++)
        a[count]=rand()%100+1;
}

int binarySearch(int a[], int n, int first, int last, int &calls)
{
    calls++;
    int middle=(first+last)/2;
    if (n==a[middle])
        return middle;
    else if (a[middle]>n)
        last=middle-1;
    else
        first=middle+1;
    if (first==last)
        return -1;
    binarySearch(a, n, first, last);
}

int LoopBinarySearch(int a[], int n, int &calls)
{
    calls=0;
    int first, last, middle;
    first=a[0];
    last=a[20];
    bool found=false;
    while (!found)
    {
        calls++;
        middle=(first+last)/2;
        if (n==a[middle])
            found=true;
        else if (a[middle]>n)
            last=middle-1;
        else
            first=middle+1
        if (first==last)
            return -1;
    }
    return middle;
}