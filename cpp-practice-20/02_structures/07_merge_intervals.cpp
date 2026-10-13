// Merge Intervals, with each interval represented by a struct.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Interval {
    int start;
    int end;
};

vector<Interval> mergeIntervals(vector<Interval> intervals) {
    if (intervals.empty()) return {};

    sort(intervals.begin(), intervals.end(),
         [](const Interval& a, const Interval& b) {
             return a.start < b.start;
         });

    vector<Interval> merged;
    merged.push_back(intervals[0]);

    for (int i = 1; i < (int)intervals.size(); i++) {
        Interval& last = merged.back();

        if (intervals[i].start <= last.end) {
            last.end = max(last.end, intervals[i].end);
        } else {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main() {
    vector<Interval> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    for (const Interval& interval : mergeIntervals(intervals)) {
        cout << '[' << interval.start << ',' << interval.end << "] ";
    }
    cout << '\n';
}
