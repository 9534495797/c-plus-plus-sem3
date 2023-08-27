#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    const int size = 6; // Size of the 2D array
    int arr[size][size];

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> arr[i][j]; // Read input values into the array
        }
    }

    int maxSum = INT_MIN; // Initialize with the smallest possible value

    // Iterate through the array to find maximum hourglass sum
    for (int i = 0; i < size - 2; ++i) {
        for (int j = 0; j < size - 2; ++j) {
            int currentSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                             arr[i+1][j+1] +
                             arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << maxSum << endl;

    return 0;
}
