#include<iostream>
using namespace std;

// Compile Time Polymorphism
// Function Overloading
// Functions can be overloaded by changing the number of arguments or/and changing the type of arguments or order of the arguments.
class Calculator {
    public:
        void sum(int a, int b) {
            cout << "sum(int, int) is invoked" << endl;
        }

        void sum(double a, double b) {
            cout << "sum(double, double) is invoked" << endl;
        }
};

int main() {
    Calculator c;
    c.sum(2,4);
    c.sum(3.5,4.2);

    cout << endl;
    return 0;
}