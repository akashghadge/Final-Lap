/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int earliestTime(vector<vector<int>> &tasks)
    {
        int mn = INT_MAX;
        for (auto val : tasks)
        {
            mn = min(val[0] + val[1], mn);
        }
        return mn;
    }
};
int main()
{
}