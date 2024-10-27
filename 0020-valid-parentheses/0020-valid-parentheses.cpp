#include <bits/stdc++.h>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> pair = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char c : s) {
            if (pair.count(c)) {
                if (stack.empty() || stack.top() != pair[c]) {
                    return false;
                }
                stack.pop();
            } else {
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
