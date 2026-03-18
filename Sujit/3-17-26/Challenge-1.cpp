#include <iostream>
using namespace std;

int calls = 0;

int rbs(int a[], int l, int r, int x)
{
    calls++;
    if(l > r) return -1;

    int m = (l+r)/2;

    if(a[m] == x) return m;
    if(x < a[m]) return rbs(a,l,m-1,x);
    return rbs(a,m+1,r,x);
}

int wbs(int a[], int n, int x)
{
    int l=0,r=n-1;

    while(l<=r)
    {
        int m=(l+r)/2;

        if(a[m]==x) return m;
        if(x<a[m]) r=m-1;
        else l=m+1;
    }

    return -1;
}

int main()
{
    int a[20],x;

    cout<<"Enter 20 sorted numbers:\n";
    for(int i=0;i<20;i++) cin>>a[i];

    cout<<"Number to search: ";
    cin>>x;

    int r = rbs(a,0,19,x);

    if(r==-1) cout<<"Recursive: not found\n";
    else cout<<"Recursive: found at "<<r<<"\n";

    cout<<"Function calls: "<<calls<<"\n";

    int w = wbs(a,20,x);

    if(w==-1) cout<<"While: not found\n";
    else cout<<"While: found at "<<w<<"\n";
}