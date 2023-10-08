
//traversing
//#include <iostream>
//#include <queue>
//
//int main() {
//    std::queue<int> myQueue;
//
//    // Push elements into the queue
//    myQueue.push(1);
//    myQueue.push(2);
//    myQueue.push(3);
//    myQueue.push(4);
//    myQueue.push(5);
//
//    std::cout << "Queue elements: ";
//    
//    // Traverse and print the elements of the queue
//    while (!myQueue.empty()) {
//        std::cout << myQueue.front() << " ";
//        myQueue.pop();
//    }
//
//    std::cout << std::endl;
//
//    return 0;
//}



//insertion using array
//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100;
//
//class Queue {
//private:
//    int arr[MAX_SIZE];
//    int front, rear;
//
//public:
//    Queue() {
//        front = -1;
//        rear = -1;
//    }
//
//    bool isEmpty() {
//        return (front == -1 && rear == -1);
//    }
//
//    bool isFull() {
//        return (rear + 1) % MAX_SIZE == front;
//    }
//
//    void enqueue(int element) {
//        if (isFull()) {
//            cout << "Queue is full. Cannot insert element." << endl;
//        } else {
//            if (isEmpty()) {
//                front = rear = 0;
//            } else {
//                rear = (rear + 1) % MAX_SIZE;
//            }
//            arr[rear] = element;
//            cout << "Inserted " << element << " into the queue." << endl;
//        }
//    }
//};
//
//int main() {
//    Queue myQueue;
//
//    myQueue.enqueue(1);
//    myQueue.enqueue(2);
//    myQueue.enqueue(3);
//    myQueue.enqueue(4);
//    myQueue.enqueue(5);
//
//    return 0;
//}
 
//insertion using linked list


//#include <iostream>
//using namespace std;
//
//// Node class represents a node in the linked list
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) {
//        data = value;
//        next = NULL;
//    }
//};
//
//// Queue class represents a queue implemented using linked list
//class Queue {
//private:
//    Node* front;
//    Node* rear;
//
//public:
//    Queue() {
//        front = NULL;
//        rear = NULL;
//    }
//
//    bool isEmpty() {
//        return (front == NULL);
//    }
//
//    void enqueue(int element) {
//        Node* newNode = new Node(element);
//        if (isEmpty()) {
//            front = rear = newNode;
//        } else {
//            rear->next = newNode;
//            rear = newNode;
//        }
//        cout << "Inserted " << element << " into the queue." << endl;
//    }
//};
//
//int main() {
//    Queue myQueue;
//
//    myQueue.enqueue(1);
//    myQueue.enqueue(2);
//    myQueue.enqueue(3);
//    myQueue.enqueue(4);
//    myQueue.enqueue(5);
//
//    return 0;
//}

//DELETION USING ARRAY
//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100;
//
//class Queue {
//private:
//    int arr[MAX_SIZE];
//    int front, rear;
//
//public:
//    Queue() {
//        front = -1;
//        rear = -1;
//    }
//
//    bool isEmpty() {
//        return (front == -1 && rear == -1);
//    }
//
//    void enqueue(int element) {
//        if ((rear + 1) % MAX_SIZE == front) {
//            cout << "Queue is full. Cannot insert element." << endl;
//        } else {
//            if (isEmpty()) {
//                front = rear = 0;
//            } else {
//                rear = (rear + 1) % MAX_SIZE;
//            }
//            arr[rear] = element;
//            cout << "Inserted " << element << " into the queue." << endl;
//        }
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty. Cannot dequeue element." << endl;
//        } else {
//            cout << "Dequeued " << arr[front] << " from the queue." << endl;
//            if (front == rear) {
//                front = rear = -1;
//            } else {
//                front = (front + 1) % MAX_SIZE;
//            }
//        }
//    }
//};
//
//int main() {
//    Queue myQueue;
//
//    myQueue.enqueue(1);
//    myQueue.enqueue(2);
//    myQueue.enqueue(3);
//    myQueue.enqueue(4);
//    myQueue.enqueue(5);
//
//    myQueue.dequeue();
//    myQueue.dequeue();
//    myQueue.dequeue();
//
//    return 0;
//}



//USING LINKED LIST
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) {
//        data = value;
//        next = NULL;
//    }
//};
//
//class Queue {
//private:
//    Node* front;
//    Node* rear;
//
//public:
//    Queue() {
//        front = NULL;
//        rear = NULL;
//    }
//
//    bool isEmpty() {
//        return (front == NULL);
//    }
//
//    void enqueue(int element) {
//        Node* newNode = new Node(element);
//        if (isEmpty()) {
//            front = rear = newNode;
//        } else {
//            rear->next = newNode;
//            rear = newNode;
//        }
//        cout << "Inserted " << element << " into the queue." << endl;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty. Cannot dequeue element." << endl;
//        } else {
//            Node* temp = front;
//            cout << "Dequeued " << temp->data << " from the queue." << endl;
//            front = front->next;
//            delete temp;
//
//            // If front becomes null, set rear to null as well
//            if (front == NULL) {
//                rear = NULL;
//            }
//        }
//    }
//};
//
//int main() {
//    Queue myQueue;
//
//    myQueue.enqueue(1);
//    myQueue.enqueue(2);
//    myQueue.enqueue(3);
//    myQueue.enqueue(4);
//    myQueue.enqueue(5);
//
//    myQueue.dequeue();
//    myQueue.dequeue();
//    myQueue.dequeue();
//
//    return 0;
//}

//NOTE if we want to delete whole element update this thing in tha main()
//int main() {
//    Queue myQueue;
//
//    myQueue.enqueue(1);
//    myQueue.enqueue(2);
//    myQueue.enqueue(3);
//    myQueue.enqueue(4);
//    myQueue.enqueue(5);
//
//    // Dequeue all elements in the queue
//    while (!myQueue.isEmpty()) {
//        myQueue.dequeue();
//    }
//
//    return 0;
//}




