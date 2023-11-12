#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the linked list
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
        Node* prev = nullptr;

        // If the node to be deleted is the head
        if (temp && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Node with value " << value << " deleted." << endl;
            return;
        }

        // Search for the node to be deleted
        while (temp && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If the node with the value was not found
        if (!temp) {
            cout << "Node with value " << value << " not found for deletion." << endl;
            return;
        }

        // Unlink the node from the linked list
        prev->next = temp->next;
        delete temp;
        cout << "Node with value " << value << " deleted." << endl;
    }

    // Function to display the linked list
    void displayList() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList linkedList;

    linkedList.insertNode(10);
    linkedList.insertNode(20);
    linkedList.insertNode(30);
    linkedList.displayList();

    linkedList.searchNode(20);

    linkedList.deleteNode(20);
    linkedList.displayList();

    linkedList.searchNode(20);

    return 0;
}

