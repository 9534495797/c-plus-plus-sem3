#include<iostream>
using namespace std;
#include<string.h>
//class department{
//	public:
//		char name[20];
//		department(){
//			strcpy(name,"abc");
//		}
//		~department(){
//			cout<<"department class destroyed"<<endl;
//		}
//};
//class professor{
//	int pid;
//	int exp;
//	department *d;
//	public:
//	professor(int a,int b,department *d){
//		pid=a;
//		exp=b;
//		this->d=d;
//	}
//	~professor(){
//		cout<<"professor class destroyed"<<endl;;
//	}
//};
//int main(){
//	department a;
//	{
//		professor p(1,2,&a);
//	}
//	cout<<"at this point professor gets deleted but department is still there"<<endl;
//}



//COMPOSITION
class birthday{
	int date,month,year;
	public:
		birthday(int d,int m,int y){
			date=d;
			month=m;
			year=y;
			cout<<"birthday constructor"<<endl;
		}
		void display(){
			cout<<date<<"/"<<month<<"/"<<year<<endl;
		}
};
class person{
	string name;
	birthday b;
	public:
		person(string n,int d,int m,int y):b(d,m,y){
			name=n;
			cout<<"person constructor"<<endl;
		}
		void show(){
			b.display();
			cout<<name;
			
		}
		~person(){
			cout<<"person destructor"<<endl;
		}
	
	
};
int main(){
	person ob("abc",12,10,2023);
	ob.show();
}
