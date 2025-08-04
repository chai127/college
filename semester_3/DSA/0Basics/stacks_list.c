#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// POINTERS ARE SCARY BUT COOL BUT also scary


// node struct
typedef struct Node {
    int data;
    struct Node* next; // have to use `struct Node` here
} node;
// stack struct
typedef struct Stack {
    node* top;
    int size;
} stack;
// create a new node
node* createNode(int d) {
    node* newNode = (node*)malloc(sizeof(node));
        if (newNode == NULL) {
        printf("cannot create new node");
        return NULL;
    }
    newNode->data = d;
    newNode->next = NULL;
    return newNode;
}
// delete a node
void deleteNode(node* n) {
    free(n);
}
// link nodes
void linkNode(node* n, node* m) {
    m->next = n; //outside points in
}
// initialize a stack
void initStack(stack* a) {
    a->top = NULL;
    a->size = 0;
}
// check if stack is empty
bool isEmpty(stack* a) {
    if(a->size <= 0) return true;
    return false;
}
// push an element onto the stack
void push(stack* a, int d) {
    node* newNode = createNode(d);
    if (newNode == NULL) {
        printf("cannot push element to stack");
        return;
    }
    linkNode(a->top, newNode);
    a->size++;
    a->top = newNode;
}
// pop an element from the stack
int pop(stack* a) {
    if(isEmpty(a)){
        printf("stack is empty");
        return -1;
    }
    node* surTop = a->top;
    a->top = surTop->next;
    int data = surTop->data;
    deleteNode(surTop);
    a->size--;
    return data;
}
// peek at the top element
int peek(stack* a) {
    if(isEmpty(a)){
        printf("stack is empty");
        return -1;
    }
    node* surTop = a->top;
    int data = surTop->data;
    return data;
}
// print the stack
void printStack(stack* a) {
    if(isEmpty(a)){
        printf("stack is empty");
        return;
    }
    node* current = a->top;
    while(current != NULL) {
        int data = current->data;
        printf("%d ", data);
        current = current->next;
    }
}
// delete the entire stack
void deleteStack(stack* a) {
    while (!isEmpty(a)) {
        // Repeatedly call pop to remove and free each element
        pop(a);
    }
    initStack(a);
}

int main() {

    return 0;
}