#include<iostream>
#include<vector>
using namespace std;

//insertin in max heap
//class maxheap{
//	private:
//		vector<int>heap;//use dynamic array to store the elements
//		int parent(int i){
//			return (i-1)/2;//compute the index of parent of a given node
//		}
//		public:
//			void insert(int value){
//				heap.push_back(value);//add new value to end of heap
//				int index =heap.size()-1;
//				while(index!=0&&heap[parent(index)]<heap[index]){
//					swap(heap[parent(index)],heap[index]);
//					index=parent(index);//move to parent index
//				}
//			}
//			void printheap(){
//				for(int i=0;i<heap.size();i++){
//					cout<<heap[i]<<" ";
//				}
//				cout<<endl;
//				
//			}
//			
//};
//int main(){
//	maxheap h;
//	h.insert(3);
//	h.insert(5);
//	h.insert(1);
//	h.insert(8);
//	cout<<"max heap: ";
//	h.printheap();
//	return 0;
//	
//}



//insertion in mean heap
//class maxheap{
//	private:
//		vector<int>heap;//use dynamic array to store the elements
//		int parent(int i){
//			return (i-1)/2;//compute the index of parent of a given node
//		}
//		public:
//			void insert(int value){
//				heap.push_back(value);//add new value to end of heap
//				int index =heap.size()-1;
//				while(index!=0&&heap[parent(index)]>heap[index]){
//					swap(heap[parent(index)],heap[index]);
//					index=parent(index);//move to parent index
//				}
//			}
//			void printheap(){
//				for(int i=0;i<heap.size();i++){
//					cout<<heap[i]<<" ";
//				}
//				cout<<endl;
//				
//			}
//			
//};
//int main(){
//	maxheap h;
//	h.insert(3);
//	h.insert(5);
//	h.insert(1);
//	h.insert(8);
//	cout<<"min heap: ";
//	h.printheap();
//	return 0;
//	
//}


//deletion in max heap
class maxheap{
	private:
		vector<int>heap;
		int left(int j){
			return 2*i+1;
		}
		int right(int i){
			return 2*i+2;
		}
		void heapify(int i){
			int largest =i;
			int l=left(i);
			int r=right(i);
			if(l<heap.size()&&heap[l]>heap[largest]){
				largest=l;
			}
			if(r<heap.size()&&heap[r]>heap[largest]){
				largest=r;
			}
		}
};
