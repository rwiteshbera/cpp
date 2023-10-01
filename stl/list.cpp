#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> age;
    for(int i = 1; i <= 5; i++) {
        int input;
        cin >> input;
        age.push_back(input);
    }

    for (auto i = age.begin(); i != age.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    age.sort();


    for (auto i = age.begin(); i != age.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}