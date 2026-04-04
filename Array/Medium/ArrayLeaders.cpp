#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                ans.push_back(arr[i]);
            }
            else if (arr[i + 1] <= arr[i] && arr[i] >= ans[ans.size() - 1])
            {
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};