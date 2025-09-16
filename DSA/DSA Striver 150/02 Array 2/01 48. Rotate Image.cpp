/*
Rotation target:
(i, j) → (j, n-1-i)

Step 1: Transpose
(i, j) → (j, i)

Step 2: Reverse each row
(j, i) → (j, n-1-i)

=> Transpose + Row-Reverse = 90° Clockwise Rotation

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &m)
    {
        for (int i = 0; i < m[0].size(); i++)
        {
            for (int x = i, y = 0; x < m[0].size() && y < m.size(); y++, x++)
            {
                swap(m[x][y], m[y][x]);
            }
        }

        for (int i = 0; i < m.size(); i++)
        {

            for (int j = 0, k = m[0].size() - 1; j < m[0].size() / 2; j++, k--)
            {
                swap(m[i][j], m[i][k]);
            }
        }
    }
};
int main()
{
}