#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    node *next;

    node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void link_node(node* head1, node* head2) {
    if(head1 != nullptr) {
        head1->next = head2;
    } 
}

void print_list(node *head) {
    node * current = head;
    while (current != nullptr){
        cout<<current->data<<" ";
        current = current->next; 
    }
}

void free_list(node *head) {
    while (head != nullptr){
        node * current = head;
        head = head->next;
        delete current;
    }
    cout << "\nList is freed\n";
}

void switch_node() {
    
}

void sort_list(node *head) {
    
    
}
// first key is sorted
// compare second with first if second smaller => swap
// key is the second node now
// now the third one is compared with second and first too


int main() {
    
    node* n1 = new node(2);
    node* n2 = new node(20);
    node* n3 = new node(32);
    node* n4 = new node(87);
    node* n5 = new node(0);

    link_node(n1, n2);
    link_node(n2,n3);
    link_node(n3,n4);
    link_node(n4,n5);

    print_list(n1);

    free_list(n1);


    return 0;
}