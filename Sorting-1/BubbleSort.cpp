#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr)
{
    int n = arr.size();
    int isSwap = false;
    int notSwapped = true;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (isSwap != notSwapped)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "-";
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    cout << "Bubble Short" << endl;
    BubbleSort(arr);
    return 0;
}