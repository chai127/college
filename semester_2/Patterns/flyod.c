#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    
    printf("\npyramid of numbers \n");
     for(int i = 0, k = 1; i < n; i++){
        for(int j = 0; j <= i ; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }


    return 0;
}