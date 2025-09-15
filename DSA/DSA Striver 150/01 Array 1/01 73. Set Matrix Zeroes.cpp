/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &arr)
    {
        int n = arr.size(), m = arr[0].size();
        vector<int> row(n, 1), col(m, 1);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j] == 0)
                    row[i] = 0, col[j] = 0;

        for (int i = 0; i < n; i++)
        {
            if (row[i] == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    arr[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (col[i] == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    arr[j][i] = 0;
                }
            }
        }
    }
};
int main()
{
}