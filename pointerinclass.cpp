#include<iostream>
using namespace std;
class array{
	int *arr;
	int size;
	public:
		void get_data(int n){
			size=n;
			arr=new int[size];
			cout<<"enter elements: ";
			for(int i=0;i<size;i++){
				cin>>*(arr+i);
			}
		}
		void add(){
		int sum=0;
		for(int i=0;i<size;i++)
		}
};
