#include <iostream>
#include <vector>
using namespace std;

int cost(vector<int> &arr)
{
    // code here
    int n = arr.size();
    int cost = 0;
    int myN = n;
    if (n == 1)
    {
        return 0;
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    // calculating the operations
    for (int i = 0; i < n; i++)
    {

        if (myN > 1)
        {
            cost += min;
        }
        myN--;
    }
    return cost;
}

int main()
{
    vector<int> arr = {4, 3, 2};
    cout << "Min Cost to make size 1 is " << cost(arr) << endl;
    return 0;
}