#include <iostream>
using namespace std;

class GFG {
    private:
        int private_var;
    protected:
        int protected_var;
    public:
        GFG() {
            private_var = 10;
            protected_var = 99;
        }

        friend class F; // Declare F as a friend class
};

class F {
    public:
        void display(GFG& t) {
            cout << "Value of private_var: " << t.private_var << endl;
            cout << "Value of protected_var: " << t.protected_var << endl;
        }
};

int main() {
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}

