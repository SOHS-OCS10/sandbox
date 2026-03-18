#include<iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
{

    if((high-low)==0)
        break;
    else if(arr[low]>arr[high])
    {
        quickSort(arr, low, high-1);
      
    }
    else
    {
        quickSort(arr, low+1, high);
    }
   
}

int main()
{
    int arr[]={1,3,4,5,6};

    quickSort(arr, 0,4);
}