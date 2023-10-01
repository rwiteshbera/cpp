#include<iostream>
using namespace std;

/* 
Public Mode: If we derive a subclass from a public base class. 
    public member of the base class -> public in the derived class
    protected members of the base class -> protected in the derived class.

Protected Mode: If we derive a subclass from a Protected base class.   
    public members and protected members of the base class -> protected in the derived class.

Private Mode: If we derive a subclass from a Private base class. 
    public members and protected members of the base class -> Private in the derived class.
*/

class Company {
    public:
        string name;
        void setData(string name) {
            this->name = name;
        }

        void display() {
            cout << name << endl;
        }
};

class Employee: public Company {
    public:
        void getData() {
            cout << name << endl;
        }
};

int main() {
    Employee e;
    e.setData("Rwitesh");
    e.display();
    e.getData();

    cout << endl;
    return 0;
}