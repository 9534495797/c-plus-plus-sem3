#include<iostream>
using namespace std;
void fibo(int num){
	int a=0;
	int b=1;
	for(int i=0;i<=num;i++){
		cout<<a;
		int temp=a;
		a=b;
		b=temp+b;
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	fibo(n);
	return 0;
}
