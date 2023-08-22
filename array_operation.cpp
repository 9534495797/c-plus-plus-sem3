#include<stdio.h>
//int main(){
//	int arr[5]={1,2,3,4,5};
//	int i;
//	for(i=0;i<5;i++){
//		printf("%d\n",arr[i]);
//	}
//}    traversing

//int main(){
//	int array[10],n,i,item;
//	printf("enter the size of array:");
//	scanf("%d",&n);
//	printf("enter elements in array");
//	for(i=0;i<n;i++){
//		scanf("%d",&array[i]);
//	}
//	printf("enter the element at begin:");
//	scanf("%d",&item);
//	n++;
//	for(i=n;i>1;i--){
//	array[i-1]=array[i-2];
//	}
//	array[0]=item;
//	printf("final array= ");
//	for(i=0;i<n;i++){
//		printf("%d\n",array[i]);
//	}
//}  at begin insertion




//int main(){
//	int array[5],i,value;
//	printf("enter array elements");
//	for(i=0;i<5;i++){
//		scanf("%d",&array[i]);
//		
//	}
//	printf("enter element to insert");
//	scanf("%d",&value);
//	array[i]=value;
//	printf("new array is=");
//	for(i=0;i<6;i++){
//		printf("%d",array[i]);
//	}
//}  at the end insertion


//int main(){
//	int array[5],n,i;
//	printf("enter size of array: ");
//	scanf("%d",&n);
//	printf("elements of array \n= ");
//	for(i=0;i<n;i++){
//		scanf("%d",&array[i]);
//	}
//	printf("after deletion array is \n");
//	for(i=0;i<n-1;i++){
//		printf("%d",array[i]);
//	}
//}  deletion from end


//deletion from specific posn
//int main(){
//	int a[50],size,pos,i;
//	printf("enter size of array ");
//	scanf("%d",&size);
//	printf("elements of array");
//	for(i=0;i<size;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("element we waant to del ");
//	scanf("%d",&pos);
//	if(pos<=0 || pos>size){
//		printf("invalid");
//	}
//	else{
//		for(i=pos-1;i<size-1;i++){
//			a[i]=a[i+1];
//		}
//		size--;
//	}
//	printf("final array");
//	for(i=0;i<size;i++){
//		printf("%d ",a[i]);
//	}
//}

//int main(){
//	int array[5],n,i;
//	printf("size of array is ");
//	scanf("%d",&n);
//	printf("elements of array is \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&array[i]);
//		i--;
//		for(i=0;i<n;i++){
//			array[i]=array[i+1];
//		}
//		printf("final array is \n");
//		for(i=0;i<n;i++){
//			printf("%d\n",array[i]);
//		}
//	}
//}  delete from begin some error in it


//#include<stdio.h>
//int main(){
//	int a[5],n,i;
//	printf("enter size of array= ");
//	scanf("%d",&n);
//	printf("elements of array ");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("arrauy after deletion ");
//	for(i=0;i<n-1;i++){
//		printf("%d",a[i]);
//	}
//	
//	
//
//}

