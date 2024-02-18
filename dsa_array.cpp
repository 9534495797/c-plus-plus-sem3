#include<iostream>
using namespace std;
int max(int arr[],int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		return max;
	}
}
int main(){
	int arr[100],n,i;
	for(i=0;i<100;i++){
		cin>>arr[i];
	}
	cout<<max(arr,n);
}
