#include <stdio.h>

int reverse (int n);


int main(){
    int num;

    printf("Enter an integer: ");
    if (scanf("%d",&num) != 1){
        printf("Error: Enter a valid integer");
        return 1;
    }

    int result = reverse(num);
    printf("The reversed number is: %d", result);
    return 0;
}

int reverse (int n){
    int r,sum=0;
    while(n != 0){
    r = n %10;
    sum = sum*10 + r;
    n = n/10;}

    return sum;
}

//add a function for negative inputs ? + also do error handling
//r = -8 % 10 = -8 so my code already works because it is in c for -ve numbers BUT it wont for other languages
//negative numbers should be explicitly handled eg: python
// % only works for integers sooo floating point numbers will not be reversed