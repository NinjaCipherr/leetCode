#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int last_zero_found = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                nums[last_zero_found] = nums[i];
                last_zero_found++;
            }
        }
        for (int i = last_zero_found; i < nums.size(); ++i)
        {
            nums[i] = 0;
        }
    }
};