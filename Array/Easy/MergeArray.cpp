#include <iostream>
#include <vector>
using namespace std;

vector<int> mergerArrays(vector<int> &a, int m, vector<int> &b, int n)
{

    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < m && j < n)
    {
        // cout << "I worked" << endl;
        if (a[i] <= b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            ans.push_back(b[j]);
            j++;
        }
    }

    while (i < m)
    {
        ans.push_back(a[i]);
        i++;
    }

    while (j < n)
    {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5};
    vector<int> ans = mergerArrays(a, 5, b, 5);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}