#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>& heap,int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&heap[left]>heap[largest]){
		largest=left;
	}
	if(right<n&&heap[right]>heap[largest]){
		largest=right;
	}
	if(largest!=i){
		swap(heap[i],heap[largest]);
		heapify(heap,n,largest);
	}
}
void heapsort(vector<int>& heap){
	int n=heap.size();
	for(int n/2-1;i>=0;i--){
		heapify(heap,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(heap[0],heap[i]);
		heapify(heap,i,0);
	}
}
int main(){
	vector<int> heap;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		heap.push_back(x);
	}
	heapsort(heap);
	for(int num:heap){
		cout<<num<<" ";
	}
}
