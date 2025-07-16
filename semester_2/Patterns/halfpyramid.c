#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("\npyramid of * \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
        printf("\nother half of pyramid of * \n");
    for(int i = 0; i < n; i++){
        for(int k = n-i; k > 0; k--){
            printf(" ");
        }
        for(int j = 0; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\npyramid of numbers \n");
     for(int i = 0; i < n; i++){
        for(int j = 0; j <= i ; j++){
            if(i < 9)
            {printf("%d ",i+1);
            }
            else{
                printf("%d",i+1);
            }
        }
        printf("\n");
    }
    printf("\npyramid of numbers again\n");
     for(int i = 0; i < n; i++){
        int k = 1;
        for(int j = 0; j <= i ; j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    printf("\npyramid of Alphabets \n");

    char alphabet = 'A';
    int m=0;
    
    for(int i = 0; i < n; i++){
        if((i > 25) && (m > 25)){
            // printf("\n%d andddd were hereee \n", m);
            alphabet = 'A';
            m = 0;  
        }
        
        for(int j = 0; j <= i ; j++){
            
            printf("%c",alphabet);
        }
        printf("\n");
        alphabet++;
        m++;
    }

    return 0;
}