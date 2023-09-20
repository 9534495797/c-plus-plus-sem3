#include<iostream>
using namespace std;
//int main(){
//	//int n;
//	int arr[5]={1,2,3,4,5};
//	//cin>>n;
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<endl;
//	}
//}
//traverse
//int main(){
//	int a[5],i;
//	for(i=0;i<5;i++){
//		cin>>a[i];
//	}
//	
//	for(i=0;i<5;i++){
//		cout<<a[i]<<endl;
//	}
//	return 0;
//}


int main(){
	int n[10];
	for(int i=0;i<10;i++){
		n[i]=0;
	}
	cout<<"elememt"<<"\tvalue"<<endl;
	for(int i=0;i<10;i++){
		cout<<i<<"\t"<<n[i];
	}
}


//insert operationm
//int main(){
//	int a[100],n,i,k,item;
//	cout<<"how many number to store in array:";
//	cin>>n;
//	cout<<"enter the number:";
//	for(i=0;i<n-1;i++)
//		cin>>a[i];
//		cout<<"enter the number and its position";
//		cin>>item>>k;
//		k=k-1;
//	
//		for(i=n-1;i>k;i--){
//			a[i+1]=a[i];
//		}
//		a[k]=item;
//		cout<<"contents of the array:\n";
//		for(i=0;i<n;i++){
//			cout<<a[i]<<endl;
//		}
//		return 0;
//	}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a[100],i,n,k, item;
//    cout<<"How Many No To Store In Array=";
//    cin>>a[i];
//    cout<<"Enter the number:";
//    for(i=0;i<=n;i++)
//    cin>>a[i];
//    cout<<"Enter the nl and its position:";
//    cin>>item>>k;
//    k=k-1;
//    for(i=n-1;i>=k;i--)
//    {
//        a[i+1]=a[i];
//    }
//    a[k]=item;
//    cout<<"Contents of the array :\n";
//    for(i=0;i<=n;i++)
//    {
//        cout<<a[i];
//    }
//    return 0;
//}

//searching

//#include<iostream>
//using namespace std;
////Program to find a number in an array.
//int main()
//{
//    int a[100],n,i,x;
//    cout<<"\nEnter The Limit: ";
//    cin>>n;
//    for(i=0;i<n;i++)
//    {
//        cout<<"\nEnter The Value : ";
//        cin>>a[i];
//    }
//    cout<<"\nEnter The Value to Search :";
//    cin>>x;
// 
//    for(i=0;i<n;i++)//1 2 3 4 5
//    {
//        if(a[i]==x)
//        {
//            cout<<"Value Found @"<<i;
//            return 0;
//        }
//    }
//    cout<<"Value Not Found";
//    return 0;
//}
// 

