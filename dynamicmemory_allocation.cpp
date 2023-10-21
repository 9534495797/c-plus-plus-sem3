#include<iostream>
using namespace std;
//allocation and deallocation in array
//int main(){
//	int *arr;
//	int size;
//	cout<<"enter the size of integer array";
//	cin>>size;
//	cout<<"creating an array of size"<<size<<endl;
//	arr=new int[size];
//	if(arr==NULL){
//		cout<<"problem inn memory allocation";
//		exit(1);
//	}else{
//	cout<<"dynamic allocation of memory for array is succesful"<<endl;
//	cout<<"enter the array elements";
//	for(int i=0;i<size;i++){
//		cin>>*(arr+i);
//	}
//	cout<<"entered elements are"<<endl;
//	for(int i=0;i<size;i++){
//		cout<<"\n"<<*(arr+i);
//	}
//	}
//	delete []arr;
//	cout<<"memeory deallocated ";
//	return 0;
//}


//sum and average of double typed array elements using dma
//int main(){
//	double *arr,*sum,*avg;
//	int size;
//	sum=new double;
//	avg=new double;
//	cout<<"\n enter size of double array";
//	cin>>size;
//	cout<<"\n creating an array of size"<<size;
//	arr=new double[size];
//	if(arr==NULL||sum==NULL||avg==NULL){
//		cout<<"\n problem in memory alocation";
//		exit(1);
//	}
//	cout<<"\n enter array elements:";
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<size;i++){
//		*sum=*sum+arr[i];
//	}
//	cout<<"\n sum of elemen ts of array is"<<*sum;
//	*avg=*sum/size;
//	cout<<"\n average of elements is: "<<*avg;
//	delete[]arr;
//	delete sum;
//	delete avg;
//	return 0;
//	
//	
//	
//}


//sum of array elements using dma
//int main(){
//	int *arr,sum=0;
//	int size;
//	cout<<"\n enyter size of in array";
//	cin>>size;
//	cout<<"\n creating array of size"<<size;
//	arr=new int[size];
//	if(arr==NULL){
//		cout<<"\n problem in memeory alocation";
//		exit(1);
//	}
//	cout<<"enter array elements";
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<size;i++){
//		sum=sum+arr[i];
//		
//	}
//	cout<<"\n sum of array elements is"<<sum;
//	delete[]arr;
//	return 0;
//}


//memory leak  >>when we alll=ocate the memory but not deallocate then it causes memory leak
//void mem_leak(){
//	int *ptr=new int[10];
//}
//int main(){
//	mem_leak();
//	return 0;
//}

//memory leak solution
//void mem_leak(){
//	int *ptr=new int[10];
//	delete[]ptr;//solution of memory leak
//}
//int main(){
//	mem_leak();
//	return 0;
//}





//dangling pointer example
//int main(){
//	int *ptr;
//	{
//	
//	int v=23;
//	ptr=&v;
//	cout<<"address is(inside block:)"<<ptr<<"\n";
//}
//cout<<"address is(outside block):"<<ptr;//it is dangling
//ptr=NULL;
//}

//example 2
//int main(){
//	int* pvalue=NULL;
//		pvalue=new int;
//		*pvalue=23;
//		cout<<"address where pointer is pointing before deletion:"<<pvalue<<endl;
//		delete pvalue;//free memory
//		cout<<"address where pointer is pointing after deletion:"<<pvalue<<endl;//dangling pointer
//		pvalue=NULL;			cout<<"\n"<<pvalue;
//			return 0;
//}


//dma in class
//class array{
//	int *arr;
//	int size;
//	public:
//		void getdata(int n){
//			size=n;
//			arr=new int size[];
//			for(int i=0;i<size;i++){
//				cin>>arr[i];
//			}
//		}
//		int getsum(){
//			int sum=0;
//			for(int i=0;i<size;i++){
//				sum+=arr[i];
//			}
//			return sum;
//		}
//		void displaydata(){
//			for(int i=0;i<size;i++){
//				cout<<"\t"<<arr[i];
//			}
//			cout<<"\n sum of elements are:"<<getsum();
//		}
//		~array(){
//			delete[]arr;
//			//complete it from here
//		}
//};








//dma inside a class allocate/dealocate dynamic memeorry to string
#include<iostream>
#include<string.h>
using namespace std;
class string1{
	char* str;
	public:
		string1(char* s){
			int length=strlen(s);
			str=new char [length+1];
			strcpy(str,s);
		}
		~string1(){
			cout<<"deleting str\n";
			delete []str;
			
		}
		void display(){
			cout<<str<<endl;
		}
};
int main(){
	string1 s1;
	cout<<"s1=";
	s1.display();
	return 0;
}
