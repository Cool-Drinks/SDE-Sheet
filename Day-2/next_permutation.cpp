// Problem link - https://leetcode.com/problems/next-permutation/
#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &A)
{
    for (auto i : A)
    {
        cout << i << " ";
    }
}

void PermutNext(vector<int> &A)
{
    int flag = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] > A[i - 1] && i - 1 >= 0)
        {
            swap(A[i], A[i - 1]);
            return;
        }
        if (A[i] < A[i - 1] && i - 1 > 0)
        {
            swap(A[i], A[i - 1]);
        }
        if (i == 0)
        {
            reverse(A.begin(), A.end());
            return;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    PermutNext(A);
    cout << "Ans: ";
    printArr(A);
    return 0;
}

/*test case:
5
1 2 2 3 4
OP: 2 5
*/