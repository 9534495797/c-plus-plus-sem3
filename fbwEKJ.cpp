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
node* insert(node* root, int value){
	if(root==NULL){
		return createnode(value);
	}
	if(value<root->data){
		root->left=insert(root->left,value);
	}
	if(value>root->data){
		root->right=insert(root->right,value);
	}else{
		return root;
	}
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
	node* findmin(node* root){
		if(root==NULL){
			return NULL;
		}
		node* current=root;
		while(current->left!=NULL){
			current=current->left;
		}
		return current;
	}
	

int main(){
	node* root=NULL;
		root=insert(root,10);
			root=insert(root,20);
				root=insert(root,30);
					root=insert(root,40);
						root=insert(root,50);
						inorder(root);
						int value;
						cin>>value;
						if(search(root,value)){
							cout<<"yes";
						}else{
							cout<<"no";
						}
						cout << "\nMinimum node: ";
    node* minNode = findmin(root);
    if(minNode != NULL){
        cout << minNode->data;
    }
    else{
        cout << "Tree is empty.";
    }
						
}
