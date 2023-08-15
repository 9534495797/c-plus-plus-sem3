#include<iostream>
using namespace std;
class voter{
	char name[30];
	int age;
	public:
		void getdata(){
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter age : ";
			cin>>age;
			
		}
		void display(){
			if(age>=18){
				cout<<"eligible for voting "<<endl;
			}
			else{
				cout<<"not eligible";
			}
		}
};
int main(){
	voter a;
	a.getdata();
	a.display();
	voter b;
	b.getdata();
	b.display();
	voter c;
	c.getdata();
	c.display();
}
