#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr1(n), arr2(n), arr3(n), arr4(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> arr1[i];
    }

    int m;
    std::cin >> m;

    for (int i = 0; i < m; ++i) {
        std::cin >> arr2[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> arr3[i];
    }

    std::cin >> m;

    for (int i = 0; i < m; ++i) {
        std::cin >> arr4[i];
    }

    std::unordered_set<int> common12;
    for (int num : arr1) {
        common12.insert(num);
    }

    std::cout << "Common Elements: ";
    for (int num : arr2) {
        if (common12.count(num)) {
            std::cout << num << " ";
            common12.erase(num); // To avoid duplicate common elements
        }
    }

    std::cout << std::endl;

    std::unordered_set<int> common34;
    for (int num : arr3) {
        common34.insert(num);
    }

    bool foundCommon = false;
    for (int num : arr4) {
        if (common34.count(num)) {
            foundCommon = true;
            break;
        }
    }

    if (foundCommon) {
        std::cout << "Common Elements: ";
        for (int num : arr4) {
            if (common34.count(num)) {
                std::cout << num << " ";
                common34.erase(num); // To avoid duplicate common elements
            }
        }
    } else {
        std::cout << "Common elements: none";
    }

    std::cout << std::endl;

    return 0;
}

