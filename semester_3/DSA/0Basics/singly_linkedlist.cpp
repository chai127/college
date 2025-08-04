#include <iostream>
using namespace std;

struct node {
    int data;
    node* next; //needs * cause it will create infinite structs inside otherwise
    node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void freeNode(node* first) {
    while (first != nullptr) {
        node* temp = first;
        first = first->next;
        // first = (*first).next; 
        delete temp;
    }
    cout << "List is freed\n";
}

void printNodeList(node* first) {
    while(first != nullptr ) {
        cout << first->data <<" ";
        first = first->next;
    }

}

int main() {
    node* head1 = new node(1);
    node* head2 = new node(2);

    head1->next = head2;
    printNodeList(head1);
    freeNode(head1);

    return 0;
}


// | Style                            | Syntax Example      | What Happens                                                                |
// | -------------------------------- | ------------------- | --------------------------------------------------------------------------- |
// | **Call by Value**                | `void func(int x)`  | A **copy** of the variable is passed                                        |
// | **Call by Pointer**              | `void func(int* x)` | A **pointer** (address) is passed, so you can modify the original           |
// | **Call by Reference** (C++ only) | `void func(int& x)` | The **actual variable** is passed by reference — no copy, no pointer needed |

// In some cases like printing a node or modifying its contents, references are great:
// Or passing by reference to avoid copying large structs: