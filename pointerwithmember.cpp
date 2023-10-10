#include<iostream>
using namespace std;
class x{
	public:
		int a;
		void f(int b){
			cout<<"value of b is:"<<b<<endl;
			
		}
};
int main(){
	int x::*ptiptr=&x::a;
	void(x::a*ptfptr)(int)=&x::f;
	x object;
	object.a*ptiptr=10;
	cout<<"value of a is: "<<object.a*ptiptr<<endl;
	(object.a*ptfptr)
}
