#include<iostream>
#include<stack>
using namespace std;

struct node{
    int data;
    node* next;
};

class Stack{
    node* top;
    public:
        Stack(){
            top=NULL;
        }
        bool isempty(){
            return top==NULL;
        }
        void push(int element){
            node* newnode=new node();
            newnode->data=element;
            newnode->next=top;
            top=newnode;
            cout<<"pushed "<<element<<endl;
        }
        void pop(int element){
        	
        	if(!isempty()){
        		node* current=top;
        	node* prev=NULL;
        	while(current!=NULL && current->data!=element){
        		prev=current;
        		current=current->next;
		   }
		   if(current!=NULL){
		   	if(prev!=NULL){
		   		prev->next=current->next;
			   }else{
			   	top=current->next;
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

        bool search(int key){
        	node* current=top;
        	while(current!=NULL){
        		if(current->data==key){
        			return true;
			   }
			   current=current->next;
		   }
		   return false;
	   }
	   
	   void display() {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main(){
    Stack s;
//    s.push(2);
//    s.push(6);
//    s.push(8);
int n;
cin>>n;
for(int i=0;i<n;i++){
	int element;
	cin>>element;
	s.push(element);
}
int value;
cin>>value;
   s.pop(value);;
    int key;
    cout<<"key to search: ";
    cin>>key;
    if(s.search(key)){
    	cout<<"yes";
    }else{
    	cout<<" no";
    }
    s.display();
}


