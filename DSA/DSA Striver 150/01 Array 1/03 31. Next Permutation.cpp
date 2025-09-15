/*

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &A)
    {
        int n = A.size();

        int ind = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (A[i] < A[i + 1])
            {
                // index i is the break point
                ind = i;
                break;
            }
        }

        // If  point does not exist:
        if (ind == -1)
        {
            reverse(A.begin(), A.end());
            return;
        }

        // Step 2: Find the next greater element
        //         and swap it with arr[ind]:

        for (int i = n - 1; i > ind; i--)
        {
            if (A[i] > A[ind])
            {
                swap(A[i], A[ind]);
                break;
            }
        }

        // Step 3: reverse the right half:
        reverse(A.begin() + ind + 1, A.end());
    }
};
int main()
{
}