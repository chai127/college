#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("enter number of elements\n");
    scanf("%d", &n);
    int* ptr = (int *)malloc(sizeof(int) * n); //(int *) is optional in c but required in cpp 


     if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1; // Exit with error code
    }

    printf("enter elements of the array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    int max = ptr[0];

    for(int i = 0; i < n; i++){
        if(max < ptr[i]){
            max = ptr[i];
        }
    }
    printf("the largest element is: %d \n", max);
    
    free(ptr);

    return 0;
}