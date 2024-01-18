#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> v;

        for (int i = 0; i < nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                // If the complement is found in the map, return the indices
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                return v;
            }
            // Store the current number and its index in the map
            m[nums[i]] = i;
        }

        // No solution found
        return v;
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Example 1: [" << result1[0] << ", " << result1[1] << "]" << endl;

    return 0;
}
