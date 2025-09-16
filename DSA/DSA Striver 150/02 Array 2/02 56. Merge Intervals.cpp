/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &a)
    {
        vector<vector<int>> ans;
        sort(a.begin(), a.end(), [](auto f, auto s)
             {
            if(f[0]==s[0]) return f[1]>s[1];
            return f[0]<s[0]; });
        stack<pair<int, int>> st;
        for (auto curr : a)
        {
            if (st.size() == 0)
            {
                st.push({curr[0], curr[1]});
            }
            else if (st.top().second >= curr[0])
            {
                st.top().second = max(st.top().second, curr[1]);
            }
            else
            {
                st.push({curr[0], curr[1]});
            }
        }
        while (st.size())
        {
            auto tp = st.top();
            ans.push_back({tp.first, tp.second});
            st.pop();
        }
        return ans;
    }
};
int main()
{
}