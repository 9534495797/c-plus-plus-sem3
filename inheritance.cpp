#include<iostream>
using namespace std;
//#include<string.h>
////public mode
//
////class student{
////	private:
////		int roll_no;
////		protected:
////			char section[10];
////			public:
////				void get_rno(){
////					cout<<"enter roll no: ";
////					cin>>roll_no;
////				}
////				void show_rno(){
////				cout<<"roll no: "<<roll_no;}
////				
////				
////	};
////	class result:public student{
////		private:
////			float fees;
////			public:
////				void get_data(){
////					get_rno();
////					cout<<"enter fee: ";
////					cin>>fees;
////					cout<<"enter section: ";
////					cin>>section;
////					
////				}
////				void display(){
////					show_rno();
////					cout<<"fees: "<<fees<<endl;
////					cout<<"section: "<<section;
////				}
////	};
////	int main(){
////		result obj1;
////		obj1.get_data();
////		obj1.display();
////		obj1.show_rno();
////		//strcpy(obj1.section,"k22gb");//can not access in public because 
////	}
//
//
//
//
////q2
////private mode
//
////class student{
////	private:
////		int roll_no;
////		protected:
////			char section[10];
////			public:
////				void get_rno(){
////					cout<<"enter roll no: ";
////					cin>>roll_no;
////				}
////				void show_rno(){
////				cout<<"roll no: "<<roll_no;}
////				
////				
////	};
////		class result:private student{
////		private:
////			float fees;
////			public:
////				void get_data(){
////					get_rno();
////					cout<<"enter fee: ";
////					cin>>fees;
////					cout<<"enter section: ";
////					cin>>section;
////					
////				}
////				void display(){
////					show_rno();
////					cout<<"fees: "<<fees<<endl;
////					cout<<"section: "<<section;
////				}
////	};
////	int main(){
////		result obj1;
////		obj1.get_data();
////		obj1.display();
////		
//////		obj1.get_rno();//not work private data
//////		obj1.show_rno();//same private data
//////		obj1.roll_no=78;//samr private data
////	}
//
//
////q3 protected mode
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
//		class result:protected student{
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



//single inheritance

#include<iostream>
using namespace std;
//class B{
//	int a;
//	public:
//		int b;
//		void get_ab();
//		int get_a();
//		void show_a();
//		
//};
//class D:public B{
//	int c;
//	public:
//		void mul(void);
//		void display(void);
//};
//void B::get_ab(void){
//	a=5,b=10;
//}
//int B::get_a(){
//	return a;
//}
//void B::show_a(){
//	cout<<"a="<<a<<"\n";
//	
//}
//void D::mul(){
//	c=b*get_a();
//}
//void D::display(){
//	cout<<"a="<<get_a()<<"\n";
//	cout<<"b="<<b<<endl;;
//	cout<<"c= "<<c<<endl;
//	
//}
//int main(){
//	D d;
//	d.get_ab();
//	d.mul();
//	d.show_a();
//	d.display();
//	d.b=20;
//	d.mul();
//	d.display();
//	return 0;
//}


//q2
//class B{
//	int a;
//	public:
//		int b;
//		void get_ab();
//		int get_a();
//		void show_a();
//		
//};
//class D:private B{
//	int c;
//	public:
//		void mul(void);
//		void display(void);
//};
//void B::get_ab(void){
//	a=5,b=10;
//}
//int B::get_a(){
//	return a;
//}
//void B::show_a(){
//	cout<<"a="<<a<<"\n";
//	
//}
//void D::mul(){
//	get_ab();
//	c=b*get_a();//a can not be used directly
//}
//void D::display(){
//	show_a();//output a
//	cout<<"b="<<b<<endl;;
//	cout<<"c= "<<c<<endl;
//	
//}
//int main(){
//	D d;
//	d.get_ab();//will not work
//	d.mul();
//	d.show_a();//will not work
//	d.display();
//	d.b=20;//will not work
//	d.mul();
//	d.display();
//	return 0;
//}


//multiple inheritance

//class M{
//	protected:
//		int m;
//		public:
//			void get_m(int);
//		
//};
//class N{
//	protected:
//		int n;
//		public:
//			void get_n(int);
//			
//};
//
//class P: public M,public N{
//	public:
//		void display(void);
//			
//		
//};
//void M::get_m(int x){
//	m=x;
//}
//void N::get_n(int y){
//	n=y;
//}
//void P::display(void){
//	cout<<"m="<<m<<endl;
//	cout<<"n="<<n<<endl;
//	cout<<"m*n="<<m*n<<endl;
//}
//int main(){
//	P p;
//	p.get_m(10);
//	p.get_n(20);
//	p.display();//m*n
//	return 0;
//	
//}


//multilevel inheritance

//class student{
//	protected:
//		int roll;
//		public:
//			void get_no(int);
//			void put_no(void);
//};
//void student::get_no(int a){
//	roll=a;
//}
//void student::put_no(){
//	cout<<"roll is ="<<roll<<endl;
//	
//}
//class test:public student{//1st level derevation
//	protected:
//		float sub1,sub2;
//		public:
//			void get_marks(float,float);
//			void put_marks(void);
//};
//void test::get_marks(float x,float y){
//	sub1=x;
//	sub2=y;
//}
//void test::put_marks(){
//	cout<<"marks in sub1="<<sub1<<endl;
//	cout<<"marks in sub2="<<sub2<<endl;
//	
//}
//class result:public test{//2nd level derivation
//	float total;
//	public:
//		void display(void);
//};
//void result::display(void){
//total=sub1+sub2;
//put_no();
//put_marks();
//cout<<"total="<<total;
//}
//int main(){
//	result student1;
//	student1.get_no(102);
//	student1.get_marks(80.0,98.5);
//	student1.display();
//	return 0;
//}  

//hierarichal inheritance
//#include<iostream>
//using namespace std;
//class M{
//	protected:
//		int x;
//		public:
//			void set(int a){
//				x=a;
//			}
//};
//class N:public M{
//	public:
//	void display(){
//		cout<<x << "access in derived class n."<<endl;
//	}
//};
//class O:public M{
//	public:
//		void display(){
//			cout<<x << "accessed in derived class o.";
//		}
//};
//int main(){
//	N obj1;
//	O obj2;
//	obj1.set(12);
//	obj1.display();
//	obj2.set(19);
//	obj2.display();
//	return 0;
//	
//}

//hybrid inheritance
#include<iostream>
using namespace std;
class student{
	int roll;
	public:
		void get_number(int a){
			roll=a;
			
		}
		void put_number(){
			cout<<"roll is "<<roll<<endl;
		}
};
class test:public student{
	protected:
		float part1,part2;
		public:
			void get_marks(float x,float y){
				part1=x;
				part2=y;
			}
			void put_marks(){
				cout<<"part 1= "<<part1<<"part2 ="<<part2<<endl;
			}
		
};
class sports{
	protected:
		float score;
		public:
			void get_score(float s){
				score=s;
			}
			void put_score(){
				cout<<"sports= "<<score<<endl;
			}
};
class result:public test,public sports{
	float total;
	public:
		void display();
	

};
	void result::display(){
			total=part1+part2+score;
			put_number();
			put_marks();
			put_score();
			cout<<"total score: "<<total<<endl;
		}
int main(){
	result student_1;
	student_1.get_number(1234);
	student_1.get_marks(27.5,33.2);
	student_1.get_score(6.6);
	student_1.display();
}
