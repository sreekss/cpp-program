// Contains Duplicate
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(const vector<int>& nums) {
    unordered_set<int> values;

    for (int number : nums) {
        if (values.count(number)) return true;
        values.insert(number);
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << (containsDuplicate(nums) ? "true" : "false") << '\n';
}
