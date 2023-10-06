#include<iostream>
using namespace   std;
//class rectangle{
//	private:
//	int length,breadth;
//	public:
//		rectangle(){
//			length=5,breadth=6;
//		}
//		int area(int a,int b){
//			int a=(length*breadth);
//			cout<<"area is: "<<a;
//		}
//};
//void main(){
//	rectangle r1;
//	r1.area();
//	getch();
//}


//parametrized constructor
//class Rectangle
//{
//private:
//int length,breadth;
//public:
//Rectangle(int a,int b)
//{
//length=a,breadth=b;
//}
//int area()
//{
//int a=(length*breadth);
//cout<<"area is"<<a;
//}
//};
//void main()
//{
//Rectangle r1(5,6);
//r1.area();
//}


//multiple constructor in a class
//class rectangle {
//private:
//float height;
//float width;
//int xpos;
//int ypos;
//public:
//rectangle() { xpos = 0;
//ypos = 0; }
//rectangle(float, float);
//// constructor
//void draw(); // draw member function
//void posn(int, int); // position member function
//void move(int, int); // move member function
//};
//rectangle::rectangle(float h, float w)
//{
//height = h;
//width = w;
//}

//costructor with default ARRG


//class rectangle
//{
//int
//l,b
//public:
//rectangle (
//int x=12,int y=34)
//{
//l=x;
//b=y;
//}
//int
//area()
//{
//return(l*b);
//}
//};
//int
//main()
//{
//rectangle r;
//cout
//<<"Area is r.area
//rectangle r1(45,67);
//cout
//nArea is "<<r1.area();
//}


//COPY CONSTRUCTOR
//class counter
//{
//int
//c;
//public:
//counter(
//int a) //single parameter constructor
//{
//c=a;
//}
//counter(counter &
//ob ) //copy constructor
//{
//cout
//<<"copy constructor INVOKED";
//c=ob.c;
//}
//}
//Void show()
//{
//cout
//<<c;
//};
//int
//main()
//{
//counter C1(10);
//counter C2(C1);// call copy constructor
//C1.show();
//C2.show();
//}


//destructor
//#include<iostream>
//#include<conio.h>
//using namespace std;
//class counter
//{
//int id;
//public:
//counter(int i)
//{
//id=i;
//cout<<"contructor of object with id="<<id;
//}
//~counter()
//{
//cout<<"destructor with id="<<id;
//}
//};
//void main()
//{
//counter c1(1);
//counter c2(2);
//counter c3(3);
//cout<<"\n end of main";
//}     //Output
//constructor of object with id=1
//constructor of object with id=2
//constructor of object with id=3
//End of main
//destructor with id=3
//destructor with id=2
//destructor with id=1


//initilizer list
//Example of initializer List

//#include<iostream>
//using namespace std;
//class rectangle
//{
//int l,b;
//public:
//rectangle (int x,int y):l(x),b(y){}
//int area()
//{
//return(l*b);
//}
//};
//int main()
//{
//rectangle r(12,34);
//cout<<"Area is"<< r.area();
//}
