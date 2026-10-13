// Move Zeroes
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nextPosition = 0;

    for (int number : nums) {
        if (number != 0) nums[nextPosition++] = number;
    }

    while (nextPosition < (int)nums.size()) {
        nums[nextPosition++] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int number : nums) cout << number << ' ';
    cout << '\n';
}
