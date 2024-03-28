#include<iostream>
using namespace std;
//#include<algorithm>;
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
	}
	else if(value>root->data){
		root->right=insert(root->right,value);
	}
		return root;
	
	
}
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	cout<<endl;
	inorder(root->right);
}
void preorder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

bool search(node* root,int value){
	if(root==NULL){
		return false;
	}
	if(value<root->data){
		return search(root->left,value);
	}
	else if(value>root->data){
		return search(root->right,value);
	}
		return true;
	
}
node* findmin(node* root){
	node* current=root;
	while(current->left!=NULL){
		current=current->left;
	}
	return current;
}
node* findmax(node* root){
	node* current=root;
	while(current->right!=NULL){
	
		current=current->right;
	}
	return current;
}
node* delnode(node* root, int value){
	if(root==NULL){
		return root;
	}
	if(value<root->data){
		root->left=delnode(root->left,value);
	}else if(value>root->data){
		root->right=delnode(root->right,value);
	}else{
		if(root->left==NULL){
			node* temp=root->right;
			delete root;
			return temp;
		}
		if(root->right==NULL){
			node* temp=root->left;
			delete root;
			return temp;
		}
	node* temp=findmin(root->right);
       root->data=temp->data;
       root->right=delnode(root->right,temp->data);
	}
	return root;
}

int main(){
	node* root=NULL;
	root=insert(root,10);
	root=insert(root,12);
	root=insert(root,14);
	root=insert(root,15);
	root=insert(root,17);
	root=insert(root,9);
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	node* minNode = findmin(root);
    cout << "Minimum node value: " << minNode->data << endl;
    node* maxnode=findmax(root);
    cout<<"maximum node " <<maxnode->data<<endl;
    
	int value;
	cout<<"enter node to search";
	cout<<endl;
	cin>>value;
	if(search(root,value)){
		cout<<"yes"<<" "<<value<<" found";
	}else{
		cout<<" no not found";
	}
	cout<<endl;
//	cout<<" value to del";
//	int delvalue;
//	cin>>delvalue;
	root=delnode(root,minNode->data);
	postorder(root);
	
}

