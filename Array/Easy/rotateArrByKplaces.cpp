#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArrayByK(vector<int> &arr, int d)
{
    d = d % arr.size(); // if d is beiiger then the array size then we make the rotation
    vector<int> temp;
    int n = arr.size();
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }
    print(temp);
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    print(arr);
    int k = n - d; // 7 let say
    for (int i = 0; i < temp.size(); i++)
    {
        arr[k + i] = temp[i];
    }
    print(arr);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    rotateArrayByK(arr, 2);
    return 0;
}