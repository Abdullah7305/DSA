#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int duplicateNumbersXOR(vector<int> &nums)
{

    int ans = 0;
    unordered_map<int, int> mpp;
    // saving the frequencies first
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 2)
        {
            ans ^= it.first;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 1, 3, 2, 5}; // example input

    int result = duplicateNumbersXOR(nums);

    cout << "XOR of numbers appearing exactly twice: " << result << endl;

    return 0;
}