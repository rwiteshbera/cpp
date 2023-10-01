#include<iostream>
using namespace std;

class Engine {
    public:
        Engine() {
            cout << "I am in Engine class" << endl;
        }
};

class Wheel {
    public:
        Wheel() {
            cout << "I am in Wheel class" << endl;
        }
};

class Car : public Engine, public Wheel {

};

int main() {
    Car car;
    // I am in Engine class
    // I am in Wheel class

    cout << endl;
    return 0;
}