#include<iostream>
using namespace std;
union data{
	int intvalue;
	char charvalue;
	double doublevalue;
};
int main(){
	const int size=5;
	data datarray[size];
	datarray[0].intvalue=67;
	datarray[1].charvalue='A';
	datarray[2].doublevalue=3.24;
	datarray[3].intvalue=100;
	datarray[4].charvalue='Z';
	cout<<"array of union "<<endl;
	for(int i=0;i<size;++i){
		cout<<"index"<<i<<".";
		if(i%3==0){
			cout<<"int value "<<datarray[i].intvalue<<endl;
		}
		else if(i%3==1){
			cout<<"char value: "<<datarray[i].charvalue<<endl;
		}
		else{
			cout<<"double value: "<<datarray[i].doublevalue<<endl;
					}
	}
	return 0;
}

