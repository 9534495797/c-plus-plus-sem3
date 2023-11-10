#include<vector>
#include<iostream>
using namespace std;

//iterator example
//int main(){
//	int arr[]={12,3,17,8};
//	vector<int>v(arr,arr+4);
//	for(vector<int>::iterator i=v.begin();i!=v.end();i++){
//		cout<<*i<<" ";
//	}
//	cout<<endl;
//}


//example 1
int main(){
	vector<int>v1(10);
	cout<<"size is\t"<<v1.size()<<"\n";
	for(int i=0;i<9;i++){
		v1[i]=i;
		
	}
	for(int i=10;i<=19;i++){
		v1.push_back(i);
	}
	cout<<"size is \t"<<v1.size()<<"\n";
	for(int i=0;i<=19;i++){
		cout<<v1[i]<<"\t";
	}
	v1.pop_back();
	v1.pop_back();
	cout<<"\n new size of vector"<<v1.size();
	vector<int>::iterator v=v1.begin();
	while(v!=v1.end()){
		cout<<"\n value of v= "<<*v;
		v++;
	}
	return 0;
}
