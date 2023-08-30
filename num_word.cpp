#include <iostream>
using namespace std;

string numberToWords(int num) {
    string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (num >= 1 && num <= 9) {
        return words[num];
    }
    return "";
}

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; ++i) {
        if (i >= 1 && i <= 9) {
            cout << numberToWords(i) << endl;
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}

