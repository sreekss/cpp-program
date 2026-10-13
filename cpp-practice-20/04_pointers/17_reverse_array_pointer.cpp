// Reverse an array using pointer arithmetic.
#include <iostream>
using namespace std;

void reverseArray(int* values, int size) {
    if (values == nullptr || size <= 1) return;

    int* left = values;
    int* right = values + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

int main() {
    int numbers[] = {4, 8, 15, 16, 23};
    reverseArray(numbers, 5);

    for (int number : numbers) cout << number << ' ';
    cout << '\n';
}
