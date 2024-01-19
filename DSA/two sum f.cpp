#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;  // Include the entire std namespace

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;

        for (int i = 0; i < nums.size(); ++i) {
            if (const auto it = numToIndex.find(target - nums[i]);
                it != numToIndex.cend())
                return {it->second, i};
            numToIndex[nums[i]] = i;
        }

        // Handle the case when no solution is found
        throw runtime_error("No solution found");
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    try {
        vector<int> result = solution.twoSum(nums, target);
        // Print the result indices
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
