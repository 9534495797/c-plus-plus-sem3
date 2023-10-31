#include<iostream>
using namespace std;
////compile time polymorphism (early binding)
//class BC{
//	public:
//		void show(){
//			cout<<"\n show() of base class"<<endl;
//		}
//};
//class DC:public BC{
//	public:
//		void show(){
//			cout<<"\n show() of derived class"<<endl;
//		}
//};
//int main(){
//	BC *bptr;
//	BC base;
//	bptr=&base;
//	cout<<"\n --------early binding----------";
//	cout<<"bptr points to base class objects\n";
//	bptr->show();
//	//derived class
//	DC derived;
//	bptr=&derived;
//	cout<<"\n bptr now points to drived class object\n";
//	bptr->show();
//	return 0;
//}



//virtual function->>it is a member functio which is declared in a base class and is redefined by a derived class
//it works on run time
class BC{
	public:
	virtual	void show(){
			cout<<"\n show() of base class"<<endl;
		}
};
class DC:public BC{
	public:
		void show(){
			cout<<"\n show() of derived class"<<endl;
		}
};
int main(){
	BC *bptr;
	BC base;
	bptr=&base;
	cout<<"\n --------runtime polymmorphism----------";
	cout<<"bptr points to base class objects\n";
	bptr->show();
	//derived class
	DC derived;
	bptr=&derived;
	cout<<"\n bptr now points to drived class object\n";
	bptr->show();
	return 0;
}
