//#include<iostream>
//using namespace std;
//int main(){
//	int x=10;
//	int &ref=x;
//	ref=20;
//	cout<<"x"<<x<<endl;
//	x=30;
//	cout<<"ref"<<ref<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;
//int main(){
//	int x=10;
//	int &y=x;
//	cout<<x<<endl;
//	cout<<y<<endl;
//	cout<<x+y<<endl;
//	cout<<x-y<<endl;
//	cout<<x*y<<endl;
//	cout<<x/y<<endl;
//	cout<<x%y<<endl;
//	return 0;
//}
//#include<iomanip>
//int main(){
//	float x=3.4567;
//	cout<<fixed<<setprecision(3)<<x<<endl;
//}
class student{
	private:
		char name[20];
		int roll;
		public:
			void display(){
				cout<<"name "<<endl;
				cin>>name;
				cout<<"name = "<<name<<endl;
				cout<<"roll= "<<endl;
				cin>>roll;
				cout<<"roll = "<<roll<<endl;
			}
};
int main(){
	student s;
	s.display();
}

