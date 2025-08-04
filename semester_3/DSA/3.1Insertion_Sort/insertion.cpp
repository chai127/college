#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int a[], int n) {
    for(int i=1; i < n; i++) {
        int key,j;
        j = i-1;
        key = a[j];
        while(j>=0  && a[j] > a[j+1]) {
            swap(a[j],a[j+1]);
            j--;
        }
        key = a[j+1] ;
    }
}

void printArray(int arr[], int n) {
    cout<<"the array is: \n";
    for(int j=0; j<n;j++) {
        cout<<arr[j]<<" ";
    }
}

int main() {
    int arr[5] = {89,75,32,22,11}; 
    insertionSort(arr,5);
    printArray(arr,5);
    return 0;
}