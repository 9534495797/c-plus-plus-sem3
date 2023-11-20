//#include <iostream>
//using namespace std;
//bubble sort
//int binarySearch(int arr[], int left, int right, int target) {
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        // Check if target is present at mid
//        if (arr[mid] == target)
//            return mid;
//
//        // If target greater, ignore left half
//        if (arr[mid] < target)
//            left = mid + 1;
//
//        // If target is smaller, ignore right half
//        else
//            right = mid - 1;
//    }
//
//    // If target is not present in the array
//    return -1;
//}
//
//int main() {
//    int arr[] = {2, 4, 7, 10, 15, 20, 25, 30};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    int target = 15;
//    int result = binarySearch(arr, 0, n - 1, target);
//
//    if (result == -1)
//        cout << "Element not present in array" << endl;
//    else
//        cout << "Element found at index " << result << endl;
//
//    return 0;
//}




