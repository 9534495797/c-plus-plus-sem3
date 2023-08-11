//#include<iostream>
//using namespace std;
//class abc{
//	private:
//		int rollno;
//		char name[20];
//		public:
//			void getdata(){
//				cout<<"name= ";
//				cin>>name;
//				cout<<"rollno = ";
//				cin>>rollno;
//			}
//			void display(){
//				cout<<"name = "<<name;
//				cout<<"rollno= "<<rollno;
//			}
//
//};  define inside the class



//outside the class
//class abc{
//	private:
//		int roll;
//		char name[20];
//		public:
//			void getdata();
//			void display();
//};
//void abc::getdata(){
//	cout<<"name= ";
//	cin>>name;
//	cout<<"roll=";
//	cin>>roll;
//}
//void abc::display(){
//	cout<<"name= "<<name;
//	cout<<"roll = "<<roll;
//}

//these both will give error b/c incomplete

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
