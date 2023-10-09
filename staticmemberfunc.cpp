#include<iostream>
using namespace std;
class box{
	private:
		static int length;
		static int breadth;
		static int height;
		public:
			static void print(){
				cout<<"value of length is:"<<length<<endl;
				cout<<"value of breadth is:"<<breadth<<endl;
				cout<<"value of height is:"<<height<<endl;
				
			}
};
int box::length=10;
int box::=10;
int box::length=10;

