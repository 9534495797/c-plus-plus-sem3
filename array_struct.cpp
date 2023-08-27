#include<iostream>
using namespace std;
struct emp{
	string name;
	
};
int main(){
	emp e[5];
	int i;
	for(i=0;i<5;i++){
		cout<<"Enter the names: \n"<<i+1<<" ";
		cin>>e[i].name;
		
	}
	cout<<"names are:\n";
	for(i=0;i<5;i++){
		cout<<e[i].name<<endl;
	}
	cout<<endl;
	return 0;
}
