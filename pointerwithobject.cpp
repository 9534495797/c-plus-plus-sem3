#include<iostream>
using namespace std;
class A{
	int x;
	public:
		void getdata(){
			cout<<"enter value for x: ";
			cin>>x;
			
		}
		void showdata(){
			cout<<"enterd value is: "<<x<<endl;
		}
};
int main(){
	A obj1;
	A* ptr;
	ptr=&obj1;
	ptr->getdata();
	ptr->showdata();
	(*ptr).getdata();
	(*ptr).showdata();
}
