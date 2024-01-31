#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (const char c : s) {
            if (c == '(')
                stack.push(')');
            else if (c == '{')
                stack.push('}');
            else if (c == '[')
                stack.push(']');
            else if (stack.empty() || pop(stack) != c)
                return false;
        }

        return stack.empty();
    }

private:
    char pop(stack<char>& stack) {
        char c = stack.top();
        stack.pop();
        return c;
    }
};

int main() {
    Solution solution;

    // Example usage
    string inputString = "{[()]}";
    bool result = solution.isValid(inputString);

    if (result) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }

    return 0;
}
