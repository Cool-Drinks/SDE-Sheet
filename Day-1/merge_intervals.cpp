// Problem link - https://leetcode.com/problems/merge-intervals/
#include <bits/stdc++.h>
using namespace std;

void print2D(vector<vector<int>> A)
{
    for (auto i : A)
    {
        cout << i[0] << " " << i[1] << "\n";
    }
}

vector<vector<int>> MergeInterval(vector<vector<int>> &A)
{
    sort(A.begin(), A.end());
    vector<vector<int>> B;
    vector<int> temp = A[0];

    for (auto i : A)
    {
        if (temp[1] >= i[0])
            temp[1] = max(temp[1], i[1]);
        else
        {
            B.push_back(temp);
            temp = i;
        }
    }
    B.push_back(temp);
    return B;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> A;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int a, b;
        cin >> a >> b;
        temp.push_back(a);
        temp.push_back(b);
        A.push_back(temp);
    }
    cout << "Ans is" << endl;
    print2D(MergeInterval(A));
    return 0;
}

/*test case:
4
15 18
1 3
8 10
2 6
*/