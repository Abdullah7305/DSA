// in this problem we have to find the count of the subarray that are equal to the sum
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count = 0;
        unordered_map<int, int> mpp;
        int ps[n];
        ps[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            ps[i] = ps[i - 1] + nums[i];
        }
        for (int i = 0; i < n; i++)
        {

            int check = ps[i] - k;
            if (ps[i] == k)
            {
                count++;
            }
            if (mpp.find(check) != mpp.end())
            {
                count += mpp[check];
            }

            mpp[ps[i]]++;
        }
        return count;
    }
};

int main()
{
    return 0;
}