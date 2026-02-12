#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "-";
    }
}

int main()
{
    vector<int> arr = {4, 1, 3, 9, 7};
    cout << "Selection Sort" << endl;
    selectionSort(arr);
}