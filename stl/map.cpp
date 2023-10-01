#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string, int> student;

    student["Rwitesh"] = 22;

    cout << student.at("Rwitesh") << endl;

    return 0;
}