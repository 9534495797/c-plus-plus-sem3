//#include<iostream>
////single inheritance
//class b{
//	int a;//private not
//	public:
//		int b;
//		void get_ab();
//		int get_a();
//		void show_a();
//};
//class d:public b{
//	int c;
//	public:
//		void mul(void);
//		void display(void);
//};
//void b::get_ab(void){
//	a=5;b=10;
//}
//int b::get_a(){
//	return a;
//	
//}
//void b::show_a(){
//	//cout<<"a="<<"\n";
//	return a;
//}
//void d::mul(){
//	c=b*get_a();
//}
//void d::display(){
//	cout<<"a="<<get_a()<<"\n";
//	cout<<"b= "<<b<<"\n";
//	cout<<"c= "<<c<<"\n";
//	
//}
//int main(){
//	d D;
//	D.get_ab();
//	D.mul();
//	D.show_a();
//	D.display();
//	D.b=20;
//	D.mul();
//	D.display();
//	return 0;
//}


#include<iostream>

class b {
    int a;
public:
    int b;
    void get_ab();
    int get_a();
    int show_a();
};

class d : public b {
    int c;
public:
    void mul();
    void display();
};

void b::get_ab() {
    a = 5;
    b = 10;
}

int b::get_a() {
    return a;
}

int b::show_a() {
    return a;
}

void d::mul() {
    c = b * get_a();
}

void d::display() {
    std::cout << "a=" << get_a() << "\n";
    std::cout << "b= " << b << "\n";
    std::cout << "c= " << c << "\n";
}

int main() {
    d D;
    D.get_ab();
    D.mul();
    D.show_a();  // This doesn't do anything, so you might want to remove this line.
    D.display();
    D.b = 20;
    D.mul();
    D.display();
    return 0;
}

