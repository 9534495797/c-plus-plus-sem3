#include<iostream>

using namespace std;
//int main(){
//	int *p=NULL;
//	p=new int;//if i will comment it than will get failure
//	if(!p){
//		cout<<"memory allocation failure"<<endl;
//		exit(1);
//	}
////if(p==NULL){
////		cout<<"ememory allocation failure";
////		exit(1);
////	}
//	return 0;
//}


int main(){
	int *p=NULL;
	p=new int;//if i will comment it than will get failure
	if(!p){
		cout<<"memory allocation failure"<<endl;
		exit(1);
	}
//if(p==NULL){
//		cout<<"ememory allocation failure";
//		exit(1);
//	}
	else{
		cout<<"memeory allocated"<<endl;
		*p=12;
		cout<<"integer value stored is:"<<*p<<endl;
		delete p;
		cout<<"memeory deallocated";
	}
	return 0;
}

