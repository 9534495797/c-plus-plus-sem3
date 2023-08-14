#include<iostream>
using namespace std;
class A{
	private:
		int a;
		public:
			void fill(){
				cin>>a;
				cout<<a;
			}
};
main(){
	int c;
	A oba;
	oba.fill();//valid b/c public
	//oba.a=10;//invalid b/c private
	
}
