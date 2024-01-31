#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Check if the input vector is empty
        if (strs.empty())
            return "";

        // Iterate through the characters of the first string in the vector
        for (int i = 0; i < strs[0].length(); ++i) {
            // Iterate through the other strings in the vector
            for (int j = 1; j < strs.size(); ++j) {
                // Check if the index 'i' is out of bounds for the current string
                // or if the character at index 'i' is not equal among the strings
                if (i == strs[j].length() || strs[j][i] != strs[0][i]) {
                    // Return the substring of the first string up to index 'i'
                    return strs[0].substr(0, i);
                }
            }
        }

        // If no mismatch is found, return the entire first string as the common prefix
        return strs[0];
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<string> inputStrings = {"flower", "flow", "flight"};
    string result = solution.longestCommonPrefix(inputStrings);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}

