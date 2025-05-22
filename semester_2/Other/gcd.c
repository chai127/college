//eucledian approach
#include <stdio.h>
#include <stdlib.h>

int main(){
    int big,small,r;

    printf("Enter two numbers: ");
    
    // Input validation
    if (scanf("%d %d", &big, &small) != 2) {
        printf("Error: Invalid input. Please enter two valid integers.\n");
        return 1;  // Exit 
    }

     // Convert numbers to absolute values
    big = abs(big);
    small = abs(small);
  
    // Edge case: both numbers are zero
    if (big == 0 && small == 0) {
        printf("GCD is undefined when both numbers are zero.\n");
        return 1;
    }

    // Edge case: if both numbers are the same, return the number
    if (big == small) {
        printf("Note: Both numbers are the same. GCD is %d.\n", big);
        return 0;
    } 
    
    if (big < small){
        int temp = big;
        big = small;
        small = temp;
    }

    // Exit, as GCD of (x, 0) is x
   if (small == 0) {
        printf("Note: One of the numbers is zero.\n");
        printf("The GCD of two numbers is: %d\n", big);
        return 0;
    }
    
    while (small != 0) {
        r = big % small;
        big = small;
        small = r;
    }

    printf("The GCD of two numbers is: %d", big);



    return 0;
}