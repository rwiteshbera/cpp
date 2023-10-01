#include<iostream>
using namespace std;

// https://www.geeksforgeeks.org/does-overloading-work-with-inheritance/?ref=lbphttps://www.geeksforgeeks.org/does-overloading-work-with-inheritance/?ref=lbp
// Overloading doesn’t work for derived class in the C++ programming language. There is no overload resolution between Base and Derived.

class A {
    public:
        void sum(int a, int b) {
            cout << a + b << endl;
        }
};

class B : public A{
    public:
        void sum(double a, double b) {
            cout << a + b << endl;
        }
};

int main() {
    B b;
    b.sum(5.5,10.2); // 15.7
    b.sum(2.2,3.3); // 5.5

    cout << endl;
    return 0;
}