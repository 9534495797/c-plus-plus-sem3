//#include<iostream>
//using namespace std;
//class item{
//	int number;//private bydefault
//	float cost;//priuvate
//	public:
//		void getdata(int a, float b);
//		void putdata(void){
//			cout<<"num"<<number<<endl;
//			cout<<"cost"<<cost<<endl;
//		}
//		
//		
//};
//void item::getdata(int a, float b){
//	number=a;
//	cost=b;
//}
//int main(){
//	item x;
//	cout<<"object x"<<endl;
//	x.getdata(100,299.5);
//	x.putdata();
//	item y;
//	cout<<"object y"<<endl;
//	y.getdata(200,175.5);
//	y.putdata()
//;
//return 0;
//}

#include<iostream>
using namespace std;
class detail{
	char name[30];
	int roll;
	public:
		void getdata(char a,int b);
		void display(){
			cout<<"name"<<name<<endl;
			cout<<"age"<<roll;
		}
};
void detail::getdata(char a , int b){
	name[20]=a;
	roll=b;
}
int main(){
	detail x;
	x.getdata('ankit',78);
	x.display();
}
