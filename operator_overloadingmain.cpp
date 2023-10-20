#include <iostream>
using namespace std;

class complex {
    float real;
    float imaginary;

public:
    complex() : real(0), imaginary(0) {}
    complex(float r, float i) : real(r), imaginary(i) {}

    complex operator-() {
        return complex(-real, -imaginary);
    }

    complex operator+() {
        return complex(real, imaginary);
    }

    void display() {
        cout << "Real: " << real << " Imaginary: " << imaginary << endl;
    }
};

int main() {
    complex num1(3, 4);
    complex num2 = -num1;
    complex num3 = +num1;

    cout << "Original number: ";
    num1.display();
    cout << "Number after - operator: ";
    num2.display();
    cout << "Number after + operator: ";
    num3.display();

    return 0;
}
#include<iostream>
using namespace std;
class Complex{
	float real;
	float imag;
	public:
		Complex():real(0),imag(0){
		}
		Complex(float r,float i):real(r),imag(i){
			
		}
		Complex operator-(-real,-imag){
			return complex(-real,-imag);
		}
		Complex operator+(real,imag){
			return complex(real,imag);
		}
		void display(){
			cout<<"real"<<real<<"imaginary:"<<imaginary<<endl;
		}
};
int main(){
	complex num1(2,3);
	complex num2=-num1;
	complex num3=+num1;
	cout<<"original number";
	num1.display();
	cout<<"number after - operator";
	num2.display();
	cout<<"number after + operator";
	num3.display();
	return 0;
}
//class Complex {
//private:
//    float real;
//    float imag;
//
//public:
//    Complex() : real(0), imag(0) {}
//
//    Complex(float r, float i) : real(r), imag(i) {}
//
//    // Overloading unary + operator
//    Complex operator+() {
//        return Complex(real, imag);
//    }
//
//    // Overloading unary - operator
//    Complex operator-() {
//        return Complex(-real, -imag);
//    }
//
//    void display() {
//        std::cout << "Real: " << real << " Imaginary: " << imag << std::endl;
//    }
//};
//
//int main() {
//    Complex num1(3, 4);
//    Complex num2 = -num1;  // Using unary - operator
//    Complex num3 = +num1;  // Using unary + operator
//
//    std::cout << "Original Number: ";
//    num1.display();
//    std::cout << "Number after unary - operation: ";
//    num2.display();
//    std::cout << "Number after unary + operation: ";
//    num3.display();
//
//    return 0;
//}

//output
//Original Number: Real: 3 Imaginary: 4
//Number after unary - operation: Real: -3 Imaginary: -4
//Number after unary + operation: Real: 3 Imaginary: 4


//binary overloading
//#include <iostream>
//
//class Complex {
//private:
//    float real;
//    float imag;
//
//public:
//    Complex() : real(0), imag(0) {}
//
//    Complex(float r, float i) : real(r), imag(i) {}
//
//    // Overloading binary + operator
//    Complex operator+(const Complex& other) const {
//        return Complex(real + other.real, imag + other.imag);
//    }
//
//    // Overloading binary - operator
//    Complex operator-(const Complex& other) const {
//        return Complex(real - other.real, imag - other.imag);
//    }
//
//    void display() {
//        std::cout << "Real: " << real << " Imaginary: " << imag << std::endl;
//    }
//};
//
//int main() {
//    Complex num1(3, 4);
//    Complex num2(1, 2);
//
//    Complex sum = num1 + num2;  // Using binary + operator
//    Complex difference = num1 - num2;  // Using binary - operator
//
//    std::cout << "Sum: ";
//    sum.display();
//
//    std::cout << "Difference: ";
//    difference.display();
//
//    return 0;
//}


//output
//Sum: Real: 4 Imaginary: 6
//Difference: Real: 2 Imaginary: 2

