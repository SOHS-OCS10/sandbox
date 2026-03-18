#include <iostream>
using namespace std;

int calls=0;

void qs(int a[],int l,int r)
{
    calls++;
    if(l>=r) return;

    int i=l,j=r,p=a[(l+r)/2];

    while(i<=j)
    {
        while(a[i]<p) i++;
        while(a[j]>p) j--;
        if(i<=j){int t=a[i];a[i]=a[j];a[j]=t;i++;j--;}
    }

    qs(a,l,j);
    qs(a,i,r);
}

int main()
{
    int a[20];

    cout<<"Enter 20 numbers:\n";
    for(int i=0;i<20;i++) cin>>a[i];

    qs(a,0,19);

    cout<<"Sorted:\n";
    for(int i=0;i<20;i++) cout<<a[i]<<" ";

    cout<<"\nFunction calls: "<<calls;
}