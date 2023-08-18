#include<iostream>
using namespace std;
class item{
	int number;
	float cost;
	public:
		void getdate(int a, float b);
		void putdata(){
			cout<<"number = "<<number<<endl;
			cout<<"cost= "<<cost<<endl;
		}
};
void item::getdate(int a, float b){
	number=a;
	cost=b;
	
}
int main(){
	item y;
	y.getdate(12,34.5;
	y.putdata();
	item z;
	z.getdate(34,56.4);
	z.putdata();
		}
