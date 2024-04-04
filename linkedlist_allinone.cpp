//linked list all in one

//singly linked list all in one
#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	
};
class linkedlist{
	node* head;
	public:
		linkedlist(){
			head=NULL;
		}
		void insertbegin(int newdata){
			node* newnode=new node();
			newnode->data=newdata;
			newnode->next=head;
			head=newnode;
			
		}
		void insertlast(int newdata){
			node* newnode=new node();
			newnode->data=newdata;
			newnode->next=NULL;
			if(head==NULL){
				head=newnode;
				return;
			}
			node* current=head;
			while(current->next!=NULL){
				current=current->next;
			}
			current->next=newnode;
	}
	void insertmid(int prevdata, int newdata){
		node* newnode=new node();
		newnode->data=newdata;
		if(head==NULL){
			cout<<prevdata<<" "<<"not found";
		}
		node* current=head;
		while(current!=NULL){
			if(current->data==prevdata){
				newnode->next=current->next;
				current->next=newnode;
			}
			current=current->next;
		}
	}
	bool search(int key){
		node* current=head;
		while(current!=NULL){
			if(current->data==key){
				return true;
			}
			current=current->next;
		}
		return false;
	}
//	void delnode(int key){
//		node* temp=head;
//		node* prev=NULL;
//		if(temp!=NULL && temp->data==key){
//			head=temp->next;
//			delete temp;
//			return;
//		}
//		while(temp!=NULL && temp->data!=key){
//			prev=temp;
//			temp=temp->next;
//		}
//		prev->next=temp->next;
//		delete temp;
//	}
bool isempty(){
	return head==NULL;
}
void pop(int element){
        	
        	if(!isempty()){
        		node* current=head;
        	node* prev=NULL;
        	while(current!=NULL && current->data!=element){
        		prev=current;
        		current=current->next;
		   }
		   if(current!=NULL){
		   	if(prev!=NULL){
		   		prev->next=current->next;
			   }else{
			   	head=current->next;
			   }
			   cout<<" deleted"<<current->data<<" ";
			   delete current;
		   }else{
		   	cout<<element<<" not found";
		   }
		   }else{
		   	cout<<" empty stack";
		   }
	   }
	void display(){
		node* current=head;
		while(current!=NULL){
			cout<<current->data<<" ";
			current=current->next;
		}
	}
};
int main(){
	linkedlist l;
	l.insertbegin(1);
	l.insertbegin(2);
	l.insertbegin(3);
	l.display();
	cout<<endl;
	l.insertlast(4);
	l.insertlast(5);
	l.display();
	cout<<endl;
	int prevdata;
	int newdata;
	cout<<"prevdtaa= ";
	cin>>prevdata;
	cout<<"new dtaa";
	cin>>newdata;
	l.insertmid(prevdata,newdata);
	l.display();
	int key;
	cout<<" enter key to searxh";
	cin>>key;
	if(l.search(key)){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	l.pop(key);
	cout<<endl;
	l.display();
}
//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	node* next;
//};
//class linkedlist{
//	node* head;
//	public:
//	linkedlist(){
//		head=NULL;
//	}
//	void insert(int element){
//		node* newnode=new node();
//		newnode->data=element;
//		newnode->next=head;
//		head=newnode;
//	}
//	bool search(int key){
//		node* current=head;
//		while(current!=NULL){
//			if(current->data==key){
//				return true;
//			}
//			current=current->next;
//		}
//		return false;
//	}
//	void display(){
//		node* current=head;
//		while(current!=NULL){
//			cout<<current->data<<" ";
//			current=current->next;
//		}
//	}
//};
//int main(){
//	linkedlist l;
//	l.insert(2);
//	l.insert(4);
//	l.insert(6);
//	l.insert(8);
//	l.display();
//	int value;
//	cin>>value;
//	if(l.search(value)){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//}


//doubly linked list

//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	node* next;
//	node* prev;
//	
//};
//class linkedlist{
//	node* head;
//	node* tail;
//	public:
//		linkedlist(){
//			head=NULL;
//			tail=NULL;
//		}
//		void insertbegin(int newdata){
//			node* newnode=new node();
//			newnode->data=newdata;
//			newnode->prev=NULL;
//			newnode->next=head;
//			if(head!=NULL){
//				head->prev=newnode;
//				
//			}else{
//				tail=newnode;
//			
//			}
//				head=newnode;
//			
//		}
//		void insertend(int newdata){
//			node* newnode=new node();
//			newnode->data=newdata;
//			newnode->next=NULL;
//			newnode->prev=tail;
//			if(tail!=NULL){
//				tail->next=newnode;
//				
//			}else{
//				head=newnode;
//				
//			}
//			tail=newnode;
//		}
//		bool search(int key){
//			node* current=head;
//			while(current!=NULL){
//				if(current->data==key){
//					return true;
//				}
//				current=current->next;
//			}
//			return false;
//		}
//		void deleteNode(int key) {
//        node* current = head;
//        
//        // Search for the node with the given key
//        while (current != NULL && current->data != key) {
//            current = current->next;
//        }
//        
//        // If node with key not found
//        if (current == NULL) {
//            cout << "Node with key " << key << " not found in the list." << endl;
//            return;
//        }
//        
//        // If the node to be deleted is head
//        if (current == head) {
//            head = current->next;
//            if (head != NULL)
//                head->prev = NULL;
//            else
//                tail = NULL;
//            delete current;
//            return;
//        }
//        
//        // If the node to be deleted is tail
//        if (current == tail) {
//            tail = current->prev;
//            if (tail != NULL)
//                tail->next = NULL;
//            else
//                head = NULL;
//            delete current;
//            return;
//        }
//        
//        // If the node to be deleted is in between
//        current->prev->next = current->next;
//        current->next->prev = current->prev;
//        delete current;
//    }
//		void display(){
//			node* current=head;
//			while(current!=NULL){
//				cout<<current->data<<" ";
//				current=current->next;
//				
//			}
//		}
//};
//int main(){
//	linkedlist l;
//	l.insertbegin(1);
//	l.insertbegin(3);
//	l.insertbegin(5);
//	l.display();
//	cout<<endl;
//	cout<<"after insertion at last: "<<endl;
//	l.insertend(6);
//	l.insertend(9);
//	l.display();
//	
//	int key=6;
//	
//	if(l.search(key)){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//	l.deleteNode(key);
//	cout<<endl;
//	l.display();
//}
//
//


