#include<iostream>
using namespace std;
struct employee{
	char name[50];
	int age;
	float salary;
}e;
int main(){
	cout<<"Enter full name: ";
	cin.get(e.name,50);
	cout<<"Enter age: ";
	cin>>e.age;
	cout<<"Enter salary: ";
	cin>>e.salary;
	cout<<"DISPLAYING INFORMATION:"<<endl;
	cout<<"Name: "<<e.name<<endl;
	cout<<"age: "<<e.age<<endl;
	cout<<"Salary: "<<e.salary;
}
