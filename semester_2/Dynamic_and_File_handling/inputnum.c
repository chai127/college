#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;

    ptr = (int *)calloc(1,sizeof(int));

    if(ptr == NULL){
        printf("memory not allocated!");
        free(ptr);
        return 1;
    }

    int i = 0;
    printf("enter integers, enter -1 to stop: \n");
    do {
        scanf("%d", &ptr[i]);
        i++;

        int* temp = (int *)realloc(ptr, (i + 1) * sizeof(int));
        if (temp == NULL) {
            //if realloc fails, original memory (ptr) is still valid
            printf("memory reallocation failed!\n");
            free(ptr);
            return 1;
        }
        ptr = temp;

    } while (ptr[i - 1] != -1);
    printf("elements aree\n");
    for(int k = 0; k < i - 1; k++) {
        if(k != i-2){
            printf("%d, ", ptr[k]);
        }
        else{
            printf("%d", ptr[k]);
        }
        
    }

    free(ptr);
    return 0;
}