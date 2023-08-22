//#include<stdio.h>
//int main(){
//	int a[9],b[5],i,n1,n2;
//	printf("enter size of array1= ");
//	scanf("%d",&n1);
//	printf("size of array2= ");
//	scanf("%d",&n2);
//	printf("elements of array1 \n ");
//	for(i=0;i<n1;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("elements of array2 \n");
//	for(i=0;i<n2;i++){
//		scanf("%d",&b[i]);
//	}
//
//	for(i=0;i<n2;i++){
//		a[n1+i]=b[i];
//		
//	}
//	printf("after merge array \n = ");
//	for(i=0;i<n1+n2;i++){
//		printf("%d ",a[i]);
//	}
//	
//}


#include<stdio.h>
int main(){
	int a[5],b[6],i,n1,n2;
	printf("size of array1 ");
	scanf("%d",&n1);
	printf("size of array2 ");
	scanf("%d",&n2);
	printf("elements of array1 is ");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("elements of array2 is ");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n2;i++){
		a[n1+i]=b[i];
	}
	printf("merged array is " );
	for(i=0;i<n1+n2;i++){
		printf("%d",a[i]);
	}
}

