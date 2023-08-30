#include<iostream>
using namespace std;
//#include<iomanip>
//inline int square(int x){
//	return x*x;
//}
//int main(){
//	int result=square(5+3);
//	cout<<result<<endl;
//	return 0;
//}


//int main(){
//	double value=1234.56789;
//	cout<<setw(10)<<setfill('*')<<value;
//	return 0;
//}

inline int divide(int a,int b){
	if(b==0){
		cout<<"error";
		return 0;
	}
	return a/b;
}
int main(){
	int result=divide(10,2);
	cout<<result;
	return 0;
}
