#include<iostream>
using namespace std;
//int factorial(int num){
//	if (num==0 || num==1){
//		return 1;
//	}
//	else{
//		return num*factorial(num-1);
//	}
//}
//int main(){
//	int num;
//	cin>>num;
//	cout<<"factorial of "<< num <<" is = "<< factorial(num);;
//	
//}

int fibonacci(int num){
	if (num==0 ||num==1){
		return 1;
		
	}
	else{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}
int main(){
	int num;
	cin>>num;
	cout<<"fibo series of num is: ";
	for(int i=0;i<num;i++){
		cout<<fibonacci(num);
	}
}
