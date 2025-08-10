# Basics of c and cpp STL

🔹🔷🔶🔸♦️

```cpp ```

## 🔷Linked List 

> A linked list is defined as a collection of nodes where each node consists of two members which represents its value and a next/previous pointer which stores the address for the next/previous node.

It is a linear data structure that allows the users to store data in non-contiguous memory locations



<br></br>

## 🔸Linked List in C


### 1. Singly linked list

Use `` typedef struct `` 

```c
// struct definition
typedef struct Node {
    int data;
    struct Node* next;
} node;
// Initializing 
Node* create_node(int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Error: Memory allocation failed!\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
// insert Node
void insert_at_beginning(Node** head, int data) {
    Node* new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}
```


### 2. Doubly linked list

Use `` typedef struct `` 

```c
// struct definition
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} node;
// Initializing 
void init_Node(node* n) {
    n->data = 0; 
    n->next = NULL;
    n->prev = NULL;
}
// link Node
void link_nodes(node* a, node* b) {
    a->next = b;
    b->prev = a;
}
```


### 3. Circular linked list

Use `` typedef struct ``
> In a full circular list, last->next should point to the head node. 

```c
// struct definition
typedef struct Node {
    int data;
    struct Node* next;
} node;
// Initializing 
void init_Node(node* n) {
    n->data = 0;
    n->next = n;
}
// link Node
void link_nodes(node* a, node* b) {
    a->next = b;
}
```

### 4. Circular-Doubly linked list

Use `` typedef struct `` 

```c
// struct definition
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} node;
// Initializing 
void init_Node(node* n) {
    n->data = 0;
    n->next = n;
    n->prev = n;
}
// link Node
void link_circular(node* head, node* last) {
    if (head != NULL && last != NULL) {
        head->prev = last;
        last->next = head;
    }
}
void link_nodes(node* a, node* b) {
    if (a != NULL) {
        a->next = b;
    }
    if (b != NULL) {
        b->prev = a;
    }
}
```

<br></br>

## 🔸Linked List in C++


### 1. Singly linked list

Use `` struct ``  

```cpp
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
```

### 2. Doubly linked list

Use `` struct `` 

```cpp
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int val) {
        this->data = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
```
--- 

Use ``# include <list>`` to make lists, by default these are doubly linked list
```cpp

list<string> Animals = {"bunny", "cat", "dog"};
cout << Animals.front();
cout << Animals.back();
Animals.push_front("llama");
Animals.push_back("bear");
```


### 3. Circular linked list

Use `` struct `` 

```cpp
struct Node {
    int data;
    struct Node* next;
    Node(int val) {
        this->data = val;
        this->next = this; 
    }
};
```



### 3. Circular-Doubly linked list

Use `` struct ``  

```cpp
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
    Node(int val) {
        data = val;
        next = this;
        prev = this;
    }
};
```



<br></br>

## 🔷Stacks

Stacks follow LIFO[Last In First Out]. 

<br></br>

## 🔸Stacks in C

Using an ``Array``

```c
typedef struct Stack {
    type arr[MAX_SIZE];
    int top;
} stack;
// initialize
void init_stack(stack* s) {
    s->top = -1;
}
// isEmpty
bool isEmpty(Stack *s) {
    return s->top == -1;  
}

bool isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;  
}
// idFull
void push(Stack *s, int value) {
    if(isFull(s)) {
        printf("/nStack Overflow\n");
        return;
    } 
    s->arr[++s->top] = value;
}
// pop
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int popped = s->arr[s->top];
    s->top--;
    return popped;
}
// peek
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
  
    return s->arr[s->top];
}
```
Using a ``Linked List``

```c
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
```

<br></br>

## 🔸Stacks in C++

use `` #include <stack> ``

```cpp
stack<int> numbers;
numbers.push(2);
numbers.push(3);

cout<<numbers.top();

numbers.pop();

cout<<numbers.top();
```

<br></br>

## 🔷Vectors


