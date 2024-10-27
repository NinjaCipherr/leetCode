#include <bits/stdc++.h>
#include <stack>
#include <unordered_map>

using namespace std;
class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int result = 0;
    int count = 0;
    unordered_map<int, int> pair;
    for (int num : nums) {
      pair[num]++;
    }
    for (const auto &a : pair) {
      if (a.second == 1) {
        result = a.first;
      }
    }
    return result;
  }
};
