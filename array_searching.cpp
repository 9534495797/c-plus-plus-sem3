#include<stdio.h>
int main(){
	int a[5]={5,3,2,7,6},i;
	
	
	for(i=0;i<5;i++){
		if(a[i]==17){
			printf("element found at index %d",i);
			break;
		}
	}
	if(a[i]!=17){
		printf("element not found");
	}
}
