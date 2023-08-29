#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int roll;
		char name[10];
		int marks;
		public:
			static int objectcount;
			student(){
				objectcount++;
			}
			void getdata(){
				cout<<"enter roll: "<<endl;
				cin>>roll;
				cout<<"enter name: "<<endl;
				cin>>name;
				cout<<"enter marks: "<<endl;
				cin>>marks;
			}
			void putdata(){
				cout<<"roll: "<<roll<<endl;
				cout<<"name: "<<name<<endl;
				cout<<"marks: "<<marks<<endl;
			}
};
int student::objectcount=0;
int main(void){
	student s1;
	s1.getdata();
	s1.putdata();
	student s2;
	s2.getdata();
	s2.putdata();
	student s3;
	s3.getdata();
	s3.putdata();
	cout<<"total objects created= "<<student::objectcount<<endl;
	return 0;
	}
