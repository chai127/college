#include <stdio.h>
#include <stdbool.h>

//will break at n = 46

void fib(int a, int b, int n);

int main(){

    int n;
    printf("Enter the maximum number of terms: ");
    scanf("%d",&n);

    if (n >= 1) printf("0");
    if (n >= 2) printf(", 1");

    fib(0,1,n-2);

    return 0;
}

void fib(int a, int b, int n) {
    if (n > 0) {
        int next = a + b;
        printf(", %d", next);
        fib(b, next, n - 1);
    }
}
