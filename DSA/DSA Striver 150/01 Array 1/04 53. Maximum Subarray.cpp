/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &a)
    {
        int sm = 0, ans = INT_MIN;
        for (int i = 0; i < a.size(); i++)
        {
            if (sm < 0)
                sm = 0;
            sm += a[i];
            ans = max(sm, ans);
        }
        return ans;
    }
};
int main()
{
}