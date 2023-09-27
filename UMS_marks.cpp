#include<iostream>
using namespace std;
class ums{
	char name[20];
	float mark1;
	float mark2;
	float mark3;
	float mark4;
	float mark5;
	float mark6;
	float mark7;
	float mark8;
	
	int roll;
	int reg;
	public:
		void getdata(){
			cout<<"write name= ";
			cin>>name;
			cout<<"roll is = ";
			cin>>roll;
			cout<<"reg is = ";
			cin>>reg;
			cout<<"mark1 is = ";
			cin>>mark1;
			cout<<"mark2 is = ";
			cin>>mark2;
			cout<<"mark3 is = ";
			cin>>mark3;
			cout<<"mark4 is = ";
			cin>>mark4;
			cout<<"mark5 is = ";
			cin>>mark5;
			cout<<"mark6 is = ";
			cin>>mark6;
			cout<<"mark7 is = ";
			cin>>mark7;
			cout<<"mark8 is = ";
			cin>>mark8;
			
			
		}
		void display(){
			if(mark1>=40){
				cout<<name<<" is pass in subject1."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark2>=40){
				cout<<name<<" is pass in subject2."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark3>=40){
				cout<<name<<" is pass in subject3."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark4>=40){
				cout<<name<<" is pass in subject4."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark5>=40){
				cout<<name<<" is pass in subject5."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark6>=40){
				cout<<name<<" is pass in subject6."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark7>=40){
				cout<<name<<" is pass in subject7."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			if(mark8>=40){
				cout<<name<<" is pass in subject8."<<endl;
			}
			else{
				cout<<name<<" need to give reappear."<<endl;
			}
			
		}
};
int main(){
	ums lpu;
	lpu.getdata();
	lpu.display();
	ums ctu;
	ctu.getdata();
	ctu.display();
	ums chitkara;
	chitkara.getdata();
	chitkara.display();
}
