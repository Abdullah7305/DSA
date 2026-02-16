#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr)
{
    int n = arr.size();
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int> arr = {10, 60, 120, 50, 90, 34};
    cout << "Max Number is " << largestElement(arr)<<endl;
    return 0;
}