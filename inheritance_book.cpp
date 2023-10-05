#include<iostream>
using namespace std;//qq1 till line 88
//const int len=80;//maximum length of names
//class employee{
//	char name[len];//employee name
//	unsigned long number;//employee number
//	public:
//		void getdata(){
//			cout<<"enter last name: ";
//			cin>>name;
//			cout<<"enter number: ";
//			cin>>number;
//			
//		}
//		void putdata(){
//			cout<<"name: "<<name;
//			cout<<"number: "<<number;
//		}
//};
//class manager:public employee{//derived manager class
//char title[len];//position of employee
//double dues;//golf club dues
//public:
//	void getdata(){
//		employee::getdata();
//		cout<<"enter title: ";
//		cin>>title;
//		cout<<"enter dues: ";
//		cin>>dues;
//	}
//	void putdata(){
//		employee::putdata();
//		cout<<"title: "<<title;
//		cout<<"dues: "<<dues;
//		
//	}
//
//	
//};
//
//class scientist:public employee{//scientist class
//int pubs;//number of publications
//public:
//	void getdata(){
//		employee::getdata();
//		cout<<"number of pubs: ";
//		cin>>pubs;
//		
//	}
//	void putdata(){
//		employee::putdata();
//		cout<<"number of publications: "<<pubs;
//	}
//	
//};
//class laborer:public employee{//laborer class
//
//};
//class forman:public laborer{
//	float quotas;//percent of quota met succesfuly
//	public:
//		void getdata(){
//			laborer::getdata();
//			cout<<"number of cotas: ";
//			cin>>quotas;
//		}
//		void putdata(){
//			laborer::putdata();
//			cout<<"quotas: "<<quotas;
//		}
//};
//
//int main(){
//	laborer l1;
//	forman f1;
//	cout<<endl;
//	cout<<"enter data for labore1: ";
//	l1.getdata();
//	cout<<"enter data for forman1: ";
//	f1.getdata();
//	cout<<endl;
//	cout<<"data on labore1 : ";
//	l1.putdata();
//	cout<<"data on forman 1: ";
//	f1.putdata();
//	cout<<endl;
//	return 0;
//;}


//q2
//multiple inheritance:
//class a{
//	
//};
//class b{
//};
//class c:public a,public b{//derived class have more than one parent class
//};



//own mind example
class faculty{
	char name[100];
	float salary;
	public:
		void getdata(){
			cout<<"enter name: ";
			cin>>name;
			cout<<"salary: ";
			cin>>salary;
		}
		void dissplay(){
			cout<<"name "<< name<<endl;
			cout<<"salary "<< salary;
		}
	
};
class student:public faculty{
	int students;
	public:
		void getdata(){
			student::getdata();
			cout<<"number of students: ";
			cin>>students;
		}
		void display(){
			student::display();
			cout<<"number of students teach by faculty is: "<< students;
		}
};
int main(){
	faculty f1;
	student s1;
	f1.getdata();
	s1.getdata();
	f1.dissplay();
	
	s1.display();
}
