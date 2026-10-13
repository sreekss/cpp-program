// Maximum Subarray (Kadane's algorithm)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(const vector<int>& nums) {
    int current = nums[0];
    int answer = nums[0];

    for (int i = 1; i < (int)nums.size(); i++) {
        current = max(nums[i], current + nums[i]);
        answer = max(answer, current);
    }
    return answer;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums) << '\n';
}
