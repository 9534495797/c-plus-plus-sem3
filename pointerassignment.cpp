#include<iostream>
using namespace std;
//int main(){
//	int x=10;
//	int *ptr1;
//	int *ptr2;
//	ptr1=&x;
//	ptr2=ptr1;
//	*ptr2=*ptr1;
//	cout<<"x is: "<<x<<endl;
//	cout<<"ptr1 is "<<ptr1<<endl;
//	cout<<"ptr2 is "<<ptr2<<endl;
//	cout<<"value at address which ptr1 points to:  "<<*ptr1<<endl;
//	cout<<"value at address which ptr2 points to is: "<<*ptr2<<endl;
//	return 0;
//}


int main(){
	int x=10;
	int *ptr1;
	int *ptr2;
	ptr2=&x;
	ptr1=ptr2;
	*ptr2=*ptr1;
	cout<<x<<endl;
	cout<<ptr2<<endl;
	cout<<ptr1<<endl;
	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;
	
}
