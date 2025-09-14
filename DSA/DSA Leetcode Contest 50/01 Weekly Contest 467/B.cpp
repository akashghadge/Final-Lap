/*
A.cpp
Created on: 2024-06-30 10:00:00
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxKDistinct(vector<int> &nums, int k)
    {
        set<int, greater<int>> st(nums.begin(), nums.end());
        vector<int> ans(st.begin(), next(st.begin(), min((int)st.size(), k)));
        return ans;
    }
};
int main()
{
}