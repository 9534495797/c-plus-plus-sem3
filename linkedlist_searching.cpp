#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int value) : data(value), next(NULL) {
    }
};

bool searchlinkedlist(node* head, int target) {
    node* current = head;
    while (current != NULL) {
        if (current->data == target) {
            return true;
        }
        current = current->next;
    }
    return false;
}

// Function to display the linked list
void displaylinkedlist(node* head) {
    node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create a sample linked list 1>3>5>7>9
    node* head = new node(1);
    head->next = new node(3);
    head->next->next = new node(5);
    head->next->next->next = new node(7);
    head->next->next->next->next = new node(9); // Fixed the duplicate value

    // Display linked list
    cout << "Linked list = ";
    displaylinkedlist(head);

    // Search for a value in linked list
    int target = 5;
    if (searchlinkedlist(head, target)) {
        cout << target << " found in linked list." << endl;
    } else {
        cout << target << " not found in linked list." << endl;
    }

    // Clean up: free memory used by linked list
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

