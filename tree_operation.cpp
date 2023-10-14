//quick sort
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int partition(vector<int>& arr, int low, int high) {
//    int pivot = arr[high];
//    int i = low - 1;
//
//    for (int j = low; j <= high - 1; j++) {
//        if (arr[j] <= pivot) {
//            i++;
//            swap(arr[i], arr[j]);
//        }
//    }
//    swap(arr[i + 1], arr[high]);
//    return i + 1;
//}
//
//void quickSort(vector<int>& arr, int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high);
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    vector<int> arr(n);
//    cout << "Enter " << n << " elements:" << endl;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Original array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    quickSort(arr, 0, n - 1);
//
//    cout << "Sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}




//binary tree searching

#include <iostream>
using namespace std;

// Definition for a binary tree node
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//// Function to create a new node
//Node* createNode(int value) {
//    Node* newNode = new Node();
//    newNode->data = value;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// Function to insert a new node with the given value into the binary search tree
//Node* insert(Node* root, int value) {
//    if (root == NULL) {
//        return createNode(value);
//    }
//
//    if (value < root->data) {
//        root->left = insert(root->left, value);
//    } else if (value > root->data) {
//        root->right = insert(root->right, value);
//    }
//
//    return root;
//}
//
//// Function to search for a value in the binary search tree
//bool search(Node* root, int value) {
//    if (root == NULL) {
//        return false;
//    }
//
//    if (value == root->data) {
//        return true;
//    } else if (value < root->data) {
//        return search(root->left, value);
//    } else {
//        return search(root->right, value);
//    }
//}

// Function to deallocate memory and delete all nodes in the tree
//void deleteTree(Node* root) {
//    if (root == NULL) {
//        return;
//    }
//    deleteTree(root->left);
//    deleteTree(root->right);
//    delete root;
//}
//int main() {
//    node* root = NULL;
//    int numElements;
//    cout << "Enter the number of elements: ";
//    cin >> numElements;
//
//    cout << "Enter " << numElements << " elements: ";
//    for (int i = 0; i < numElements; ++i) {
//        int value;
//        cin >> value;
//        root = insert(root, value);
//    }
//
//    int searchValue;
//    cout << "Enter the value to search for: ";
//    cin >> searchValue;
//
//    // Search for the value in the binary search tree
//    if (search(root, searchValue)) {
//        cout << "Value " << searchValue << " found in the binary search tree." << endl;
//    } else {
//        cout << "Value " << searchValue << " not found in the binary search tree." << endl;
//    }
//
//    // Clean up - deallocate memory
//    //deleteTree(root);
//
//    return 0;
//}



//insertion
//#include <iostream>
//using namespace std;
//
//// Definition for a binary tree node
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//// Function to create a new node
//Node* createNode(int value) {
//    Node* newNode = new Node();
//    newNode->data = value;
//    newNode->left = newNode->right = nullptr;
//    return newNode;
//}
//
//// Function to insert a new node with the given value into the binary search tree
//Node* insert(Node* root, int value) {
//    if (root == nullptr) {
//        return createNode(value);
//    }
//
//    if (value < root->data) {
//        root->left = insert(root->left, value);
//    } else if (value > root->data) {
//        root->right = insert(root->right, value);
//    }
//
//    return root;
//}
//
//// Function to print inorder traversal of the binary search tree
//void inorderTraversal(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    inorderTraversal(root->left);
//    cout << root->data << " ";
//    inorderTraversal(root->right);
//}
//
//int main() {
//    Node* root = nullptr;
//
//    // Insert elements into the binary search tree
//    root = insert(root, 50);
//    root = insert(root, 30);
//    root = insert(root, 70);
//    root = insert(root, 20);
//    root = insert(root, 40);
//    root = insert(root, 60);
//    root = insert(root, 80);
//
//    cout << "Inorder traversal of the BST: ";
//    inorderTraversal(root);
//    cout << endl;
//
//    // Clean up - deallocate memory
//    // Code for deallocation is not included in this example for simplicity
//
//    return 0;
//}


//in order traversal
//#include <iostream>
//using namespace std;
//
//// Definition for a binary tree node
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//// Function to create a new node
//Node* createNode(int value) {
//    Node* newNode = new Node();
//    newNode->data = value;
//    newNode->left = newNode->right = nullptr;
//    return newNode;
//}
//
//// Function for in-order traversal of the binary search tree
//void inorderTraversal(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    inorderTraversal(root->left);
//    cout << root->data << " ";
//    inorderTraversal(root->right);
//}
//
//int main() {
//    Node* root = createNode(50);
//    root->left = createNode(30);
//    root->right = createNode(70);
//    root->left->left = createNode(20);
//    root->left->right = createNode(40);
//    root->right->left = createNode(60);
//    root->right->right = createNode(80);
//
//    cout << "In-order traversal: ";
//    inorderTraversal(root);
//    cout << endl;
//
//    // Clean up - deallocate memory
//    // Code for deallocation is not included in this example for simplicity
//
//    return 0;
//}

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
void inordertraversal(node* root){
	if(root==NULL){
		return;
	}
	inordertraversal(root->left);
	cout<<root->data;
	inordertraversal(root->right);
}
int main(){
	node* root=createnode(9);
	root->left=createnode(3);
	 root->left->left=createnode(5);
root->left->right=createnode(7);
	root->right=createnode(8);
	root->right->left=createnode(2);
	 root->right->right=createnode(11);
	cout<<"inordertraversal"<<" ";
	inordertraversal(root);
	cout<<endl;
	return 0;
}
//pre order
//#include <iostream>
//using namespace std;
//
//// Definition for a binary tree node
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//// Function to create a new node
//Node* createNode(int value) {
//    Node* newNode = new Node();
//    newNode->data = value;
//    newNode->left = newNode->right = nullptr;
//    return newNode;
//}
//
//// Function for pre-order traversal of the binary search tree
//void preorderTraversal(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    cout << root->data << " ";
//    preorderTraversal(root->left);
//    preorderTraversal(root->right);
//}
//
//int main() {
//    Node* root = createNode(50);
//    root->left = createNode(30);
//    root->right = createNode(70);
//    root->left->left = createNode(20);
//    root->left->right = createNode(40);
//    root->right->left = createNode(60);
//    root->right->right = createNode(80);
//
//    cout << "Pre-order traversal: ";
//    preorderTraversal(root);
//    cout << endl;
//
//    // Clean up - deallocate memory
//    // Code for deallocation is not included in this example for simplicity
//
//    return 0;
//}
//


//post order
//#include <iostream>
//using namespace std;
//
//// Definition for a binary tree node
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//// Function to create a new node
//Node* createNode(int value) {
//    Node* newNode = new Node();
//    newNode->data = value;
//    newNode->left = newNode->right = nullptr;
//    return newNode;
//}
//
//// Function for post-order traversal of the binary search tree
//void postorderTraversal(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    postorderTraversal(root->left);
//    postorderTraversal(root->right);
//    cout << root->data << " ";
//}
//
//int main() {
//    Node* root = createNode(50);
//    root->left = createNode(30);
//    root->right = createNode(70);
//    root->left->left = createNode(20);
//    root->left->right = createNode(40);
//    root->right->left = createNode(60);
//    root->right->right = createNode(80);
//
//    cout << "Post-order traversal: ";
//    postorderTraversal(root);
//    cout << endl;
//
//    // Clean up - deallocate memory
//    // Code for deallocation is not included in this example for simplicity
//
//    return 0;
//}




