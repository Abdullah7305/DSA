#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int maxSum = nums[0];
    if (n == 1)
    {
        return nums[0];
    }
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-1, 2, 3, -5};
    cout << "Max sum is " << maxSubArray(arr);
    return 0;
}