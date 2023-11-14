#include<iostream>
using namespace std;
int main(){
int arr[100],n,i,value;
cin>>n;
for(int i=0;i<n;i++){
	cin>>arr[i];
}
cin>>value;
arr[i]=value;
cout<<"final array : ";
for(int i=0;i<n+1;i++){
	cout<<arr[i]<<" ";
}
}



//int main(){
//	int a[100],n,i,val;
//	cout<<"size of array: ";
//	cin>>n;
//	cout<<"element of array : ";
//	for(i=0;i<n;i++){
//		
//		cin>>a[i];
//		
//	}
//	cin>>val;
//	a[i]=val;
//	cout<<"inserted array is: "<<" ";
//	for(i=0;i<n+1;i++){
//		cout<<a[i]<<" ";
//	}
//}
