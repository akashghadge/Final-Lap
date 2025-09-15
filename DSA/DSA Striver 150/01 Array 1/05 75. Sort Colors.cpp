/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &a)
    {
        int n = a.size(), i = 0, j = 0, k = n - 1;
        while (j <= k)
        {
            if (a[j] == 0)
            {
                swap(a[i++], a[j++]);
            }
            else if (a[j] == 2)
            {
                swap(a[j], a[k--]);
            }
            else
                j++;
        }
    }
};
int main()
{
}