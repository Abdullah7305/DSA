#include <iostream>
#include <vector>
using namespace std;

int minMoves(vector<int> &nums)
{
    int n = nums.size();
    int min = INT_MAX;
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
        }
    }
    // calculate the moves using the min;
    for (int i = 0; i < n; i++)
    {
        moves += nums[i] - min;
    }
    return moves;
}

int main()
{
    vector<int>arr={1,2,3};
    cout<<"Minimum Moves require to make equal array "<<minMoves(arr);
    return 0;
}