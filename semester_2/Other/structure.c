#include <stdio.h>
#include<string.h>

int main() {

    struct Student {
        int id;
        char name[50];
        float marks;
    };
    
    struct Student s[3];  // Declaring a structure variable inside main

     for (int i = 0; i < 3; i++) {
        printf("Enter data for Student no. %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        getchar(); //since scanf automatically generates a \n

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);  //it keeps \n tho so while printing it will incluce it

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

for(int i=0 ; i < 3; i++)
   {
    printf("\nData of Student no: %d: \n", i+1); 
    printf("Student ID: %d\n", s[i].id);
    printf("Student Name: %s",  s[i].name); //sooo since it keeps \n, i didnt add extra \n
    printf("Student Marks: %.2f\n",  s[i].marks);}

    return 0;
}
