#include<iostream>
using namespace std;
// https://www.geeksforgeeks.org/encapsulation-in-cpp/?ref=lbp

// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

// Two Important  property of Encapsulation 

// Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.

// Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.

class College {
    string name;
    int session;
    public:
        void setCollegeName(string name) {
            this->name = name;
        }

        void getCollegeName() {
            cout << name << endl;
        }

        void setSession(int session) {
            this->session = session;
        }

         void getSession() {
              cout << session << endl;
        }
};

int main() {
    College c;
    c.setCollegeName("AOT");
    c.getCollegeName();

    c.setSession(2023);
    c.getSession();

    cout << endl;
    return 0;
}