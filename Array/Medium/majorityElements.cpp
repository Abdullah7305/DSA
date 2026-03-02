#include <iostream>
#include <vector>
using namespace std;

int majorityEleemnts(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    int ans = 0;
    if (count == 0)
    {
        count = 1;
        ans = arr[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            count++;
        }
        if (arr[i] != ans)
        {
            count--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {6, 5, 5};
    cout << "answer is " << majorityEleemnts(arr);
    return 0;
}