//#include<iostream>
//using namespace std;
//void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod){
//	if(n==0){
//		return;
//	}if(n==1){
//		cout<<"move disk1 from rod";
//		return;
//	}
//	towerofhanoi(n-1,from_rod,aux_rod,to_rod);
//	cout<<"move disk"<<n<<"form rod"<<from_rod<<"to rod"<<to_rod<<endl;
//	towerofhanoi(n-1,aux_rod,to_rod,from_rod);
//	
//}
//int main(){
//		int n=3;
//		towerofhanoi(n,'A','c','B');
//			return 0;
//	}



// You are using GCC code for number of steps in toh
#include <stdio.h>int towerOfHanoi(int n) {    if (n == 1) {        return 1;    } else {        return 2 * towerOfHanoi(n - 1) + 1;    }}int main() {    int n;    scanf("%d", &n);    if (n > 0 && n <= 8) {        int moves = towerOfHanoi(n);        printf("%d\n", moves);    } else {        printf("Invalid input. Number of disks should be between 1 and 8.\n");    }    return 0;}


