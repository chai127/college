//obv from gpt
#include <stdio.h>

// selection sort
void selectionSort(int arr[], int n) {

}

//print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
     int arr[] = {4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

   selectionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);


    return 0;
}
