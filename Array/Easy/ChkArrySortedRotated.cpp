#include <iostream>
#include <vector>
using namespace std;

bool chkSortedRotated(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (count == 0)
    {
        return true;
    }
    else if (count == 1 && arr[0] >= arr[n - 1])
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    bool yes = chkSortedRotated(arr);
    if (yes)
    {
        cout << "The array is sorted or either rotated" << endl;
    }
    else
    {
        cout << "No the array is not sorted or either rotated" << endl;
    }
    return 0;
}