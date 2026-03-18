#include <iostream>
using namespace std;

int binarySearch(int a[], int lowest, int highest, int target, int &count);
int binaryWhile(int a[], int lowest, int highest, int target, int &count);

int main() {
    const int SIZE = 20;
    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int target;
    int count;
    cout << "Enter a number: ";
    cin >> target;
    cout << "The number is in position " << binarySearch(a, 0, SIZE-1, target, count) << " and " << count << " comparisons were made.\n";
    return 0;
}

int binarySearch(int a[], int lowest, int highest, int target, int &count) {
    count++;
    if(a[(highest+lowest)/2] == target) {
        return (highest+lowest)/2;
    } else if(a[(highest+lowest)/2] > target) {
        binarySearch(a, lowest, (highest+lowest)/2, target, &count);
    } else {
        binarySearch(a, (highest+lowest)/2, highest, target, &count);
    }
}

int binaryWhile(int a[], int lowest, int highest, int target, int &count) {
    int middle = (lowest+highest)/2;
    while(target != a[middle]) {
        count++;
        if(target < a[middle]) {
            a[highest] = a[middle];
            a[middle] = (a[lowest]+a[highest])/2;
        } else if(target > a[middle]) {
            a[lowest] = a[middle];
            a[middle] = (a[lowest]+a[highest])/2;
        }
    }
    return middle;
}