//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	node* next;
//	node(int value):data(value),next(nullptr){
//	}
//};
//bool searchlinkedlist(node *head,int target){
//	node*current=head;
//	while(current!=nullptr){
//		if(current->data==target){
//			return true;
//		}
//		current=current->next;
//	}
//	return false;
//}
////function to display the linked list
//void displaylinkedlist(node* head){
//	while(current!=nullptr){
//		cout<<current->data<<" ";
//		current=current->next;
//	}
//	cout<<endl;
//}
//int main(){
//	//create a sample linked llist 1>3>5>7>9
//	node* head=new node(1);
//	head->next=new node(3);
//	head->next->next=new node(5);
//	head->next->next->next=new node(7);
//	head->next->next->next->next=new node(5);
//	//display linked list
//	cout<<"linked list = ";
//	displaylinkedlist(head);
//	//search for a value in linked list
//	int target=5;
//	if(searchlinkedlist(head,target)){
//		cout<<target<<"found in linkedlist."<<endl;
//	}else{
//		cout<<target<<"not found in linkedlist."<<endl;
//	}
//	//clean up free memory used by linked list
//	while(head!=nullptr){
//	node* temp=head;
//	head=head->next;
//	delete temp;
//	
//}
//return 0;
//}



#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int value) : data(value), next(NULL) { // Replace nullptr with NULL
    }
};

bool searchlinkedlist(node* head, int target) {
    node* current = head;
    while (current != NULL) { // Replace nullptr with NULL
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
    while (current != NULL) { // Replace nullptr with NULL
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
    while (head != NULL) { // Replace nullptr with NULL
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


