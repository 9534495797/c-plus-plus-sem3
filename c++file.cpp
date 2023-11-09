//program of traversing in array
#include<iostream>
using namespace std;
int  main()
{
	int a[50],i,n;
	cout<<"Enter the array size:\n";
	cin>>n;
	cout<<"Enter the element:\n";
	for(i=0;i<n;i++){
		cin>>a[i];
		
	}
	cout<<"Traversing the elements are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
