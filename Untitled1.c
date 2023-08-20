//#include<stdio.h>
//int main(){
//	int arr={10,20,30,40,50};
//	int n=length(arr);
//	printf(arr[n-1]);
//}

//lect 3 test 1 q-1
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;  // Read the size of the array
//
//    string arr[100];  // Array of strings
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];  // Read each string into the array
//    }
//
//    string searchStr;
//    cin >> searchStr;  // Read the string to search
//
//    bool found = false;
//    int foundIndex = -1;
//
//    for (int i = 0; i < n; ++i) {
//        if (arr[i] == searchStr) {  // Compare strings
//            found = true;
//            foundIndex = i;
//            break;
//        }
//    }
//
//    if (found) {
//        cout << "String found at index: " << foundIndex << endl;
//    } else {
//        cout << "String not found" << endl;
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//void reverseWord(char* word) {
//    int left = 0;
//    int right = strlen(word) - 1;
//    while (left < right) {
//        char temp = word[left];
//        word[left] = word[right];
//        word[right] = temp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    int size;
//    scanf("%d", &size);
//
//    if (size <= 0 || size > 100) {
//        fprintf(stderr, "Invalid array size. Please enter a value between 1 and 100.\n");
//        return 1;
//    }
//
//    char input[1000]; // Assuming total input length won't exceed 1000 characters
//    getchar(); // Clear the newline character from the buffer
//    fgets(input, sizeof(input), stdin);
//    input[strlen(input) - 1] = '\0'; // Removing the trailing newline character
//
//    char* words[size];
//    int i = 0;
//
//    char* token = strtok(input, " ");
//    while (token != NULL) {
//        words[i] = token;
//        token = strtok(NULL, " ");
//        i++;
//    }
//
//    for (int j = 0; j < size; j++) {
//        reverseWord(words[j]);
//        printf("%s ", words[j]);
//    }
//
//    printf("\n");
//
//    return 0;
//}
//
//#include <iostream>
//#include <unordered_set>
//#include <vector>
//
//std::vector<int> findCommonElements(const std::vector<int>& arr1, const std::vector<int>& arr2) {
//    std::unordered_set<int> elements;
//    std::vector<int> commonElements;
//
//    for (int num : arr1) {
//        elements.insert(num);
//    }
//
//    for (int num : arr2) {
//        if (elements.find(num) != elements.end()) {
//            commonElements.push_back(num);
//            elements.erase(num); // To avoid duplicate common elements
//        }
//    }
//
//    return commonElements;
//}
//
//int main() {
//    int n;
//    std::cout << "Enter the size of arrays: ";
//    std::cin >> n;
//
//    std::vector<std::vector<int>> arrays(4, std::vector<int>(n));
//
//    for (int i = 0; i < 4; ++i) {
//        std::cout << "Enter " << n << " elements for array " << i + 1 << ": ";
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arrays[i][j];
//        }
//    }
//
//    std::vector<int> common12 = findCommonElements(arrays[0], arrays[1]);
//    std::vector<int> common34 = findCommonElements(arrays[2], arrays[3]);
//
//    std::cout << "Common Elements between array 1 and 2: ";
//    for (int num : common12) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "Common Elements between array 3 and 4: ";
//    for (int num : common34) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int max_size = 100;
    int size, position;

    printf("Enter the size of the array (up to %d): ", max_size);
    scanf("%d", &size);

    if (size <= 0 || size > max_size) {
        printf("Invalid array size!\n");
        return 1;
    }

    int arr[max_size];

    printf("Enter the elements of the array separated by space: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted (between 1 and %d): ", size);
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Original array:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    // Delete the element at the specified position
    for (int i = position - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;

    printf("Updated array:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}


