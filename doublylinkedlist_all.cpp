#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the doubly linked list
    void insertNode(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        cout << "Node with value " << value << " inserted." << endl;
    }

    // Function to search for a node with a given value
    bool searchNode(int value) {
        Node* temp = head;
        while (temp) {
            if (temp->data == value) {
                cout << "Node with value " << value << " found." << endl;
                return true;
            }
            temp = temp->next;
        }
        cout << "Node with value " << value << " not found." << endl;
        return false;
    }

    // Function to delete a node with a given value
    void deleteNode(int value) {
        Node* temp = head;

        // Search for the node to be deleted
        while (temp && temp->data != value) {
            temp = temp->next;
        }

        // If the node with the value was not found
        if (!temp) {
            cout << "Node with value " << value << " not found for deletion." << endl;
            return;
        }

        // If the node to be deleted is the head
        if (temp == head) {
            head = temp->next;
            if (head) {
                head->prev = nullptr;
            }
            delete temp;
            cout << "Node with value " << value << " deleted." << endl;
            return;
        }

        // Adjust the pointers to unlink the node from the doubly linked list
        temp->prev->next = temp->next;
        if (temp->next) {
            temp->next->prev = temp->prev;
        }

        delete temp;
        cout << "Node with value " << value << " deleted." << endl;
    }

    // Function to display the doubly linked list in both forward and backward directions
    void displayList() {
        Node* temp = head;

        cout << "Forward Linked List: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;

        cout << "Backward Linked List: ";
        while (temp && temp->next) {
            temp = temp->next;
        }
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList doublyLinkedList;

    doublyLinkedList.insertNode(10);
    doublyLinkedList.insertNode(20);
    doublyLinkedList.insertNode(30);
    doublyLinkedList.displayList();

    doublyLinkedList.searchNode(20);

    doublyLinkedList.deleteNode(20);
    doublyLinkedList.displayList();

    doublyLinkedList.searchNode(20);

    return 0;
}

