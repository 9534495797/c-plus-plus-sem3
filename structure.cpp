#include<iostream>
#include<string>
using namespace std;

struct car{
	string name;
	int sc;
	long price;
}s;
int main(){
//	s.name="oddy";
//	s.sc=4;
//	s.price=6000000;
cin>>s.name>>s.sc>>s.price;
	cout<<"name is: "<<s.name<<endl;
	cout<<"sitting capacity : "<<s.sc<<endl;
	cout<<"price is: "<<s.price;
	return 0;
	
}
