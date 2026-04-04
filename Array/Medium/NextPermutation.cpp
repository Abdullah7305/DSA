#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int leastBigger = INT_MAX;
        int pivotIndex = -1;
        int biggerleastIndex = -1;
        for (int i = n - 1; i >= 1; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                pivotIndex = i - 1;
                break;
            }
        }
        if (pivotIndex == -1)
        {
            cout << "True " << endl;
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int j = n - 1; j > pivotIndex; j--)
        {
            if (nums[pivotIndex] < nums[j])
            {
                if (leastBigger > nums[j])
                {
                    leastBigger = nums[j];
                    biggerleastIndex = j;
                }
            }
        }
        swap(nums[pivotIndex], nums[biggerleastIndex]);
        sort(nums.begin() + pivotIndex + 1, nums.end());
    }
};