#include<iostream>
#include<iomanip>
using namespace std;
class Container{
	double x;
	double y;
	double z;
	public:
		void getdata(){
			cin>>x>>y>>z;
		}
		void display(){
			cout<<fixed<<setprecision(2)<<x*y*z;
		}
};
int main(){
	Container a;
	a.getdata();
	a.display();
	
}
