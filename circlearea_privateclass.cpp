#include<iostream>
using namespace std;
class circle{
	private:
		double r;
		public:
			void compute_area(double r){
			double	double_area=3.14*r*r;
				cout<<"radius is "<<r<<endl;
				cout<<"area is "<<double_area;
			}
};
int main(){
	circle obj;
	obj.compute_area(1.5);
	
}



