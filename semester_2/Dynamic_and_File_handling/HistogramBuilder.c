#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    
    ptr = (int* )calloc(1, sizeof(int));

    if(ptr == NULL){
        printf("memory not allocated");
        return 1;
    }

    printf("enter whole numbers from 0 to 9\n");
    printf("enter -1 to stop\n");

    int i = 0;

   do {
        int *temp = (int *)realloc(ptr, (i + 1) * sizeof(int));
        if(temp == NULL) {
            printf("Memory not reallocated\n");
            free(ptr);
            return 1;
        }
        scanf("%d", &temp[i]);
        ptr = temp;
        i++;
    } while(ptr[i - 1] != -1);

   printf("Elements are:\n");
    for(int k = 0; k < i - 1; k++) {
        if(k != i - 2) {
            printf("%d, ", ptr[k]);
        } else {
            printf("%d", ptr[k]);
        }
    }

    //Histogramm



    free(ptr); 
    return 0;
}

    //histogram logic obv bruteforceee

    //logic for max first
    // int max = 0;
    // int f = 0; //frequency
    // for(int j = 0; j < i; j++){
    //     for(int n = 0; n < i; n++){
    //         if(ptr[n] == j){
    //             f++;
    //         }
    //     }
    //     if(f > max){
    //         max = f;
    //     }
    // }
    // int maxim = max;
    // for(int k = 0; k < max; k++){
    //     for(int j = 0; j < 10; j++ ){
    //         int frequency = 0;
    //         //check frequency of j in the array 
    //         for(int n = 0; n < i; n++){
    //             if(ptr[n] == j){
    //                 frequency++;
    //             }
    //         }
    //         //check it with max
    //         if(frequency >= maxim){
    //             printf(" * ");
    //         }
    //         else{
    //             printf("   ");
    //         }
    //     }
    //     maxim--;
    //     printf("\n");
    // }

    //  for (int j = 0; j < 10; j++) {
    //     printf(" %d ", j);
    // }
    // printf("\n");