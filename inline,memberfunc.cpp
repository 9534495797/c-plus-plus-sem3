#include<iostream>
using namespace std;
class operation{
	int a,b,add;
	public:
		void get(){
			cout<<"enter 1st value: ";
			cin>>a;
			cout<<"second value: ";
			cin>>b;
			
		}
		void sum();
		
}s;
inline void operation::sum(){
	add=a+b;
	cout<<"addition: "<<a+b;
}
int main(){
	cout<<"program using inline function is: ";
	s.get();
	s.sum();
	return 0;
}
