//int main(){
//	int num,i;
//	cout<<"enter your num= ";
//	cin>>num;
//	
//	int fibo[num];
//	fibo[0]=0;
//	fibo[1]=1;
//	for(i=2;i<num;i++){
//		fibo[i]=fibo[i-1]+fibo[i-2];
//	}
//	
//	for(i=0;i<num;i++){
//		cout<<fibo[i]<<" ";
//	}
//	
//}



#include<iostream>
using namespace std;
int main(){
	int num,i;
	cout<<"enter the number= ";
	cin>>num;
	int fibo[num];
	fibo[0]=0;
	fibo[1]=1;
	for(i=2;i<num;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(i=0;i<num;i++){
		cout<<fibo[i]<<endl;
	}
}
