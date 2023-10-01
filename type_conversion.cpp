//Basic type to other basic type
//int x;
//float y=10.00;
//x=y;

#include<iostream>
using namespace std;
//Basic type to Class type
//class time	//	using construtors
//{
//int hrs;
//public:
//time(int t)
//{
//	hrs=t/60;
//}
//};
//void main()
//{
//	time t1(85);			//	output : 1hrs
//}


//class to basic
class Student
{
private:
        int rollno;
        float fees;
public:
       Student (int a, float m)
       {
               rollno = a;
               fees = m;
       }
       operator int()
       {
                return(rollno);
       }
       operator float()
       {
                return(fees);
       }
  };
int main()
{   
    int j;
    float f;
    Student st(5,4200.50);

    j = st;  //operator int() is executed

    f = st;  //operator float() is executed

    cout<<"\nvalue of j: "<<j<<"\n";
    cout<<"\nvalue of f: "<<f<<"\n";

//getch();
    
}

