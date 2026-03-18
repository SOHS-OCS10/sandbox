#include<iostream>
#include<cstdlib>
using namespace std;


int recursiveBinary(int arr[], int target, int hi, int low) // int arr[], 
{
    int mid = (hi+low)/2;

    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {

        recursiveBinary(arr, target, mid-1, low);
    }
    else
    {
        recursiveBinary(arr, target, hi, low +1);
    }


}

int binary(int arr [], int target, int hi, int low)
{
    int mid;
    do
    {
        int mid = (hi+low)/2;
        if(arr[mid]>target)
        {
            low = mid+1;
        }
        else
        {
            hi = mid-1;
        }
    }
    while(arr[mid]!=target)
    return mid;
}
int main()
{
    int target;
    int arr [20];

    for(int i =0;i<20;i++)
    {
        arr[i]=rand()(int);
        cout<<arr[i];
    }
    cout<<"Which value would you like to find the index of?";
    cin>>target;

    cout<<binary(arr, target, 20,0);
    cout<<recursiveBinary(arr,target,20,0);
    
}