#include<iostream>
using namespace std;
template<class T>
T square(T num){
	return (num*num);
}
int main(){
	int num1=3;
	cout<<"\nsquarre of"<<num1<<"="<<square<int>(num1);
	float num2=5.6;
	cout<<"\n square of num2 = "<<square<float>(num2);
	return 0;
}
