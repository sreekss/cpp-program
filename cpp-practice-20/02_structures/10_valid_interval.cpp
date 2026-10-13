// Check whether two intervals overlap.
#include <iostream>
using namespace std;

struct Interval {
    int start;
    int finish;
};

bool overlaps(const Interval& a, const Interval& b) {
    return a.start <= b.finish && b.start <= a.finish;
}

int main() {
    Interval first{2, 7};
    Interval second{6, 10};
    cout << (overlaps(first, second) ? "overlap" : "no overlap") << '\n';
}
