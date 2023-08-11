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
