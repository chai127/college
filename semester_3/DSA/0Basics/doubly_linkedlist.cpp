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


void freeNodes(node* first) {
    while(first != nullptr) {
        node* temp  = first;
        first = first->next;
        delete temp;
    }
    cout << "\nList is freed\n";
}

void printNodes(node* first) {
    while(first != nullptr) {
        cout << first->data << " ";
        first = first->next;
    }
    cout<<"\n";
}

void printReverseNodes(node* last) {
    while(last != nullptr) {
        cout<< last->data << " ";
        last = last->prev;
    }
}

void linkNodes(node* first, node* second) {
    if(first != nullptr) {
        first->next = second;        
    }
    if(second != nullptr ) {
        second->prev = first;
    }
}

int main() {
    //all n are pointers to the nodes, not the nodes!
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);

    linkNodes(n1, n2);
    linkNodes(n2, n3);
    printNodes(n1);
    printReverseNodes(n3);
    freeNodes(n1);

    return 0;
}

