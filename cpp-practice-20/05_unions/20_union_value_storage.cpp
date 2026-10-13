// A union shares memory between its members.
// Only read the member that was most recently written.
#include <iostream>
using namespace std;

union Value {
    int wholeNumber;
    float decimalNumber;
    char letter;
};

enum class ValueType { Integer, Decimal, Character };

struct StoredValue {
    Value data;
    ValueType type;
};

void printValue(const StoredValue& value) {
    switch (value.type) {
        case ValueType::Integer:
            cout << value.data.wholeNumber << '\n';
            break;
        case ValueType::Decimal:
            cout << value.data.decimalNumber << '\n';
            break;
        case ValueType::Character:
            cout << value.data.letter << '\n';
            break;
    }
}

int main() {
    StoredValue value;
    value.data.wholeNumber = 42;
    value.type = ValueType::Integer;
    printValue(value);

    value.data.decimalNumber = 3.5f;
    value.type = ValueType::Decimal;
    printValue(value);
}
