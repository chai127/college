#include <stdio.h>

struct Distance {
    int inches, feet;
};

void add(struct Distance d1, struct Distance d2){

    struct Distance result;

    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches = result.inches % 12;

    printf("\nSum of distances = %d feet %d inches\n", result.feet, result.inches);
}

int main(){
    struct Distance d1,d2;

    printf("enter the first distance feet and inches: ");
    scanf("%d%d",&d1.feet,&d1.inches);

    printf("enter the second distance feet and inches: ");
    scanf("%d%d",&d2.feet,&d2.inches);
    
    add(d1, d2);

    return 0;

}   