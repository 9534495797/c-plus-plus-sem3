#include<iostream>
using namespace std;
char c='a';
int main(){
	char c='b';
	cout<<"local variable is = "<<c<<endl;
	cout<<"global variable is = "<<::c<<endl;
}
