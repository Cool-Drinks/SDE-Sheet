// Problem link - https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &A,vector<int> &B){
    
}

int main()
{
    int n;
    cin >> n,m;
    vector<int> A,B;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        B.push_back(temp);
    }
    Merge(A,B);
    return 0;
}

/*test case:
5
1 2 2 3 4
OP: 2 5
*/