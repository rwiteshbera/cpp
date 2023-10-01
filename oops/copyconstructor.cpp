#include<iostream>
using namespace std;

class student {
    int roll;
    string name;

    public:
        student(string name, int roll) {
            this->name = name;
            this->roll = roll;
        }

        void display() {
            cout << "Name: " << name << " " << " | Roll: " << roll << endl;
        }
};
int main() {
    student s1 ("Rwitesh", 151);
    student s2 (s1); // Copy constructor called

    s1.display();
    s2.display();

    cout << endl;
    return 0;
}