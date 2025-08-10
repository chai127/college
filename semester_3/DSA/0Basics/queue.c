#include <stdio.h>   
#include <stdlib.h> 
#include <stdbool.h> 
#define MAX_SIZE 10

typedef struct Node {
    node* next;
    int data;
} node;

typedef struct Queue {
    node* front;
    node* rear;
    int size;
} queue;

// createNode
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
// link nodes
void linkNode(node* a, node* b) {
    a->next = b;
}
// delete node
void deleteNode(node* a) {
    free(a);
}
// initQueue
void initQueue(queue* q) {
    q->size = 0;
    q->front = NULL;
    q->rear = NULL;
}
// isEmpty or use the size variable instead!
bool isEmpty(queue* q) {
    if(q->front > q->rear) {
        printf("\nQueue is empty\n");
        return true;
    }
    return false;
}
// isFull
bool isFull(queue* q) {
    if(q->size == MAX_SIZE) {
       printf("\nQueue is full\n");
        return true;
    }
    return false;
}
// enqueue
void enqueue(queue* q, int d) {
    node* newNode = createNode(d);
    if (q->front == NULL) {
        q->front = newNode;
        q->rear = newNode;
    } 
    else {
        linkNode(q->rear, newNode); 
        q->rear = newNode;          
    }
    q->size++;
}
// dequeue
int dequeue(queue* q) {
    if(isEmpty(q)) {
        return -1;
    }
    node* first = q->front; 
    int data = first->data;
    q->front = first->next;
    if (q->front == NULL) {  // if theres only one element in the queue
        q->rear = NULL;
    }
    deleteNode(first);
    q->size--;
    return data;
}
// peek
int peek(queue* q) {
    if(isEmpty(q)) {
        return -1;
    }
    node* first = q->front;
    int data = first->data;
    return data;
}
// printQueue
void printQueue(queue* q) {
    if(isEmpty(q)) {
        printf("queue is empty");
        return;
    }
    node* current = q->front;
    printf("\n");
    while( current != NULL) {
        printf("%d ",current->data  );
        current = current->next;
    }
}
// deleteQueue
void deleteQueue(queue* q) {
     if(isEmpty(q)) {
        printf("queue is empty");
        return;
    }
    node* current = q->front;
    while(current != NULL) {
        q->front = current->next;
        deleteNode(current);
        current = q->front;
    }

    q->front = NULL;
    q->rear = NULL;
    printf("Queue successfully deleted.\n");

}

int main() {

    return 0;
}