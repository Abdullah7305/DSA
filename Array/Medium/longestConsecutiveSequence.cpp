#include <iostream>
#include <vector>
#include<set>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int count = 0;
        int num;
        int maxCount = 0;
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }
        for (int it : st)
        {
            num = it;
            if (st.find(num + 1) != st.end())
            {
                count++;
            }
            else if (st.find(num + 1) == st.end())
            {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        return maxCount + 1;
    }
};