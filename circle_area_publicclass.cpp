#include<iostream>
using namespace std;
class circle{
	public:
		double radius;
		double comput_area(){
			return 3.14*radius*radius;
		}
};
int main(){
	circle obj;
	obj.radius=5.5;
	cout<<"radius ius "<<obj.radius<<endl;
	cout<<"area is "<<obj.comput_area();
}
