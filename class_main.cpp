#include<iostream>;
using namespace std;
class abc{
	private:
		int roll;
		char name[20];
		public:
			void getdata(){
				cout<<"name= ";
	cin>>name;
	cout<<"roll=";
	cin>>roll;
			}
			void display(){
								cout<<"name= "<<name<<endl;
	cout<<"roll = "<<roll<<endl;
			}
};

int main()
{
abc x;
//cout<<"name="<<endl;
x.getdata();
x.display();
abc y;
y.getdata();
y.display()
;
}

//#include<iostream>
//using namespace std;
//class detail{
//	char name[20];
//	int roll;
//	public:
//		void getdata(){
//			cout<<"name: ";
//			cin>>name;
//			cout<<"roll : ";
//			cin>>roll;
//		}
//		void display(){
//			cout<<"name = "<<name<<endl;
//			cout<<"roll "<<roll;
//		}
//};
//int main(){
//	detail x;
//	x.getdata();
//	x.display();	
//}


//#include<iostream>
//using namespace std;
//class voter{
//	char name[30];
//	int age;
//	public:
//		void getdata(){
//			cout<<"enter name : ";
//			cin>>name;
//			cout<<"enter age : ";
//			cin>>age;
//			
//		}
//		void display(){
//			if(age>=18){
//				cout<<"eligible for voting "<<endl;
//			}
//			else{
//				cout<<"not eligible";
//			}
//		}
//};
//int main(){
//	voter a;
//	a.getdata();
//	a.display();
//	voter b;
//	b.getdata();
//	b.display();
//	voter c;
//	c.getdata();
//	c.display();
//}
