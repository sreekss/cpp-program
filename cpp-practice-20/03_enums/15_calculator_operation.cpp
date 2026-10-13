// Choose a calculator operation with an enum.
#include <iostream>
using namespace std;

enum class Operation { Add, Subtract, Multiply, Divide };

double calculate(double a, double b, Operation operation) {
    switch (operation) {
        case Operation::Add: return a + b;
        case Operation::Subtract: return a - b;
        case Operation::Multiply: return a * b;
        case Operation::Divide:
            if (b == 0) throw invalid_argument("division by zero");
            return a / b;
    }
    return 0;
}

int main() {
    cout << calculate(12, 4, Operation::Divide) << '\n';
}
