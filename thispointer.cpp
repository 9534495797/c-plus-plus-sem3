#include<iostream>
using namespace std;
class x{
	private:
		int a;
		public:
			void set_a(int a){
				this->a=a;
			}
			void print_a(){
				cout<<"a="<<a<<endl;
			}
};
int main(){
	x obj;
	int a=5;
	obj.set_a(a);
	obj.print_a();
	
}

