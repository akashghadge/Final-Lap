/*
Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Author: Akash Gautam (@akash19july)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        int mx = INT_MAX;
        int ans = 0;
        for (auto val : a)
        {
            if (val < mx)
                mx = val;
            ans = max(ans, val - mx);
            // cout<<mx<<" ";
        }
        return ans;
    }
};
int main()
{
}