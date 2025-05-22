#include <stdio.h>
#include<string.h>

//reverses string including whitespace

int main()

{ 
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
 
    //buffer str will have( h e l l o \n \0) removes \n
    //strcspn is string complement span,  It returns the index of the first character in str that matches any character in the second argument.
    //basically (a,b) gives index of first occurrence of b in a
    str[strcspn(str, "\n")] = '\0'; 

    int len = strlen(str);
    char reversed[100];

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }

    reversed[len] = '\0'; 

    printf("Reversed string: %s\n", reversed);


    return 0;

}