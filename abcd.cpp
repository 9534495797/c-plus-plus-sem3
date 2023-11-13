#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
node* createnode(int value){
	node* newnode=new node();
	newnode->data=value;
	newnode->left=newnode->right=NULL;
	return newnode;
}
node* insert(node* root,int value){
	if(root==NULL){
		return createnode(value);
	}
	if(value<root->data){
		root->left=insert(root->left,value);
	}else if(value>root->data){
		root->right=insert(root->right,value);
	}else{
		return root;
	}
}
node* findminnode(node* root){
	node* current=root;
	while(current->left!=NULL){
		current=current->left;
	}
	return current;
}
node* delnode(node* root,int value){
	if(root==NULL){
		return root;
	}
	if(value<root->data){
		root->left=delnode(root->left,value);
	}if(value>root->data){
		root->right=delnode(root->right,value);
	}else{
		if(root->left==NULL){
			node* temp=root->right;
			delete root;
			return temp;
		}if(root->right==NULL){
			node* temp=root->left;
			delete root;
			return temp;
		}
		node* temp=findminnode(root->right);
		temp->data=root->data;
		root->right=delnode(root->right,temp->data);
	}
	return root;
}
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	}
bool search(node* root,int value){
	if(root==NULL){
		return false;
	}
	if(value<root->data){
		return search(root->left,value);
	}
	if(value>root->data){
		return search(root->right,value);
	}else{
		return true;
	}
}
int main(){
	node* root=NULL;
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,50);
	inorder(root);
	cout<<endl;
	int value;
	cin>>value;
	if(search(root,value)){
		cout<<"yeas found";
	}else{
		cout<<"not found";
	}
	cout<<endl;
	int x;
	cin>>x;
	delnode(root,x);
	inorder(root);
}
