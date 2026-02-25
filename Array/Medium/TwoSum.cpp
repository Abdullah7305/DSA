#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> TwoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int>ans(2);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int sum = target - nums[i];
        if (mpp.find(sum) != mpp.end())
        {
            cout << "Index:" << mpp[sum] << endl;
            cout << "Index:" << i << endl;
            ans[0] = mpp[sum];
            ans[1] = i;
        }
        mpp[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    TwoSum(nums, target);
    return 0;
}