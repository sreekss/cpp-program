// Two Sum
// Return the indices of two numbers that add up to target.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < (int)nums.size(); i++) {
        int need = target - nums[i];

        if (seen.find(need) != seen.end()) {
            return {seen[need], i};
        }

        seen[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> answer = twoSum(nums, target);

    if (!answer.empty()) {
        cout << answer[0] << " " << answer[1] << '\n';
    }
    return 0;
}
