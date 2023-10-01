#include<iostream>
using namespace std;

// https://www.geeksforgeeks.org/virtual-base-class-in-c/
// When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base. 

class A {
    public:
        A() {
            cout << "Constructor A is called" << endl;
        }
};

class B {
    public:
        B() {
            cout << "Constructor B is called" << endl;
        }
};

class C : public A, public B {
    public:
        C() {
            cout << "Constructor C is called" << endl; 
        }
};

class D : public A, virtual B {
    public:
        D() {
            cout << "Constructor D is called" << endl; 
        }
};

int main() {
    C c; 
    // Constructor A is called
    // Constructor B is called
    // Constructor C is called


    cout << endl;

    D d;
    // Constructor B is called
    // Constructor A is called
    // Constructor D is called

    cout << endl;
    return 0;
}