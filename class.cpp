#include<iostream>                       
using namespace std;
class item{
	int number;//private bydefault
	float cost;//priuvate  b/c inside the class 
	public:
		void getdata(int a, float b);//memeber function b/c inside the class
		void putdata(void){//same
			cout<<"num "<<number<<endl;
			cout<<"cost "<<cost<<endl;
		}
		
		
};
void item::getdata(int a, float b){
	number=a;
	cost=b;
}
int main(){//this is main functio under which object is declared
	item x;
	cout<<"object x"<<endl;
	x.getdata(100,299.5);
	x.putdata();
	item y;
	cout<<"object y"<<endl;
	y.getdata(200,175.5);
	y.putdata();
		item z;
	cout<<"object z"<<endl;
	z.getdata(200,175.5);
	z.putdata();

return 0;
}

