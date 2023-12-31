#include <iostream>
using namespace std;

class complex {
    int x, y;

public:
    complex() {
        x = 0; // Default value for x
        y = 0; // Default value for y
    }

    complex(int real, int imaginary) {
        x = real;
        y = imaginary;
    }

    complex operator +(complex c) {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }

    void show() {
        cout << x << "+i" << y;
    }
};

int main() {
    complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}

