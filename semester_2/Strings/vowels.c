#include<stdio.h>
#include<string.h>
#include <ctype.h> 

int main() {

    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }


for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || 
        str[i] == 'e' ||  
        str[i] == 'i' || 
        str[i] == 'o' || 
        str[i] == 'u'
    ) {
        count++;
        }
    }

    printf("%s contains %d vowels",str,count);

    return 0;}