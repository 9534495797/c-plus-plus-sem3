#include<iostream>
using namespace std;
int main(){
	int a=0;
	int b=1;
	int c=0;
	int num;
	cin>>num;
	while(a<=num){
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
	
}
