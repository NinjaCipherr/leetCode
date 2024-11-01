#include <bits/stdc++.h>
#include <stack>
#include <unordered_map>

using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
      int temp = target - nums[i];
      if (map.find(temp) != map.end()) {

        return {map[temp], i};
      }
      map[nums[i]] = i;
    }
    return {};
  }
};