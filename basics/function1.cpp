#include<iostream>
#include<string>
using namespace std;

void setValue(int x, int y) {
    x = 100;
    y = 500;
}

void updateValue(int &x, int &y) {
    x = 100;
    y = 200;
}

int main() {
   int x = 5;
   int y = 10;

   cout << "x = " << x << " ; y = " << y << endl; // x = 5 ; y = 10
   setValue(x, y); // It sends a copy of the value, not the actual reference
   cout << "x = " << x << " ; y = " << y << endl; // x = 5 ; y = 10
   updateValue(x, y); // Receives reference, so we can update the value by accessing the memory
   cout << "x = " << x << " ; y = " << y << endl; // x = 100 ; y = 200

}