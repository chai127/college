#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int a[], int n) {
    int isSwapped;
    for(int i = 0; i < n - 1; i++) {
        isSwapped = 0;
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j+1] ){
                swap(a[j], a[j+1]);
                isSwapped = 1;
            }
        }
        if(!isSwapped) {
            break; // if in a pass no swaps happen loop is already sorted
        }
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
    bubbleSort(arr,5);
    printArray(arr,5);
    return 0;
}