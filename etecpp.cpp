#include<iostream>
using namespace std;
//class fact{
//	int num;
//	public:
//		
//		
//		void getdata(){
//			int num;
//			cout<<"enter num: ";
//			cin>>num;
//		}
//		int factorial(int num){
//			if(num==0||num==1){
//				return 1;
//			}else{
//				return num*factorial(num-1);
//			}
//			
//		}
//		void display(){
//			int num;
//			cout<<factorial(num);
//			
//		}
//};
//int main(){
//	fact a;
//	a.getdata();
//	a.display();
//}






//class reverse{
//	int num;
//	public:
//		void getdata(){
//			cin>>num;
//		}
//		void display(){
//			int originalnumm= num;
//			int rem,rev=0;
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
//	a.display();
//}


#include<iostream>
using namespace std;
#include<string>
#include <iostream>
#include <string>
//using namespace std;
//bool ispalindrome(const  string& s){
//	int i=0;
//	int j=s.length()-1;
//	while(i<j){
//		if(s[i]!=s[j]){
//			return false;
//			
//		}
//		i++;
//		j--;
//	}
//	return true;
//}
//int main(){
//	string a;
//	cin>>a;
//	if(ispalindrome(a)){
//		cout<<"yes";
//	}else{
//		cout<<"no";
//	}
//}

//void swap(int &a,int &b){
//int temp=a;
//a=b;
//b=temp;
//}
//int main(){
//	int x;
//	int y;
//	cin>>x>>y;
//	cout<<"x= "<<x <<"and y= "<< y;
//	swap(x,y);
//	cout<<"x= "<<x <<"and y= "<< y;
//}


//int main(){
//	int arr[100],n,i,pos;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cin>>pos;
//	for(i=pos-1;i<n-1;i++){
//		arr[i]=arr[i+1];
//		
//	}
//	n--;
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s="amkit";
//	string s1="ankit";
//	cout<<s.size()<<endl;;
//	cout<<s.length()<<endl;
//	cout<<s.compare(s1)<<endl;;
//
//	s.insert(2,"n");
//	cout<<s;
//	
//}


//int main(){
//	int x=100;
//	int *ptr=&x;
//	int **ptr1=&ptr;
//	cout<<x<<endl;
//	cout<<ptr<<endl;
//	cout<<&ptr<<endl;
//	cout<<*ptr<<endl;
//	cout<<ptr1<<endl;
//	cout<<&ptr1<<endl;
//	cout<<*ptr1<<endl;;
//	cout<<**ptr1<<endl;
//}

//class ab{
//	int x;
//	int y;
//	public:
//		ab(){
//			cout<<"constructor called";
//		}
//		void getdata(){
//			int a=x;
//			int b=y;
//			cin>>a>>b;
//		}
//		void display(){
//			int x;
//			int y;
//			cout<<x+y;
//			
//		}
//		~ab(){
//			cout<<"destructor called";
//		}
//		
//};
//int main(){
//	ab a;
//	a.getdata();
//	a.display();
//}



//operrator overloading

