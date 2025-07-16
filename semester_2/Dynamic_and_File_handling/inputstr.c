#include<stdio.h>
#include<stdlib.h>
#include <conio.h> 
int main(){
    char* ptr;
    char ch;

    ptr = (char *)calloc(1,sizeof(char));

    if(ptr == NULL){
        printf("memory not allocated!");
        return 1;
    }

    //better to add a max size limit to this!!!
    int i = 0;
    printf("enter a sting, enter / to stop: \n");
    do {
        ch = _getch();// read one char without waiting for Enter
        //for some reason, getchar doesnt let u see what you typed?


        if (ch == '\r') { // Enter key
            ch = '\n';   // store newline character
            putchar('\n'); // print newline on console // skip storing '\r'
        } else {
            putchar(ch); // echo char
        }

        char *temp = realloc(ptr, i + 2); // +1 for char, +1 for '\0'
        
        if (temp == NULL) {
            printf("\nMemory allocation failed!\n");
            free(ptr);
            return 1;
        }
        
        ptr = temp;

        ptr[i++] = ch;

    } while (ptr[i - 1] != '/');

    
    ptr[i - 1] = '\0';

    printf("\nString is:\n%s\n", ptr);

    free(ptr);
    return 0;
}