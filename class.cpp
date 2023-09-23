//#include<iostream>                       
//using namespace std;
//class item{
//	int number;//private bydefault
//	float cost;//priuvate  b/c inside the class 
//	public:
//		void getdata(int a, float b);//memeber function b/c inside the class
//		void putdata(void){//same
//			cout<<"num "<<number<<endl;
//			cout<<"cost "<<cost<<endl;
//		}
//		
//		
//};
//void item::getdata(int a, float b){
//	number=a;
//	cost=b;
//}
//int main(){//this is main functio under which object is declared
//	item x;
//	cout<<"object x"<<endl;
//	x.getdata(100,299.5);
//	x.putdata();
//	item y;
//	cout<<"object y"<<endl;
//	y.getdata(200,175.5);
//	y.putdata();
//		item z;
//	cout<<"object z"<<endl;
//	z.getdata(200,175.5);
//	z.putdata();
//
//return 0;
//}

//store report for employee salary
#include<iostream>
using namespace std;
class employee{
	char name[20];
	double salary;
	int working_year;
	public:
		void getdata(){
			cout<<"enter name: ";
			cin>>name;
			cout<<"salary: ";
			cin>>salary;
			cout<<"working_year: ";
			cin>>working_year;
			
			
		}
		void display(){
			
			cout<<"name is "<< name<<endl;
			cout<<"salary is "<< salary<<endl;
			cout<<"year of work is "<< working_year;
		}
	
};
int main(){
	employee e;
	e.getdata();
	e.display();
	employee e1;
	e1.getdata();
	e1.display();
	employee e2;
	e2.getdata();
	e2.display();
	employee e3;
	e3.getdata();
	e3.display();
	employee e4;
	e4.getdata();
	e4.display();
}

