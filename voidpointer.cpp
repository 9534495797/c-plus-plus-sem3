#include<iostream>
using namespace std;
int main(){
	int x=4;
	float y=5.5;
	void *ptr;
	ptr=&x;
	cout<<"int var is"<<(*(int*)ptr)<<endl;
	ptr=&y;
	cout<<"float var is "<<(*(float*)ptr);
}
