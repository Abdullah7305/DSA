#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int ideal = n * (n + 1) / 2;
        int currentSum = 0;
        for (int i = 0; i < n; i++)
        {
            currentSum += nums[i];
        }
        return ideal - currentSum;
    }
};