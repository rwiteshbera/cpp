#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int>values;
    values.insert(1);
    values.insert(3);
    values.insert(6);
    values.insert(6);
    values.insert(7);

    auto iterator = values.begin();
    while (iterator != values.end()){
        cout << *iterator << " ";
        iterator++;
    }

    cout << endl;
    
    return 0;
}