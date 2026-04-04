#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &mat)
    {
        int rowSize = mat.size();
        int colSize = mat[0].size();
        vector<int> rowFlag(rowSize);
        vector<int> colFlag(colSize);

        for (int i = 0; i < rowSize; i++)
        {

            for (int j = 0; j < colSize; j++)
            {

                if (mat[i][j] == 0)
                {
                    rowFlag[i] = true;
                    colFlag[j] = true;
                }
            }
        }
        for (int i = 0; i < rowSize; i++)
        {
            for (int j = 0; j < colSize; j++)
            {
                if (rowFlag[i] || colFlag[j])
                {
                    mat[i][j] = 0;
                }
            }
        }
    }
};