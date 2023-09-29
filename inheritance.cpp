#include<iostream>
using namespace std;
#include<string.h>
//public mode

//class student{
//	private:
//		int roll_no;
//		protected:
//			char section[10];
//			public:
//				void get_rno(){
//					cout<<"enter roll no: ";
//					cin>>roll_no;
//				}
//				void show_rno(){
//				cout<<"roll no: "<<roll_no;}
//				
//				
//	};
//	class result:public student{
//		private:
//			float fees;
//			public:
//				void get_data(){
//					get_rno();
//					cout<<"enter fee: ";
//					cin>>fees;
//					cout<<"enter section: ";
//					cin>>section;
//					
//				}
//				void display(){
//					show_rno();
//					cout<<"fees: "<<fees<<endl;
//					cout<<"section: "<<section;
//				}
//	};
//	int main(){
//		result obj1;
//		obj1.get_data();
//		obj1.display();
//		obj1.show_rno();
//		//strcpy(obj1.section,"k22gb");//can not access in public because 
//	}




//q2
//private mode

//class student{
//	private:
//		int roll_no;
//		protected:
//			char section[10];
//			public:
//				void get_rno(){
//					cout<<"enter roll no: ";
//					cin>>roll_no;
//				}
//				void show_rno(){
//				cout<<"roll no: "<<roll_no;}
//				
//				
//	};
//		class result:private student{
//		private:
//			float fees;
//			public:
//				void get_data(){
//					get_rno();
//					cout<<"enter fee: ";
//					cin>>fees;
//					cout<<"enter section: ";
//					cin>>section;
//					
//				}
//				void display(){
//					show_rno();
//					cout<<"fees: "<<fees<<endl;
//					cout<<"section: "<<section;
//				}
//	};
//	int main(){
//		result obj1;
//		obj1.get_data();
//		obj1.display();
//		
////		obj1.get_rno();//not work private data
////		obj1.show_rno();//same private data
////		obj1.roll_no=78;//samr private data
//	}


//q3 protected mode
class student{
	private:
		int roll_no;
		protected:
			char section[10];
			public:
				void get_rno(){
					cout<<"enter roll no: ";
					cin>>roll_no;
				}
				void show_rno(){
				cout<<"roll no: "<<roll_no;}
				
				
	};
		class result:protected student{
		private:
			float fees;
			public:
				void get_data(){
					get_rno();
					cout<<"enter fee: ";
					cin>>fees;
					cout<<"enter section: ";
					cin>>section;
					
				}
				void display(){
					show_rno();
					cout<<"fees: "<<fees<<endl;
					cout<<"section: "<<section;
				}
	};
	int main(){
		result obj1;
		obj1.get_data();
		obj1.display();
		
//		obj1.get_rno();//not work private data
//		obj1.show_rno();//same private data
//		obj1.roll_no=78;//samr private data
	}
	
