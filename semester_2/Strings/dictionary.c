#include <stdio.h>

#include <string.h>

int main() {

    char str[5][20] = {"banana", "apple", "orange", "grape", "mango"};

    char temp[20];

    for (int i = 0; i < 4; i++) {

    for (int j = i + 1; j < 5; j++) {

    if (strcmp(str[i], str[j]) > 0) {

        // swap str[i] and str[j]
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);

   
    }
        
    }
    //  printf("pass: %d \n", i+1);
    // for (int i = 0; i < 5; i++) {
    //     printf("%s\n", str[i]);
    // }
}

    printf("Sorted list of fruits:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;}