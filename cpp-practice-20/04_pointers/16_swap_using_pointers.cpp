// Swap two numbers through pointers.
#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b) {
    if (a == nullptr || b == nullptr) return;

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int first = 10, second = 25;
    swapNumbers(&first, &second);
    cout << first << ' ' << second << '\n';
}
