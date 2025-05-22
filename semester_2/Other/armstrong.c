#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool iSarmstrong (int n);


int main(){
    int num;

    printf("Enter an number: ");
    if (scanf("%d",&num) != 1){
        printf("Error: Enter a valid number");
        return 1;
    }

    if(iSarmstrong(num)){
        printf("%d is an armstrong number",num);   
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    
    return 0;
}

bool iSarmstrong (int num){
    int r,sum=0;
    int n = num;
    while(n != 0){
    r = n %10;
    sum += pow(r,3);

    n = n/10;}

    return (num == sum); //instead of if else
}

