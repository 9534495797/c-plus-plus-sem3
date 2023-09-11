#include<iostream>
using namespace std;
int main(){
	void *ptr;
	int *ptr1;
	int a=90;
	ptr=&a;
	ptr1=(int*)ptr;
	cout<<"value of *ptr1 "<<*ptr1<<endl;
	return 0;
}
//for c++ i havt to typecast
