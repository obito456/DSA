#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long reversed = 0;
        int y = x;

        while (y > 0) {
            reversed = reversed * 10 + y % 10;
            y /= 10;
        }
        return reversed == x;
    }
};

int main() {
    Solution solution;

    // Test cases
    int num1 = 121;
    int num2 = -121;
    int num3 = 10;

    cout << num1 << " is " << (solution.isPalindrome(num1) ? "" : "not ") << "a palindrome." << endl;
    cout << num2 << " is " << (solution.isPalindrome(num2) ? "" : "not ") << "a palindrome." << endl;
    cout << num3 << " is " << (solution.isPalindrome(num3) ? "" : "not ") << "a palindrome." << endl;

    return 0;
}
