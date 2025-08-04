#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;

    node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void linkNodes(node* first, node* second) {
    if(first != nullptr) {
        first->next = second;        
    }
    if(second != nullptr ) {
        second->prev = first;
    }
}

void printNodes(node* first) {
    if (first == nullptr) return;
    node* head = first;
    do {
        cout << first->data << " ";
        first = first->next;
    }while(first != head);
    cout<<"\n";
}

void printReverseNodes(node* last) {
    if (last == nullptr) return;
    node* head = last;
    do {
        cout<< last->data << " ";
        last = last->prev;
   }while(last != head);
}

void freeNodes(node* first) {
    if (first == nullptr) return;
    node* head = first;
    node* current = first->next;
    while (current != head) {
        node* temp = current;
        current = current->next;
        delete temp;
    }
   delete head;
    cout << "\nList is freed\n";
}

int main() {

    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);

    linkNodes(n1, n2);
    linkNodes(n2, n3);
    linkNodes(n3, n1);
    printNodes(n1);
    printReverseNodes(n3);
    freeNodes(n1);

    return 0;
}