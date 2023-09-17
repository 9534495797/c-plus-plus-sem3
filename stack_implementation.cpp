#include<iostream>
using namespace std;

//insertion in stack using array orr push operation
//const int max_size=100;
//class stack{
//	int arr[max_size];
//	int top;
//	public:
//		stack(){
//			top=-1;
//			
//		}
//		void push(int value){
//			if(top>=max_size-1){
//				cout<<"stack overflow can not push more element"<<endl;
//			}else{
//				top++;
//				arr[top]=value;
//				cout<<"pushed "<<value<<" in to stack."<<endl;
//			}
//		}
//};
//int main(){
//	stack a;
//	a.push(10);
//	a.push(20);
//	a.push(30);
//	return 0;
//}


//insertion in stack using linked list or push operation
struct node{
	int data;
	node* next;
	node(int value):data(value),next(NULL){}// i will use NULL insted of nullptr because this format no support on this compiler
	
	
};
class stack{
	private:
		node* top;
		public:
			stack():top(NULL){
			}
			bool isEmpty(){
				return top==NULL;
				
			}
			void push(int value){
				node* newnode=new node(value);
				newnode->next=top;
				top=newnode;
			}
	
};
int main(){
	stack a;
	a.push(11);
	a.push(12);
	a.push(13);
	if(a.isEmpty()){
		cout<<"stack is empty"<<endl;
	}else{
		cout<<"stack is not empty"<<endl;
	}
	return 0;
}
