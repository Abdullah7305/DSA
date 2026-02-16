#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int j = 0;
    int i = 0;
    while (i < n && j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else if (arr[i] != arr[j])
        {
            swap(arr[i + 1], arr[j]);
            i++;
            j++;
        }
    }
    
    return i+1;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    removeDuplicate(arr);
   
    
    return 0;
}