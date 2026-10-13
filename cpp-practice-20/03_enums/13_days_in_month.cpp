// Days in a month, using an enum for the month.
#include <iostream>
using namespace std;

enum class Month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

int daysInMonth(Month month, bool leapYear) {
    switch (month) {
        case Month::February: return leapYear ? 29 : 28;
        case Month::April:
        case Month::June:
        case Month::September:
        case Month::November: return 30;
        default: return 31;
    }
}

int main() {
    cout << daysInMonth(Month::February, true) << '\n';
}
