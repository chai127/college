#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define maxsize 100

typedef struct {
    char arr[maxsize];
    int top;
} stack;

// Stack operations
void initStack(stack* a) {
    a->top = -1;
}

bool isFull(stack* a) {
    return a->top >= maxsize - 1;
}

bool isEmpty(stack* a) {
    return a->top == -1;
}

void push(stack* a, char data) {
    if (isFull(a)) {
        printf("\nStack Overflow\n");
        return;
    }
    a->arr[++a->top] = data;
    printf("Pushed: %c, current top index: %d\n", data, a->top);
}

char pop(stack* a) {
    if (isEmpty(a)) {
        printf("\nStack is Empty\n");
        return -1;
    }
    char data = a->arr[a->top--];
    printf("Popped: %c, current top index: %d\n", data, a->top);
    return data;
}

char peek(stack* a) {
    if (isEmpty(a)) {
        return -1;
    }
    return a->arr[a->top];
}

int priority(char c) {
    switch (c) {
        case '^': return 3;
        case '*': return 2;
        case '/': return 2;
        case '+': return 1;
        case '-': return 1;
        default: return -1;
    }
}

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

void infixToPrefix(char exp[]) {
    stack opStack;
    initStack(&opStack);

    char reversed[maxsize], prefix[maxsize];
    int j = 0;

    strcpy(reversed, exp);
    reverseString(reversed);

    // Swap '(' and ')'
    for (int i = 0; i < strlen(reversed); i++) {
        if (reversed[i] == '(')
            reversed[i] = ')';
        else if (reversed[i] == ')')
            reversed[i] = '(';
    }

    for (int i = 0; i < strlen(reversed); i++) {
        char token = reversed[i];

        if (isalnum(token)) {
            prefix[j++] = token;
        } else if (token == '(') {
            push(&opStack, token);
        } else if (token == ')') {
            while (!isEmpty(&opStack) && peek(&opStack) != '(') {
                prefix[j++] = pop(&opStack);
            }
            if (!isEmpty(&opStack) && peek(&opStack) == '(') {
                pop(&opStack); // discard '('
            }
        } else {
            while (!isEmpty(&opStack) && priority(token) < priority(peek(&opStack))) {
                prefix[j++] = pop(&opStack);
            }
            push(&opStack, token);
        }
    }

    while (!isEmpty(&opStack)) {
        prefix[j++] = pop(&opStack);
    }

    prefix[j] = '\0';
    reverseString(prefix);

    printf("Prefix Expression: %s\n", prefix);
}

int main() {
    char expression[] = "a+b*(c^d-e)^(f+g*h)-i";

    printf("Infix Expression: %s\n", expression);
    infixToPrefix(expression);

    return 0;
}
