#include <iostream>
using namespace std;

int binary(int arr[], int lo, int high, int C, int& calls);

int main(){
    int choice;
    int calls = 0;
    int arr[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; // just use curly braces instead of square brackets
    cout << "What value do you want to search for from 0-19: ";
    cin >> choice;

    
    int result = binary(arr, 0, 19, choice, calls);
    if (result == -1)
        cout << "Value was not found";
    else
        cout << "Value was found at index " << result;

    cout << "\nNumber of recursive calls: " << calls;
    return 0;
}




int binary(int arr[], int lo, int high, int C, int& calls){

    calls++;
    if (lo > high)
        return -1;
    if (C < 0 || C > 19)
        return -1;

    int mid = (lo+high)/2;

    if (arr[mid] == C)
        return mid;
    else if (C < arr[mid])
        return binary(arr, lo, mid-1, C, calls);
    else   
        return binary(arr, mid+1, high, C, calls);
}