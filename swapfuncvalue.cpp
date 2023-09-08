#include<iostream>
using namespace std;
void swap(int a,int b){
	cout<<"before swapping"<<endl;
	cout<<"a "<<a<<"b "<<b<<endl;
		int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap: "<<endl;
	cout<<"a"<<a<<"b"<<endl;
}
int main(){
	int x=10;
	int y=20;
	swap(x,y);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	return 0;
}
