#include <iostream>
#include <queue>
using namespace std;

//int main() {
//    // Priority Queue
//    priority_queue<int> priorityQueue;
//
//    // Enqueue (Insertion)
//    priorityQueue.push(3);
//    priorityQueue.push(1);
//    priorityQueue.push(2);
//
//    // Dequeue (Removal)
//    cout << "Dequeueing elements from the priority queue:" << std::endl;
//    while (!priorityQueue.empty()) {
//        cout << priorityQueue.top() << " "; // Output the highest priority element
//        priorityQueue.pop(); // Remove the top element
//    }
//
//    cout << std::endl;
//
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//const int max_size = 100;
//
//class PriorityQueue {
//    int arr[max_size];
//    int size;
//public:
//    PriorityQueue() {
//        size = 0;
//    }
//
//    void enqueue(int element) {
//        if (size == max_size) {
//            cout << "Overflow. Cannot insert element." << endl;
//            return;
//        }
//        int i = size;
//        while (i > 0 && element > arr[(i - 1) / 2]) {
//            arr[i] = arr[(i - 1) / 2];
//            i = (i - 1) / 2;
//        }
//        
//        arr[i] = element;
//        size++;
//    }
//
//    void dequeue() {
//        if (size == 0) {
//            cout << "Underflow. Cannot dequeue element." << endl;
//            return;
//        }
//        cout << "Dequeued: " << arr[0] << endl;
//        arr[0] = arr[size - 1];
//        size--;
//
//        int i = 0;
//        while (true) {
//            int left = 2 * i + 1;
//            int right = 2 * i + 2;
//            int largest = i;
//
//            if (left < size && arr[left] > arr[largest]) {
//                largest = left;
//            }
//            if (right < size && arr[right] > arr[largest]) {
//                largest = right;
//            }
//
//            if (largest != i) {
//                swap(arr[i], arr[largest]);
//                i = largest;
//            } else {
//                break;
//            }
//        }
//    }
//};
//
//int main() {
//    PriorityQueue pq;
//    pq.enqueue(3);
//    pq.enqueue(9);
//    pq.enqueue(1);
//    pq.enqueue(5);
//    pq.enqueue(7);
//    pq.dequeue();
//    pq.dequeue();
//    pq.dequeue();
//    pq.dequeue();
//    pq.dequeue();
//    pq.dequeue(); // Trying to dequeue from an empty queue
//    return 0;
//}



#include <iostream>
using namespace std;

class Node {
public:
    int data;
    int priority;
    Node* next;

    Node(int d, int p) : data(d), priority(p), next(nullptr) {}
};

class PriorityQueue {
private:
    Node* front;
public:
    PriorityQueue() : front(nullptr) {}

    void enqueue(int data, int priority) {
        Node* newNode = new Node(data, priority);
        if (front == nullptr || priority > front->priority) {
            newNode->next = front;
            front = newNode;
        } else {
            Node* temp = front;
            while (temp->next != nullptr && priority < temp->next->priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Underflow. Cannot dequeue element." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            cout << "Dequeued: " << temp->data << " with priority " << temp->priority << endl;
            delete temp;
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    PriorityQueue pq;
    pq.dequeue(); // Trying to dequeue from an empty queue
    pq.enqueue(3, 2);
    pq.enqueue(9, 1);
    pq.enqueue(1, 3);
    pq.enqueue(5, 2);
    pq.enqueue(7, 2);
    while (!pq.isEmpty()) {
        pq.dequeue();
    }
    pq.dequeue(); // Trying to dequeue from an empty queue
    return 0;
}



