#include<iostream>
using namespace std;
inline int max(int x,int y){
	return(x>y)?x:y;
	
}
int main(){
	cout<<"max(20,10):"<<max(20,10)<<endl;
		cout<<"max(10,20):"<<max(10,20)<<endl;
			cout<<"max(10,10):"<<max(10,10)<<endl;
			return 0;
}
