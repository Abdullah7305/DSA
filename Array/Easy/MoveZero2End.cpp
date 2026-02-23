#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    int j = 1;
    if (n == 1)
    {
        return;
    }
    while (i < n && j < n)
    {
        if (arr[i] != 0)
        {
            i++;
        }
        if (arr[j] == 0)
        {
            j++;
        }
        else if (j < i)
        {
            j++;
        }
        else if (i < n && j < n)
        {
            if (arr[i] == 0 && arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}