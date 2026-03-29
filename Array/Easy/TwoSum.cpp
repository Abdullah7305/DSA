#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    vector<int> ans(2);
    for (int i = 0; i < n; i++)
    {
        int sum = target - nums[i];
        if (mpp.find(sum) != mpp.end())
        {
            ans[0] = mpp[sum];
            ans[1] = i;
            break;
        }
        mpp[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    vector<int> ans = twoSum(arr,9);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}