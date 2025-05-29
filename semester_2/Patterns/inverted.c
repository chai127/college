#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    
    printf("\npyramid of * \n");
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i ; j++){
            printf("*");
        }
        printf("\n");
    }

        printf("\nother half of pyramid of * \n");
    for(int i = n; i > 0; i--){
        for(int k = n-i; k > 0; k--){
            printf(" ");
        }
        for(int j = 0; j < i ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

