#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int secondLargest(vector<int> &arr)
{
    int n = arr.size();
    int max = largestElement(arr);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i] && arr[i] < max)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {5, 90, 100, 110, 80};
    cout << "Second max is " << secondLargest(arr);
    return 0;
}