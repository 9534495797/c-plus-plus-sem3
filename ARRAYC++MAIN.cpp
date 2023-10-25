//#include<iostream>
//using namespace std;
//
//int main() {
//    int rows, cols;
//    
//    // Read the number of rows and columns from the user
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    cout << "Enter number of columns: ";
//    cin >> cols;
//    
//    int arr[rows][cols];
//    
//    // Read the elements of the array from the user
//    cout << "Enter elements of the array:" << endl;
//    for(int i = 0; i < rows; i++) {
//        for(int j = 0; j < cols; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    
//    // Print diagonal elements
//    cout << "Diagonal elements of the array are: ";
//    for(int i = 0; i < rows; i++) {
//        for(int j = 0; j < cols; j++) {
//            // Check if the current element is on the main diagonal (i == j)
//            if(i == j) {
//                cout << arr[i][j] << " ";
//            }
//        }
//    }
//    
//    return 0;
//}





//#include<iostream>
//using namespace std;
//
//int main() {
//    int n;
//    
//    // Read the size of the square matrix from the user
//    cout << "Enter size of the square matrix: ";
//    cin >> n;
//    
//    int arr[n][n];
//    
//    // Read the elements of the matrix from the user
//    cout << "Enter elements of the matrix:" << endl;
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    
//    int diagonalSum = 0;
//    
//    // Calculate the sum of the primary diagonal elements
//    for(int i = 0; i < n; i++) {
//        diagonalSum += arr[i][i];
//    }
//    
//    // Print the sum of the primary diagonal elements
//    cout << "Sum of primary diagonal elements: " << diagonalSum << endl;
//    
//    return 0;
//}





//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//    int n;
//    
//    // Read the size of the square matrix from the user
//    cout << "Enter size of the square matrix: ";
//    cin >> n;
//    
//    int arr[n][n];
//    
//    // Read the elements of the matrix from the user
//    cout << "Enter elements of the matrix:" << endl;
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    
//    int primaryDiagonalSum = 0;
//    int secondaryDiagonalSum = 0;
//    
//    // Calculate the sum of the primary diagonal elements
//    for(int i = 0; i < n; i++) {
//        primaryDiagonalSum += arr[i][i];
//    }
//
//    // Calculate the sum of the secondary diagonal elements
//    for(int i = 0; i < n; i++) {
//        secondaryDiagonalSum += arr[i][n - i - 1];
//    }
//    
//    // Calculate the absolute difference between the sums of the diagonals
//    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);
//    
//    // Print the absolute difference
//    cout << "Absolute difference between the sums of the diagonals: " << absoluteDifference << endl;
//    
//    return 0;
//}

