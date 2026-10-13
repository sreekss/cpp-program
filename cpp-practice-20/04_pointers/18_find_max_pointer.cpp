// Find the largest value in an array using pointers.
#include <iostream>
using namespace std;

int* findMaximum(int* values, int size) {
    if (values == nullptr || size <= 0) return nullptr;

    int* largest = values;
    for (int i = 1; i < size; i++) {
        if (*(values + i) > *largest) largest = values + i;
    }
    return largest;
}

int main() {
    int numbers[] = {14, 3, 29, 18, 7};
    int* answer = findMaximum(numbers, 5);

    if (answer != nullptr) cout << *answer << '\n';
}
