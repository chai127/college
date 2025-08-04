#include <stdio.h>
#include <stdbool.h>
// #define maxsize 20 No memory is allocated. The value 100 is substituted directly into the code.

#define maxsize 5

// typedef says, "I'm going to create a new name for this type." 
// The type is the struct { ... }, and the new name is Stack.

// Without typedef:

// If you didn't use typedef, you would have to refer to the structure 
// using the struct keyword every time you declare a variable of that type.

typedef struct  {
    int arr[maxsize];
    int top;
}stack;

void initStack(stack* a) {
    a->top = -1;
}

// isFull
bool isFull(stack* a ) {
    if(a->top >= maxsize - 1) {
        return true;
    }
    return false;
}
// isEmpty
bool isEmpty(stack* a ) {
    if(a->top == -1) {
        return true;
    }
    return false;
}
// push
void push(stack* a, int data) {
    if (isFull(a)) { 
        printf("\nStack Overflow\n");
        return;
    }
    a->top++; 
    a->arr[a->top] = data; 
    printf("Pushed: %d, current top index: %d\n", data, a->top); 
}
// pop
int pop(stack* a) {
    if (isEmpty(a)) { 
        printf("\nStack is Empty\n");
        return -1; 
    }
    int data = a->arr[a->top];
    a->top--;
    printf("Popped: %d, current top index: %d\n", data, a->top); 
    return data;
}
// peek
int peek(stack* a) {
    if (isEmpty(a)) { 
        printf("\nStack is Empty\n");
        return -1; 
    }
    int x = a->top;
    return a->arr[x];
}

void printStack(stack* a) {
    if (isEmpty(a)) {
        printf("\nStack is Empty. Nothing to print.\n");
        return;
    }

    printf("\nStack elements (bottom to top):\n");
    for (int i = 0; i <= a->top; i++) {
        printf("%d ", a->arr[i]);
    }
    printf("\n");
}

int main() {
    stack mystack;
    stack* stack1 = &mystack;
    initStack(stack1);
    push(stack1, 22);
    push(stack1, 33);
    push(stack1, 993);
    push(stack1, 73);
    push(stack1, 43);
    push(stack1, 22);
    pop(stack1);
    push(stack1, 22);
    printStack(stack1);
    printf("\npeek: %d",peek(stack1));

    return 0;
}