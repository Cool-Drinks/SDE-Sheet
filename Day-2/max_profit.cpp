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

int MaxProfit(vector<int> &A)
{
    int profit = 0;
    int lprofit = 0;
    int l;
    l = 0;
    for (int i = 0; i < A.size() - 1; i++)
    {
        lprofit = A[i + 1] - A[l];
        if (lprofit < 0)
        {
            lprofit = 0;
            l = i + 1;
        }
        if (lprofit > profit)
            profit = lprofit;
    }
    return profit;
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
    cout << "Ans: " << MaxProfit(A);
    //printArr(A);
    return 0;
}

/*test case:
6
7 1 5 3 6 4
OP: 5
*/