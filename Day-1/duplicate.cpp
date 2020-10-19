// Problem link - https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;

int FloydAlgo(vector<int> &A)
{
    int hare = A[0];
    int tor = A[0];

    do
    {
        tor = A[tor];
        hare = A[A[hare]];
    } while (tor != hare);

    tor = A[0];
    while (hare != tor)
    {
        hare = A[hare];
        tor = A[tor];
    }

    return tor;
}

int EasyAlgo(vector<int> &A)
{
    for (int i = 0; i < A.size(); i++)
    {
        if (A[abs(A[i]) - 1] > 0)
            A[abs(A[i]) - 1] *= -1;
        else
            return abs(A[i]);
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
    cout << "Floyd Algo:" << FloydAlgo(A) << "\n";
    cout << "Easy Algo:" << EasyAlgo(A) << "\n";
    return 0;
}

/*test case:
4
3 3 1 2
*/
