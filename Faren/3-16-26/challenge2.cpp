#include <iostream>
using namespace std;

void quick(int arr[], int lo, int high);
int partition(int arr[], int lo, int high);

int main(){
    int a[20] = {19,18,16,17,13,12,14,15,11,10,9,8,7,5,6,3,4,5,0,2,1};

    quick(a, 0, 19);
    cout << "Sorted arr: " << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}
p
void quick(int arr[], int lo, int high){

        if (lo < high) {
            int p = partition(arr,lo,high);

            quick(arr, lo, p-1);
            quick(arr, p+1, high);
        }
}




int partition(int arr[], int lo, int high){

    int pivot = arr[high];
    int i = lo-1;

    for(int j = lo; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }

    }
    swap(arr[i+1],arr[j])
    return i+1;
}