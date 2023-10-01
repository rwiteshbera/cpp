#include<iostream>
#include<climits>
using namespace std;

int getMin(int numbers[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

//Return multiple values from function
void getMinMax(int numbers[], int size, int* min, int* max) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
        
    }
}

int main() {
    int numbers[5] = {4,8,11,-6,9};
    cout << getMin(numbers, 5) << endl;

    int min = INT_MAX;
    int max = INT_MIN;
    getMinMax(numbers, 5, &min, &max);
    cout << "min is = " << min << endl;
    cout << "max is = " << max << endl;

    return 0;
}