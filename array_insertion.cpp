#include<iostream>
using namespace std;
//insertion at last
int main(){
	int a[100],n,i,val;
	cout<<"size of array: ";
	cin>>n;
	cout<<"element of array : ";
	for(i=0;i<n;i++){
		
		cin>>a[i];
		
	}
	cin>>val;
	a[i]=val;
	cout<<"inserted array is: "<<" ";
	for(i=0;i<n+1;i++){
		cout<<a[i];
	}
}

