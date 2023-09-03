#include<iostream>
using namespace  std;
int main(){
	int x=11;
	int z=67;
	int &y=x;
	//int &y=z;//refrence to z but throw a compiler error
	cout<<x<<y<<z<<endl;
	return 0;
	
	
}
