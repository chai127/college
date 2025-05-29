#include <stdio.h>

//arr = [4, 3, 1, 2]
//pass 1, compare 4w3, then swap,j++, then 4w1 like this 4 at last
//pass 2, 3 goes before 4. also remember j goes only till the 2nd last position here
//pass 3, everything is already sorted.

void bubbleSort(int arr[], int n) {
   
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
