#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int buy = prices[0];
        int sell = 0;
        int profit = 0;
        int maxProfit = 0;
        for (int i = 1; i < n; i++)
        {
            sell = prices[i];
            profit = sell - buy;
            if (profit <= 0)
            {
                buy = min(buy, sell);
            }
            else
            {
                maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
};


