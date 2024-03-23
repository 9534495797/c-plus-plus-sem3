#include<iostream>
using namespace std;
//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int value;
//	cin>>value;
//	n++;
//	for(i=n;i>1;i--){
//		arr[i-1]=arr[i-2];
//	}
//	arr[0]=value;
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}


//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int value;
//	cin>>value;
//	arr[n]=value;
//	for(i=0;i<n+1;i++){
//	cout<<arr[i]<<" ";
//	}
//	
//	
//	
//}
//int main(){
//	int n;
//	int i;
//	int arr[n];
//	int pos;
//	int value;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cin>>pos;
//	cin>>value;
//	for(i=n-1;i>=pos-1;i--){
//		arr[i+1]=arr[i];
//	}
//	arr[pos-1]=value;
//	n++;
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}




//deletion

//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=1;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}


//int main(){
//	int a[100],i,n,pos;
//	cout<<"size of array is: ";
//	cin>>n;
//	cout<<"element of array is: ";
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cout<<"pos to be deleted: ";
//	cin>>pos;
//	for(i=pos-1;i<=n-1;i++){
//	a[i]=a[i+1];	
//	}
//	n--;
//	cout<<"deleted array : ";
//	for(i=0;i<n;i++){
//		cout<<a[i];
//	}
//	
//	
//}


//merging
//int main(){
//	int a[100],b[100],n1,n2,i;
//	cout<<"size of array 1 is: ";
//	cin>>n1;
//	cout<<"size of array 2 is: ";
//	cin>>n2;
//	cout<<"element of array 1 is: ";
//	for(i=0;i<n1;i++){
//		cin>>a[i];
//	}
//	cout<<"element of array 2 is: ";
//	for(i=0;i<n2;i++){
//		cin>>b[i];
//	}
//	for(i=0;i<n2;i++){
//		a[n1+i]=b[i];
//	}
//	cout<<"merged array is: ";
//	for(i=0;i<n1+n2;i++){
//		cout<<a[i];
//	}
//	
//}

//searching
//int main(){
//	int arr[5],i,n,item;
//	cout<<"enter size of array: ";
//	cin>>n;
//	cout<<"elements of array are: ";
//for(int i=0;i<n;i++){
//	cin>>arr[i];
//}
//cout<<"item to be search: ";
//cin>>item;
//for(int i=0;i<n;i++){
//	if(arr[i]==item){
//		cout<<"element found at index "<<i;
//		break;
//	}
//}if(arr[i]!=item){
//	cout<<"element not found!";
//}
//
//}


//binary search
//#include <iostream>
//using namespace std;
//
//int binarySearch(int arr[], int n, int key) {
//    int left = 0, right = n - 1;
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] == key) return mid;
//        else if (arr[mid] < key) left = mid + 1;
//        else right = mid - 1;
//    }
//    return -1;
//}
//
//int main() {
//    int n, key;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; ++i) cin >> arr[i];
//    cin >> key;
//    int index = binarySearch(arr, n, key);
//    if (index != -1) cout << "Element found at index " << index << endl;
//    else cout << "Element not found in the array" << endl;
//    return 0;
//}


//max min in array  also find second max and min

//int main(){
//	int n,i;
//	int arr[n];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int max=arr[0];
//	for(i=0;i<n;i++){
//		if(arr[i]<max){
//			max=arr[i];
//		}
//	}
//	cout<<max;}

//reverse array
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	int i;
//	int arr[100];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	for(i=0;i<=n/2;i++){
//		int temp=arr[i];
//		arr[i]=arr[n-1-i];
//		arr[n-1-i]=temp;
//	
//	}
//	for(i=0;i<n;i++){
//			cout<<arr[i]<<" ";
//	}
//	
//}



//remove duplicate
//#include<iostream>
//using namespace std;
//int main(){
//	int n,i;
//	cin>>n;
//	int arr[n];
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int n1=0;
//	for(i=0;i<n;i++){
//		bool isdup=false;
//		for(int j=0;j<n1;j++){
//			if(arr[i]==arr[j]){
//				isdup=true;
//				break;
//			}
//		}
//		if(!isdup){
//			arr[n1++]=arr[i];
//		}
//	}
//	for(i=0;i<n1;i++){
//		cout<<arr[i]<<" ";
//	}
//
//}



//sum of array elemet
//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int sum=0;
//	for(i=0;i<n;i++){
//		sum+=arr[i];
//	}
//	cout<<sum;
//}


//even arraty
//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	for(i=0;i<n;i++){
//	if(arr[i]%2==0){
//		cout<<arr[i]<<" ";
//	}
//	}
//	
//}



//sort an array
//void bubblesort(int arr[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-i-1;j++){
//			if(arr[j]<arr[j+1]){
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
//}
//int main(){
//	int n,i;
//	cin>>n;
//	int arr[n];
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	bubblesort(arr,n);
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}


//average array
//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int sum=0;
//	for(i=0;i<n;i++){
//		sum+=arr[i];
//	}
//cout<<sum<<endl;
//double avg= (sum)/n;
//cout<<avg;
//}


//frequncy of element in array
//int main(){
//	int n;
//	int i;
//	int arr[n];
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int value;
//	cin>>value;
//	int count=0;
//	for(int i=0;i<n;i++){
//		if(arr[i]==value){
//			count++;
//		}
//	}
//	cout<<count;
//}

//union and intersection
//#include <iostream>
//using namespace std;
//void intersection(int arr1[],int arr2[],int n1,int n2){
//	for(int i=0;i<n1;i++){
//		for(int j=0;j<n2;j++){
//			if(arr1[i]==arr2[j]){
//				cout<<arr1[i];
//				break;
//			}
//		}
//	}
//}
//int main(){
//	int n1,n2,i;
//	cin>>n1;
//	int arr1[n1];
//	for(i=0;i<n1;i++){
//		cin>>arr1[i];
//	}
//	cin>>n2;
//	int arr2[n2];
//	for(i=0;i<n2;i++){
//		cin>>arr2[i];
//	}
//	intersection(arr1,arr2,n1,n2);
//
//}

//void printUnion(int arr1[], int arr2[], int n, int m) {
//    cout << "Union of arrays: ";
//    for (int i = 0; i < n; i++)
//        cout << arr1[i] << " ";
//
//    for (int i = 0; i < m; i++) {
//        bool found = false;
//        for (int j = 0; j < n; j++) {
//            if (arr2[i] == arr1[j]) {
//                found = true;
//                break;
//            }
//        }
//        if (!found)
//            cout << arr2[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int n, m;
//    cout << "Enter the size of the first array: ";
//    cin >> n;
//    int arr1[n];
//    cout << "Enter elements of the first array:" << endl;
//    for (int i = 0; i < n; i++) {
//        cin >> arr1[i];
//    }
//
//    cout << "Enter the size of the second array: ";
//    cin >> m;
//    int arr2[m];
//    cout << "Enter elements of the second array:" << endl;
//    for (int i = 0; i < m; i++) {
//        cin >> arr2[i];
//    }
//
//    printIntersection(arr1, arr2, n, m);
//    printUnion(arr1, arr2, n, m);
//
//    return 0;
//}


//check palindrome

//bool isPalindrome(int arr[], int n) {
//    for (int i = 0; i < n / 2; i++) {
//        if (arr[i] != arr[n - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//int main(){
//	int n,i;
//	cin>>n;
//	int arr[n];
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//if(	isPalindrome(arr,n)){
//	cout<<"yes";
//}else{
//	cout<<"no";
//}
//}



//check ascending sort
//#include <iostream>
//using namespace std;
//
//bool isSorted(int arr[], int n) {
//    for (int i = 1; i < n; i++) {
//        if (arr[i] < arr[i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    cout << "Enter the size of the array: ";
//    cin >> n;
//    int arr[n];
//    cout << "Enter elements of the array:" << endl;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    if (isSorted(arr, n)) {
//        cout << "Array is sorted in ascending order." << endl;
//    } else {
//        cout << "Array is not sorted in ascending order." << endl;
//    }
//    return 0;
//}


//median array
//#include <iostream>
//using namespace std;
//
//// Function to swap two elements
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//// Function to sort the array in ascending order using bubble sort
//void bubbleSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = 0; j < n - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//}
//
//double findMedian(int arr[], int n) {
//    bubbleSort(arr, n); // Sort the array
//
//    if (n % 2 == 0) {
//        // If the number of elements is even, average the middle two elements
//        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
//    } else {
//        // If the number of elements is odd, return the middle element
//        return arr[n / 2];
//    }
//}
//
//int main() {
//    const int MAX_SIZE = 100; // Maximum size of array
//    int arr[MAX_SIZE]; // Array declaration with maximum size
//    int n;
//
//    cout << "Enter the size of the array: ";
//    cin >> n;
//
//    if (n <= 0 || n > MAX_SIZE) {
//        cout << "Invalid size of array" << endl;
//        return 0;
//    }
//
//    cout << "Enter elements of the array:" << endl;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    double median = findMedian(arr, n);
//    cout << "Median of elements in the array: " << median << endl;
//
//    return 0;
//}


//toh problem
//#include<iostream>
//using namespace std;
//void toh(int n,int source,int auxillary,int destination){
//	if(n>=1){
//		toh(n-1,source,destination,auxillary);
//		cout<<"move a disk from "<< source<<" to"<< destination<<endl;
//		toh(n-1,auxillary,source,destination);
//	}
//}
//void toh(int n){
//	if(n<=0){
//		cout<<"invalid";
//	}else{
//		int steps=(1<<n)-1;
//		cout<<"steps= "<<steps;
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	toh(n,1,2,3);
//	cout<<endl;
//	toh(n);
//}


//quick sort
//#include<iostream>
//using namespace std;
//int partition(int arr[],int start,int end){
//	int pivot=arr[start];
//	int count=0;
//	for(int i=start+1;i<end;i++){
//		if(arr[i]<pivot)
//		count++;
//	}
//	int pivotindex=start+count;
//	swap(arr[pivotindex],arr[start]);
//	int i=start;
//	int j=end;
//	while(i<pivotindex&&j>pivotindex){
//		while(arr[i]<pivot){
//			i++;
//		}
//		while(arr[j]>pivot){
//			j--;
//		}
//		if(i<pivotindex&&j>pivotindex){
//			swap(arr[i++],arr[j--]);
//		}
//	}
//	return pivotindex;
//}
//void quicksort(int arr[],int start,int end){
//	
//	if(start>=end){
//		return;
//	}
//	int p=partition(arr,start,end);
//	quicksort(arr,start,p-1);
//	quicksort(arr,p+1,end);
//}
//int main(){
//	int arr[100],n,i;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	quicksort(arr,0,n-1);
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}

