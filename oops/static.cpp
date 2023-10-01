#include<iostream>
using namespace std;

class employee {
    string name;
    static string ceo;

    public:
        employee(string name) {
            this->name = name;
        }

        void displayName() {
            cout << name;
        }

        void displayCEO() {
            cout << ceo;
        }
};

// // Initialize the static member variable ceo outside of any function
string employee::ceo = "Naveen Reddy"; 

int main() {
    employee e1 ("Rwitesh");
    employee e2 ("Bishakh");



    e1.displayCEO();
    e2.displayCEO();

    cout << endl;
    return 0;
}