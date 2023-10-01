#include<iostream>
using namespace std;

class person {
    string name;
    int age;

    public:
        person(string name, int age) { // Parameterized Constructor
            this->name = name;
            this->age = age;
        }
        
        void getData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    person p1 ("Rwitesh", 22);
    p1.getData();


    cout << endl;
    return 0;
}