#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;            
    if (num == 2) return 1;            
    if (num % 2 == 0) return 0;        

    int i;

    //256 = 1, 2, 4, 8, 16, 32, 64, 128 and 256. 
    // If a * b = num, one of a or b must be less than or equal to sqrt(num) and the other must be greater than or equal to sqrt(num) other wise ab > num
    //now, 32*4 = 256.. so we just need to check the half before the sqrt, otherwise it will go up to 32*4,etc

    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;    
    }

    return 1;  }

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
