/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &a, int n, vector<int> &b, int m)
    {
        // we start from the end and try to swap on comparision
        int i = n - 1, j = m - 1, k = n + m - 1;
        while (i >= 0 and j >= 0)
        {
            if (a[i] <= b[j])
                swap(b[j--], a[k--]);
            else
                swap(a[i--], a[k--]);
        }
        while (j >= 0)
            swap(b[j--], a[k--]);
    }
};
int main()
{
}