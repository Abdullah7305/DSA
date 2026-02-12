#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int j = i;
        cout << "The value of outer j is " << j << endl;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            cout << "Value of i is " << i << endl;
            cout << "Value of j is " << j << endl;
            cout << "Value of j-1 is " << j - 1 << endl;
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "-";
    }
}

int main()
{
    cout << "Insertion Sort" << endl;
    vector<int> arr = {4, 1, 3, 9, 7};
    InsertionSort(arr);
    return 0;
}