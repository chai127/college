#include <stdio.h>
#include <math.h>

//this is just for integers for long 32 => 64

void convert(int n) {
    int binary[32];  
    int i = 0;

    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main(){

    int num;

    printf("Enter decimal number: ");

    scanf("%d",&num);

  convert(num);

  

    return 0;
}