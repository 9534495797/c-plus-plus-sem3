#include<iostream>
using namespace std;
#include<iomanip>
class area{
	float side1,side2;
	public:
		void getdata(){
			cout<<"side 1 : ";
			cin>>side1;
			cout<<"side 2 is: ";
			cin>>side2;
		}
		void display(){
			cout<<"area of recatngle is = "<<fixed<<setprecision(3)<<side1 * side2<<endl;
		}
	
};
int main(){
	area a;
	a.getdata();
	a.display();
	area b;
	b.getdata();
	b.display();
	area c;
	c.getdata();
	c.display();
}
