//#include<stdio.h>
//int main(){
//	int num,rev=0,rem;
//	scanf("%d",&num);
//	while(num!=0){
//		rem=num%10;
//		rev=rev*10+rem;
//		num/=10;
//	}
//	printf("%d",rev);
//	
//}

#include<iostream>
using namespace std;
//int main(){
//	int num,reverse=0,rem;
//	cin>>num;
//	while(num!=0){
//		rem=num%10;
//		reverse=reverse*10+rem;
//		num/=10;
//	}
//	cout<<reverse;
//}


//reverse using class
//class reverse{
//	int num,rev=0,rem;
//	public:
//		void getdata(){
//			cin>>num;
//		}
//		void showdata(){
//			while(num!=0){
//				rem=num%10;
//				rev=rev*10+rem;
//				num/=10;
//			}
//			cout<<rev;
//		}
//};
//int main(){
//	reverse a;
//	a.getdata();
//	a.showdata();
//}
int main(){
	int num,rev=0,rem;
	cout<<"enter num: ";
	cin>>num;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	cout<<rev;
}
