#include<iostream>
using namespace std;  
//    int main ()  
//    {  
//        int myNum = 10;  
//        int *ptr;  
//        ptr = &myNum; // pointer ptr is pointing to the address of myNum  
//        cout<<"Address of myNum:"<<ptr; // Address of myNum will be printed   
//        cout<<"\nValue stored at ptr:"<<*ptr;
//	 // value stoted at the address contained by ptr i.e. 10 will be printed 
//       return 0; 
//}
int main(){
	int *ptr;
	int x=4;
	ptr=&x;
	cout<<ptr<<endl;;
	cout<<*ptr<<endl;
	cout<x+1;
}


//refrence variable
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x = 10;
//	int& ref = x;
//      // ref is a reference to x.
//	ref = 20;
//     // Value of x is now changed to 20
//	cout << "x = " << x << '\n';
//x = 30;
//     // Value of x is now changed to 30
//	cout << "ref = " << ref << '\n';
//
//	return 0;
//      }

//       Output: 
//       x = 20 ref = 30


//modif passed arg in function using pointer
//#include <iostream>
//using namespace std;
//// Function having parameters as
//// references
//void swap(int& first, int& second)
//{
//	int temp = first;
//	first = second;
//	second = temp;
//}
//int main()
//{
//int a = 2, b = 3;
//	// function called
//	swap(a, b);
//	// changes can be seen
//	// printing both variables
//	cout << a << " " << b;
//	return 0;
//       }



//void pointer
//#include <iostream.h>  
//using namespace std;  
//int main()  
//{  
//    int *ptr;  
//    float f=10.3;  
//    ptr = &f; // error  
//    cout << "The value of *ptr is : " <<*ptr<< endl;  
//    return 0;  
//}  //error it wiil give



//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 4;
//	float y = 5.5;
//	//A void pointer
//	void *ptr;
//	ptr = &x;
//	cout<<"Integer variable is = "<<( *(int*) ptr) ;//type casting
//	// void pointer is now float
//	ptr = &y;
//	cout<<"\nFloat variable is= "<< ( *(float*) ptr) ;
//	return 0;
//}

//Output- 
//Integer variable is =  4
//Float variable is  = 5.5


//q4 void pointer in c

//#include <stdio.h> 
// 
//int main()  
//{  
//   void *ptr; // void pointer declaration  
//   int *ptr1;  // integer pointer declaration  
//   int a =90;  // integer variable initialization  
//   ptr=&a; // storing the address of 'a' in ptr  
//   ptr1=ptr; // assigning void pointer to integer pointer type.  
//   printf("The value of *ptr1 : %d",*ptr1);  
//   return 0;  
//}  
//Output-
//The value of *ptr1 : 90

//void pointer in c++
//#include <iostream>  
//using namespace std;  
//int main()  
//{  
//  void *ptr; // void pointer declaration  
//  int *ptr1; // integer pointer declaration  
//  int data=10; // integer variable initialization  
//  ptr=&data;  // storing the address of data variable in void pointer variable  
//  ptr1=(int *)ptr; // assigning void pointer to integer pointer  
//  cout << "The value of *ptr1 is : " <<*ptr1<<endl;  
//  return 0;  
//}  
//Output-
//The value of *ptr1 is : 10


//q ponter arithmetic
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x=10;
//	int *ptr1;
//	int *ptr2;
//	ptr1= &x;
//	ptr2 = ptr1;
//	*ptr2 = *ptr1;
//	cout<<" \nvalue of x is:"<<x;
//	cout<<" \nvalue of ptr1 is :"<<ptr1;
//	cout<<" \nvalue of ptr2 is :"<<ptr2;
//	cout<<" \nvalue at address which ptr1 point to :"<<*ptr1;
//	cout<<" \nvalue at address which ptr2 point to :"<<*ptr2;
//}


//pointer increment
//#include<iostream>
//using namespace std;
//int main(){
//	int x=10;
//	int *ptr;
//	ptr=&x;
//	cout<<x<<endl;
//	cout<<ptr<<endl;
//	*ptr=*ptr+1;
//	cout<<x<<endl;
//	cout<<ptr;
//}


//pointer increment address only
//int main(){
//	int x=10,*ptr;
//	ptr=&x;
//	cout<<ptr<<endl;
//	ptr+=1;
//	cout<<x<<endl;
//	cout<<ptr;
//}

//swap variables using pointer
//#include<iostream>
//using namespace std;
//int main()
//{
//   int x, y, *a, *b, temp;
//   cout<<"Enter the value of x and y\n";
//   cin>>x>>y;
//   cout<<"Before Swapping\nx = "<<x<<" \ny = "<<y;
//   a = &x; 
//   b = &y;
//   temp = *b;
//   *b = *a;
//   *a = temp;
//   cout<<"\nAfter Swapping\nx ="<<x<<" \ny = "<<y;
//   }


//wild pointer
//#include<iostream>
//using namespace std;
//int main() 
//{
//   int  *ptr; /* Ptr is a wild pointer in C */
//   	/* Random unknown memory location is being allocated. This should never be done. */
//	*ptr=12;
//	cout<<"value of ptr"<<ptr;
//   }
////Output 
//It display nothing or give some garbage value 

//avoid wild pointer
//#include<iostream>
//using namespace std;
//int main() 
//{
//   int  *ptr; /* Ptr is a wild pointer in C */
//   	/* Random unknown memory location is being allocated. This should never be done. */
//	int a=23;
//	ptr=&a;//ptr now no longer wild pointer
//	*ptr=12;//modified the value of a
//	cout<<"value of ptr"<<*ptr;
//   
//} OUTPUT: value of ptr12


//null pointer
//#include <iostream>
//using namespace std;
//int main()
// {
//   int x;
//   int *p;
//   p= NULL; //initialize the pointer as null.
//   cout<<"The value of pointer is "<<p;
//}

//pointer in class for sum natural number
//#include<iostream> 
// using namespace std;
//  class Array
//{
//int *arr;  int size;  public:
//void get_data(int n)
//{
//size=n;
//arr=new int[size];
//cout<<"\nEnter elements:";
//for(int i=0;i<size;i++)
//{
//cin>>*(arr+i);
//}
//}
//void add()
//{
//int sum=0;
//for(int i=0;i<size;i++)
//{
//sum+=*(arr+i);
//}
//cout<<"\n Sum of elements="<<sum;
//}
//};
//int main()
//{
//Array a;
//int n;
//cout<<"\n Enter the number of elements:"<<endl; 
// cin>>n;
//a.get_data(n); 
// a.add();
//   return 0;}


//poiner to objects
//#include<iostream> 
// using namespace std;  
// class A
//{
//int x;
//public:
//void getdata()
//{
//cout<<"\n Enter value for x:"<<endl;  cin>>x;
//}
//void showdata()
//{
//cout<<"\n Entered value is:"<<x<<endl;
//}
//};
//int main()
//{
//A obj1;  A *ptr;
//ptr=&obj1;//Pointer to object
//ptr->getdata();  ptr->showdata();  (*ptr).getdata();
//(*ptr).showdata();
//}



//pointer to members of class
//#include<iostream>  
//using namespace std;
//  class M
//{
//int x;  int y;  public:
//void set_xy(int a, int b)
//{	x=a;	y=b;	}  friend int sum(M m);
//};
//int sum(M m)
//{
//// declare pointer to data member  int M :: * px =&M :: x;
//int M :: * py =&M :: y;
//M *pm=&m;
//int S = m.*px + pm->*py; 
// return S;
//}
//int main()
//{
//M n;
////declare pointer to member function  void (M :: *pf)(int,int) = &M :: set_xy;
//// call member function  (n.*pf)(10,20);
//cout<<"SUM="<<sum(n) ;
//M *op = &n;
//(op->*pf)(30,40);
//cout<<"SUM="<<sum(n);
//return 0;}


//this pointer

//#include <iostream>  
//using namespace std; 
// class X
//{
//private:
//int a;  public:
//void Set_a(int a)
//{
//// The 'this' pointer is used to retrieve 'xobj.a'
//// hidden by the automatic variable 'a'  this->a = a;
//}
//void Print_a()
//{
//cout << "a = " << a << endl;
//}
//};
//int main()
//{
//X xobj;  int a = 5;
//xobj.Set_a(a);  xobj.Print_a();
//}


