#include<iostream>
using namespace std;
//int  main(){
//	int a=10;
//	int *p;
//	int **pp;
//	p=&a;
//	pp=&p;
//	cout<<"address of a= "<<p<<endl;
//	cout<<"address of p= "<<pp<<endl;
//	cout<<"value stored at p: "<<*p<<endl;
//	cout<<"value stored at pp: "<<*pp<<endl;//stored at p
//	cout<<"value stored at pp: "<<**pp<<endl;//value stored at address contained by poiner stired at pp
//	
//	
//}

int main(){
	int x=10;
	int *p1;
	int **p2;
	
	p1=&x;
	p2=&p1;
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<*p1<<endl;
	cout<<*p2<<endl;
	cout<<**p2<<endl;
	
	
	
}
