#include<iostream>
using namespace  std;
int main(){
	int x,y,*a,*b,temp;
	cout<<"enter value of x and y is "<<endl;
	cin>>x>>y;
	cout<<"before swapping x= \n"<<x<<"\ny= "<<y<<endl;
	a=&x;
	b=&y;
	temp=*b;
	*b=*a;
	*a=temp;
	cout<<"after swapping x=\n "<<x<<"\ny= "<<y<<endl;
}

