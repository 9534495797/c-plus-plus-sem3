#include<iostream>
using namespace std;
//int main(){
//	int arr[100],n,i,pos;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cin>>pos;
//	for(i=pos-1;i<=n-1;i++){
//		arr[i]=arr[i+1];
//	}
//	n--;
//	cout<<"deleted array: ";
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}

//int main(){
//	int arr[100],n,i,val;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cin>>val;
//	n++;
//	for(i=n;i>=1;i--){
//		arr[i-1]=arr[i-2];
//	}
//	arr[0]=val;
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}


//int main(){
//	int arr[100],n,i,pos,val;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cin>>pos;
//	cin>>val;
//	for(i=n-1;i>pos-1;i--){
//		arr[i+1]=arr[i];
//		arr[pos-1]=val;
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}

//int main(){
//	int arr[100],n,i,val;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cin>>val;
//	for(i=0;i<n;i++){
//		if(arr[i]==val){
//			cout<<"found";
//			break;
//		}
//		
//	}if(arr[i]!=val){
//		cout<<"not found";
//	}
//}

//int partition(int arr[],int start,int end){
//	int pivot=arr[start];
//	int count=0;
//	for(int i=start+1;i<=end;i++){
//		if(arr[i]<=pivot)
//		count++;
//	}
//	int pivotindex=start+count;
//	swap(arr[pivotindex],arr[start]);
//	int i=start;
//	int j=end;
//	while(i<pivotindex&&j>pivotindex){
//		while(arr[i]<pivot){
//			i++;
//		}
//		while(arr[j]>pivot){
//			j--;
//		}
//		if(i<pivotindex&&j>pivotindex){
//			swap(arr[i++],arr[j--]);
//		}
//	}
//	return pivotindex;
//	
//}
//void quicksort(int arr[],int start,int end){
//	if(start>=end){
//		return;
//	}
//	int p=partition(arr,start,end);
//	quicksort(arr,start,p-1);
//	quicksort(arr,p+1,end);
//}
//int main(){
//	int arr[100],n,i;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	quicksort(arr,0,n-1);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}



//toh
//void toh(int n,int source,int auxillary,int destination){
//	if(n>=1){
//		toh(n-1,source,destination,auxillary);
//		cout<<"move a disk from"<< source<<" to "<< destination<<endl;
//		toh(n-1,auxillary,source,destination);
//		
//	}
//}
//void toh(int n){
//	if(n<=0){
//		cout<<"invalid";
//	}else{
//		int steps=(1<<n)-1;
//		cout<<steps;
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	toh(n,1,2,3);
//	cout<<endl;
//	toh(n);
//}

// all in one vvvvvvvvviiiiiiii


//struct node{
//	int data;
//	node* left;
//	node* right;
//	
//};
//node* createnode(int value){
//	node* newnode=new node();
//	newnode->data=value;
//	newnode->left=newnode->right=NULL;
//	return newnode;
//}
//void inorder(node* root){
//	if(root==NULL){
//		return;
//	}
//	inorder(root->left);
//	cout<<root->data<<" ";
//	inorder(root->right);
//}
//node* insert(node* root,int value){
//	if(root==NULL){
//		return createnode(value);
//	}
//	if(value<root->data){
//		root->left=insert(root->left,value);
//	}else if(value>root->data){
//		root->right=insert(root->right,value);
//	}else{
//		return root;
//	}
//}
//bool search(node* root,int value){
//	if(root==NULL){
//		return false;
//	}
//	if(value<root->data){
//		return  search(root->left,value);
//	}else if(value>root->data){
//		return search(root->right,value);
//	}else{
//		return true;
//	}
//}
//node* findmin(node* root){
//	node* current=root;
//	while(current->left!=NULL){
//		current=current->left;
//	}
//	return current;
//}
//void printMinNode(node* root) {
//    if (root == NULL) {
//        cout << "The tree is empty." << endl;
//        return;
//    }
//
//    node* minNode = findmin(root);
//    cout << "Minimum Node: " << minNode->data << endl;
//}
//node* findmax(node* root) {
//    node* current = root;
//    while (current->right != NULL) {
//        current = current->right;
//    }
//    return current;
//}
//void printMaxNode(node* root) {
//    if (root == NULL) {
//        cout << "The tree is empty." << endl;
//        return;
//    }
//
//    node* maxNode = findmax(root);
//    cout << "Maximum Node: " << maxNode->data << endl;
//}
//node* delnode(node* root,int value){
//	if(root==NULL){
//		return root;
//	}
//	if(value<root->data){
//		root->left= delnode(root->left,value);
//	}else if(value>root->data){
//		root->right=delnode(root->right,value);
//	}else{
//		if(root->left==NULL){
//			node* temp=root->right;
//			delete root;
//			return temp;
//		}else if(root->right==NULL){
//			node* temp=root->left;
//			delete root;
//			return temp;
//		}
//		node* temp=findmin(root->right);
//	root->data=temp->data;
//		root->right=delnode(root->right,temp->data);
//		
//	}
//	return root;
//}
//int main(){
//	node* root=NULL;
//	root=insert(root,10);
//	root=insert(root,20);
//	root=insert(root,30);
//	root=insert(root,40);
//	root=insert(root,50);
//	root=insert(root,60);
//	root=insert(root,70);
//	inorder(root);
//	cout<<endl;
//	int x;
//	cin>>x;
//	if(search(root,x)){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//	cout<<endl;
//	printMinNode(root);
//	cout<<endl;
//	printMaxNode(root);
//
//	cout<<endl;
//	int v;
//	cout<<"node to dele: ";
//	cin>>v;
//	root=delnode(root,v);
//	inorder(root);
//}

//heap
#include<vector>
//class maxheap{
//	vector<int>heap;
//	int parent(int i){
//		return (i-1)/2;
//	}
//	public:
//		void push(int value){
//			heap.push_back(value);
//			int index=heap.size()-1;
//			while(index!=0&&heap[parent(index)]>heap[index]){
//				swap(heap[parent(index)],heap[index]);
//				index=(index-1)/2;
//			}
//		}
//		void printmax(){
//			for(int i=0;i<heap.size();i++){
//				cout<<heap[i]<<" ";
//			}
//		}
//};
//int main(){
//	maxheap a;
//	a.push(3);
//	a.push(2);
//	a.push(5);
//	a.printmax();
//}


//deletion

//class maxheap{
//	vector<int>heap;
//	int leftchild(int i){
//		return 2*i+1;
//	}
//	int rightchild(int i){
//		return 2*i+2;
//	}
//	void heapify(int index){
//		int largest=index;
//		int left=leftchild(index);
//		int right=rightchild(index);
//		if(left<heap.size()&&heap[left]>heap[largest]){
//			largest=left;
//		}
//		if(right<heap.size()&&heap[right]>heap[largest]){
//			largest=right;
//		}
//		if(index!=largest){
//			swap(heap[index],heap[largest]);
//			heapify(index);
//		}
//	}
//	public:
//	void insert(int value){
//		heap.push_back(value);
//		int index=heap.size()-1;
//		while(index!=0&&heap[(index-1)/2]<heap[index]){
//			swap(heap[(index-1)/2],heap[index]);
//			index=(index-1)/2;
//		}
//	}
//	void delmax(){
//		if(heap.empty()){
//			cout<<"empty";
//		}
//		heap[0]=heap.back();
//		heap.pop_back();
//		heapify(0);
//	}
//	void printmax(){
//		for(int i=0;i<heap.size();i++){
//			cout<<heap[i]<<" ";
//		}
//	}	
//};
//int main(){
//	maxheap a;
//	a.insert(2);
//	a.insert(3);
//	a.insert(5);
//	a.delmax();
//	a.printmax();
//	
//}

//heap sort





//stack insertion and deletion
#include<iostream>
using namespace std;
#include<stack>
//const int max_size=100;
//class Stack{
//	int arr[max_size];
//	int top;
//	public:
//		Stack(){
//			top=-1;
//		}
//		bool isempty(){
//			return top==-1;
//		}
//		bool isfull(){
//			return top==max_size-1;
//		}
//		void insert(int element){
//			if(!isfull()){
//				arr[++top]=element;
//				cout<<"pushed"<<element<<endl;
//			}else{
//				cout<<"overflow!";
//			}
//		}
//		void pop(){
//			if(!isempty()){
//				cout<<"popped"<<arr[top]<<endl;
//				top--;
//			}else{
//				cout<<"underflow";
//			}
//		}
//};
//int main(){
//	Stack a;
//	a.insert(2);
//	a.insert(4);
//	a.insert(6);
//	a.insert(8);
//	a.pop();
//	a.pop();
//	a.pop();
//	a.pop();
//	a.pop();
//	
//	
//	
//}


//using linked list
//struct node{
//	int data;
//	node* next;
//};
//class Stack{
//	node* top;
//	public:
//		Stack(){
//			top=NULL;
//		}
//		bool isempty(){
//			return top==NULL;
//		}
//		void insert(int value){
//			node* newnode=new node();
//			newnode->data=value;
//			newnode->next=top;
//			top=newnode;
//			cout<<"pushed"<<value<<endl;
//		}
//		void pop(){
//			if(!isempty()){
//				node* temp=top;
//				cout<<"popped"<<top->data<<endl;
//				top=top->next;
//				delete temp;
//			}else{
//				cout<<"underflow";
//			}
//		}
//		
//		
//};
//int main(){
//	Stack a;
//	a.insert(3);
//	a.insert(5);
//	a.insert(7);
//	a.pop();
//	a.pop();
//	a.pop();
//	a.pop();
//}
//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	node* left;
//	node* right;
//};
//node* createnode(int element){
//	node* newnode=new node();
//	newnode->data=element;
//	newnode->left=newnode->right=NULL;
//	return newnode;
//}
//node* insert(node* root,int value){
//	if(root==NULL){
//		return createnode(value);
//	}
//	if(value<root->data){
//		root->left=insert(root->left,value);
//	}else if(value>root->data){
//		root->right=insert(root->right,value);
//	}else{
//		return root;
//	}
//}
//void inorder(node* root){
//	if(root==NULL){
//		return;
//	}
//	inorder(root->left);
//	cout<<root->data<<" ";
//	inorder(root->right);
//}
//bool search(node* root,int value){
//	if(root==NULL){
//		return false;
//	}
//	if(value<root->data){
//		return search(root->left,value);
//	}else if(value>root->data){
//		return search(root->right,value);
//	}else{
//		return true;
//	}
//}
//node* findmin(node* root){
//	node* current=root;
//	while(current->left!=NULL){
//		current=current->left;
//	}
//	return current;
//}
//void printmin(node* root){
//	if(root==NULL){
//		cout<<"empty tree";
//	}
//	node* minnode=findmin(root);
//	cout<<minnode->data;
//}
//node* findmax(node* root){
//	node* current=root;
//	while(current->right!=NULL){
//		current=current->right;
//	}
//	return current;
//}
//void printmax(node* root){
//	if(root==NULL){
//		cout<<"empty tree";
//	}
//	node* maxnode=findmax(root);
//	cout<<maxnode->data;
//}
//node* delnode(node* root,int value){
//	if(root==NULL){
//		return root;
//	}
//	if(value<root->data){
//		root->left=delnode(root->left,value);
//	}else if(value>root->data){
//		root->right=delnode(root->right,value);
//	}else{
//		if(root->left==NULL){
//			node* temp=root->right;
//			delete root;
//			return temp;
//		}else if(root->right==NULL){
//			node* temp=root->left;
//			delete root;
//			return temp;
//		}
//		node* temp=findmin(root->right);
//		root->data=temp->data;
//		root->right=delnode(root->right,temp->data);
//	}
//	return root;
//}
//int main(){
//	node* root=NULL;
//	root=insert(root,10);
//	root=insert(root,20);
//	root=insert(root,30);
//	root=insert(root,40);
//	root=insert(root,50);
//	root=insert(root,60);
//	root=insert(root,70);
//	inorder(root);
//	cout<<endl;
//	int val;
//	cin>>val;
//	if(search(root,val)){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//	cout<<endl;
//	printmin(root);
//	cout<<endl;
//	printmax(root);
//	cout<<endl;
//	cout<<"node to del: ";
//	int v;
//	cin>>v;
//	root=delnode(root,v);
//	inorder(root);
//}

//#include<stack>
//const int max_size=100;
//class Stack{
//	int arr[max_size];
//	int top;
//	public:
//		Stack(){
//			top=-1;
//		}
//		bool isempty(){
//			return top==-1;
//		}
//		bool isfull(){
//			return top==max_size-1;
//		}
//		void insert(int element){
//			if(!isfull()){
//				arr[++top]=element;
//				cout<<"pushed"<<element<<endl;
//			}else{
//				cout<<"overflow!";
//			}
//		}
//		void pop(){
//			if(!isempty()){
//				cout<<"popped"<<arr[top]<<endl;
//				top--;
//			}else{
//				cout<<"underflow!";
//			}
//		}
//};
//
//int main(){
//	Stack a;
//	a.insert(4);
//	a.insert(6);
//	a.insert(9);
//	a.insert(2);
//	a.pop();a.pop();a.pop();a.pop();a.pop();
//}


//int partition(int arr[],int start,int end){
//	int pivot=arr[start];
//	int count=0;
//	for(int i=start+1;i<end;i++){
//		if(arr[i]<=pivot)
//		count++;
//			
//		
//	}
//	int pivotindex=start+count;
//	swap(arr[pivotindex],arr[start]);
//	int i=start;
//	int j=end;
//	while(i<pivotindex&&j>pivotindex){
//		while(arr[i]<pivot){
//			i++;
//		}
//		while(arr[j]>pivot){
//			j--;
//		}
//		if(i<pivotindex&&j>pivotindex){
//			swap(arr[i++],arr[j--]);
//		}
//	}
//	return pivotindex;
//}
//void quicksort(int arr[],int start,int end){
//	if(start>=end){
//		return;
//	}
//	int p=partition(arr,start,end);
//	quicksort(arr,start,p-1);
//	quicksort(arr,p+1,end);
//}
//int main(){
//	int arr[100],n,i;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	quicksort(arr,0,n-1);
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}




//heap sort



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void heapify(vector<int>& heap, int n, int i) {
//    int largest = i;
//    int left = 2 * i + 1;
//    int right = 2 * i + 2;
//
//    if (left < n && heap[left] > heap[largest]) {
//        largest = left;
//    }
//
//    if (right < n && heap[right] > heap[largest]) {
//        largest = right;
//    }
//
//    if (largest != i) {
//        swap(heap[i], heap[largest]);
//        heapify(heap, n, largest);  // Corrected line
//    }
//}
//
//void heapSort(vector<int>& heap) {
//    int n = heap.size();
//
//    // Build max heap
//    for (int i = n / 2 - 1; i >= 0; i--) {
//        heapify(heap, n, i);
//    }
//
//    // Extract elements from the heap one by one
//    for (int i = n - 1; i > 0; i--) {
//        swap(heap[0], heap[i]);
//        heapify(heap, i, 0);
//    }
//}
//
//int main() {
//    vector<int> heap;
//    int n;
//
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    cout << "Enter the elements: ";
//    for (int i = 0; i < n; i++) {
//        int element;
//        cin >> element;
//        heap.push_back(element);
//    }
//
//    cout << "Original array: ";
//    for (int num : heap) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    heapSort(heap);
//
//    cout << "Sorted array: ";
//    for (int num : heap) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}




