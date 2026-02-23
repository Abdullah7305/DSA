#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int xorr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        xorr ^= nums[i];
        cout << "Xorr is" << xorr << endl;
    }
    return xorr;
}