#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
        for(int k = n-i; k > 0;k--){
            printf(" ");
        }
        for(int j=0; j<=i;j++){
            printf("*");
        }
         for(int j=0; j<=i-1;j++){
            printf("*");
        }
            printf("\n");
    }

    // efficient logic
 int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }

    return 0;
}
