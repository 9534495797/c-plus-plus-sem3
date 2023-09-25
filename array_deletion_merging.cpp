//begin
#include<iostream>
using namespace  std;
//int main(){
//	int a[100],i,n;
//	cout<<"size of array is: ";
//	cin>>n;
//	cout<<"element of array is: ";
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"deleted array : ";
//	for(i=1;i<n;i++){
//		cout<<a[i];
//	}
//	
//	
//}
//int main(){
//	int a[100],n,i;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"array after deletion of 1st element is: ";
//	for(i=1;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}

//last
//int main(){
//	int a[100],i,n;
//	cout<<"size of array is: ";
//	cin>>n;
//	cout<<"element of array is: ";
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"deleted array : ";
//	for(i=0;i<n-1;i++){
//		cout<<a[i];
//	}
//	
//	
//}

//int main(){
//	int a[100],n,i;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"array after deletion of last element is: ";
//	for(i=0;i<n-1;i++){
//		cout<<a[i]<<" ";
//	}
//}

//specific
//int main(){
//	int a[100],i,n,pos;
//	cout<<"size of array is: ";
//	cin>>n;
//	cout<<"element of array is: ";
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"pos to be deleted: ";
//	cin>>pos;
//	for(i=pos-1;i<=n-1;i++){
//	a[i]=a[i+1];	
//	}
//	n--;
//	cout<<"deleted array : ";
//	for(i=0;i<n;i++){
//		cout<<a[i];
//	}
//	
//	
//}


//int main(){
//	int a[100],n,i,pos;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"item to be deletd ";
//	cin>>pos;
//	for(i=pos-1;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//	cout<<"array after deletion is: ";
//	for(i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}






//merging
//int main(){
//	int a[100],b[100],n1,n2,i;
//	cout<<"size of array 1 is: ";
//	cin>>n1;
//	cout<<"size of array 2 is: ";
//	cin>>n2;
//	cout<<"element of array 1 is: ";
//	for(i=0;i<n1;i++){
//		cin>>a[i];
//	}
//	cout<<"element of array 2 is: ";
//	for(i=0;i<n2;i++){
//		cin>>b[i];
//	}
//	for(i=0;i<n2;i++){
//		a[n1+i]=b[i];
//	}
//	cout<<"merged array is: ";
//	for(i=0;i<n1+n2;i++){
//		cout<<a[i];
//	}
//	
//}

int main(){
	int a[100],b[100],i,n1,n2;
	cin>>n1;
	for(i=0;i<n1;i++){
		cin>>a[i];
	}
	cin>>n2;
	for(i=0;i<n2;i++){
		cin>>b[i];
	}
	for(i=0;i<n2;i++){
		a[n1+i]=b[i];
	}
	cout<<"merged array is: ";
	for(i=0;i<n1+n2;i++){
		cout<<a[i]<<" ";
	}
}
