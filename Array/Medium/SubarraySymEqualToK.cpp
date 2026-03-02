#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subArraySumEqualK(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    int length = 0;
    int ps[n];
    ps[0] = arr[0];
    // filling the prefixSum first
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ps[i] == k)
        {
            length = i + 1;
        }
        if (mpp.find(ps[i] - k) != mpp.end())
        {
            length = max(i - mpp[ps[i] - k], length);
            length = length + 1;
        }
        if (mpp.find(ps[i] - k) == mpp.end())
        {
            mpp[ps[i]] = i;
        }
    }
    return length;
}

int main()
{
    vector<int> arr = {-5, 8, -14, 2, 4, 12};
    // == == == == == {94,  61,  48, 88,  6,  100, 67,  54, 94,  12};
    cout << "The length is =>" << subArraySumEqualK(arr, -5);
    return 0;
}