//travesing
#include <iostream>
#include <stack>
using namespace std;

//int main() {
//    stack <int> myStack;
//
//    // Push elements into the stack
//    myStack.push(1);
//    myStack.push(2);
//    myStack.push(3);
//    myStack.push(4);
//    myStack.push(5);
//
//    cout << "Stack elements: ";
//
//    // Traverse and print elements of the stack
//    while (!myStack.empty()) {
//        cout << myStack.top() << " ";
//        myStack.pop();
//    }
//
//    cout << std::endl;
//
//    return 0;
//}


//push using array in stack
//#include <iostream>
//
//const int MAX_SIZE = 100; // Maximum size of the stack
//
//class Stack {
//private:
//    int arr[MAX_SIZE];
//    int top; // Index of the top element of the stack
//
//public:
//    Stack() {
//        top = -1; // Initialize top to -1 (empty stack)
//    }
//
//    bool isFull() {
//        return top == MAX_SIZE - 1; // Check if the stack is full
//    }
//
//    bool isEmpty() {
//        return top == -1; // Check if the stack is empty
//    }
//
//    void push(int element) {
//        if (!isFull()) {
//            arr[++top] = element; // Increment top and add the element to the stack
//            std::cout << "Pushed: " << element << std::endl;
//        } else {
//            std::cout << "Stack overflow! Cannot push more elements." << std::endl;
//        }
//    }
//};
//
//int main() {
//    Stack myStack;
//
//    // Push elements onto the stack
//    myStack.push(1);
//    myStack.push(2);
//    myStack.push(3);
//    myStack.push(4);
//    myStack.push(5);
//
//    return 0;
//}



//push using array user input
//#include <iostream>
//
//const int MAX_SIZE = 100; // Maximum size of the stack
//
//class Stack {
//private:
//    int arr[MAX_SIZE];
//    int top; // Index of the top element of the stack
//
//public:
//    Stack() {
//        top = -1; // Initialize top to -1 (empty stack)
//    }
//
//    bool isFull() {
//        return top == MAX_SIZE - 1; // Check if the stack is full
//    }
//
//    bool isEmpty() {
//        return top == -1; // Check if the stack is empty
//    }
//
//    void push(int element) {
//        if (!isFull()) {
//            arr[++top] = element; // Increment top and add the element to the stack
//            std::cout << "Pushed: " << element << std::endl;
//        } else {
//            std::cout << "Stack overflow! Cannot push more elements." << std::endl;
//        }
//    }
//};
//
//int main() {
//    Stack myStack;
//
//    int numElements;
//    std::cout << "Enter the number of elements to push onto the stack: ";
//    std::cin >> numElements;
//
//    for (int i = 0; i < numElements; ++i) {
//        int element;
//        std::cout << "Enter element #" << i + 1 << ": ";
//        std::cin >> element;
//        myStack.push(element);
//    }
//
//    return 0;
//}


//push using linked list
//#include <iostream>
//
//// Node structure for the linked list
//struct Node {
//    int data;
//    Node* next;
//};
//
//class Stack {
//private:
//    Node* top; // Pointer to the top node of the stack
//
//public:
//    Stack() {
//        top = NULL; // Initialize top to nullptr (empty stack)
//    }
//
//    void push(int element) {
//        Node* newNode = new Node(); // Create a new node
//        newNode->data = element;
//        newNode->next = top; // Make the new node point to the current top
//        top = newNode; // Update top to the new node
//        std::cout << "Pushed: " << element << std::endl;
//    }
//};
//
//int main() {
//    Stack myStack;
//
//    // Push elements onto the stack
//    myStack.push(1);
//    myStack.push(2);
//    myStack.push(3);
//    myStack.push(4);
//    myStack.push(5);
//
//    return 0;
//}


//pop using array
//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100; // Maximum size of the stack
//
//class Stack {
//private:
//    int arr[MAX_SIZE];
//    int top; // Index of the top element of the stack
//
//public:
//    Stack();
//    bool isEmpty();
//    void push(int element);
//    void pop();
//};
//
//Stack::Stack() {
//    top = -1; // Initialize top to -1 (empty stack)
//}
//
//bool Stack::isEmpty() {
//    return top == -1; // Check if the stack is empty
//}
//
//void Stack::push(int element) {
//    if (top < MAX_SIZE - 1) {
//        arr[++top] = element; // Increment top and add the element to the stack
//        cout << "Pushed: " << element << endl;
//    } else {
//        cout << "Stack overflow! Cannot push more elements." << endl;
//    }
//}
//
//void Stack::pop() {
//    if (!isEmpty()) {
//        cout << "Popped: " << arr[top] << endl;
//        top--; // Decrement top to remove the top element
//    } else {
//        cout << "Stack underflow! Cannot pop from an empty stack." << endl;
//    }
//}
//
//int main() {
//    Stack myStack;
//
//    myStack.pop(); // Trying to pop from an empty stack
//
//    myStack.push(1);
//    myStack.push(2);
//    myStack.push(3);
//    myStack.push(4);
//    myStack.push(5);
//
//    myStack.pop();
//    myStack.pop();
//    myStack.pop();
//    myStack.pop();
//    myStack.pop();
//    myStack.pop(); // Trying to pop from an empty stack
//
//    return 0;
//}




//pop using linked list
//#include <iostream>
//
//// Node structure for the linked list
//struct Node {
//    int data;
//    Node* next;
//};
//
//class Stack {
//private:
//    Node* top; // Pointer to the top node of the stack
//
//public:
//    Stack() : top(NULL) {}
//
//    bool isEmpty() {
//        return top == NULL; // Check if the stack is empty
//    }
//
//    void push(int element) {
//        Node* newNode = new Node(); // Create a new node
//        newNode->data = element;
//        newNode->next = top; // Make the new node point to the current top
//        top = newNode; // Update top to the new node
//        std::cout << "Pushed: " << element << std::endl;
//    }
//
//    void pop() {
//        if (!isEmpty()) {
//            Node* temp = top; // Temporary pointer to the top node
//            std::cout << "Popped: " << top->data << std::endl;
//            top = top->next; // Update top to the next node
//            delete temp; // Delete the previous top node
//        } else {
//            std::cout << "Stack underflow! Cannot pop from an empty stack." << std::endl;
//        }
//    }
//};
//
//int main() {
//    Stack myStack;
//
//    myStack.pop(); // Trying to pop from an empty stack
//
//             myStack.push(1);
//    myStack.push(2);
//    myStack.push(3);
//    myStack.push(4);
//    myStack.push(5);
//
//    myStack.pop();
//    myStack.pop();
//    myStack.pop();
//    myStack.pop();
//    myStack.pop();
//    myStack.pop(); // Trying to pop from an empty stack
//
//    return 0;
//}


