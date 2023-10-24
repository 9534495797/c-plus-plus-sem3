//#include<iostream>
//using namespace std;
//class A{
//	int x;
//	public:
//		
//		A(int a){
//			x=a;
//			cout<<"calling base class parametrized"
//			<<" "<<x<<endl;
//		}
//		~A(){
//			cout<<"calling base class destructor"<<endl;
//		}
//};
//class B:public A{
//	int l;
//	public:
//	
//		B(int p):A(p){
//			l=p;
//			cout<<"calling base class parametrized"<<" "<<l<<endl;
//			
//		}
//		~B(){
//			cout<<"calling derived class destructor"<<endl;
//		}
//};
//int main(){
//	B obj2(1);
//	return 0;
//}




//#include <iostream>
//
//// Base class A
//class A {
//public:
//    int sum(int a, int b) {
//        return a + b;
//    }
//
//    int multiply(int a, int b) {
//        return a * b;
//    }
//};
//
//
//class B : public A {};
//
//
//class C : public A {};
//
//
//class D : public B, public C {};
//
//
//class E : private D {};
//
//
//class F : private D {};
//
//int main() {
//    // Example usage
//    D objD;
//    std::cout << "Sum in class D: " << objD.sum(2, 3) << std::endl;
//    std::cout << "Multiply in class D: " << objD.multiply(2, 3) << std::endl;
//
//    // Uncommenting the following lines will result in a compilation error
//    // E objE;
//    // F objF;
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int arr[10]={1,2,3,4,5,6,8,7,9,0};
//	for(int i=0;i<10;i++){
//		cout<<arr[i]<<" ";
//	}
//}


//delete an element from array from particular position
//2d ARRAY AND DELETE FROM PARTICULAR POS
