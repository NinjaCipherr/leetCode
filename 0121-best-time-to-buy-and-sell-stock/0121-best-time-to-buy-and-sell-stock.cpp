#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minValue = prices[0];
        int maxProfit = 0;

        for (int price : prices)
        {
            if (price < minValue)
            {
                minValue = price;
            }
            int profit = price - minValue;
            if (maxProfit < profit)
            {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};