// Problem link - https://leetcode.com/problems/maximum-subarray/
#include <bits/stdc++.h>
using namespace std;

int Kadane(vector<int> &A){
    for(int i=1; i<A.size(); i++){
        A[i] += A[i-1];
        if(A[i] < 0)  A[i] = 0; 
    }
    return A[*max_element(A.begin(),A.end())];
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
    cout<<"Max SubArray Sum : "<<Kadane(A);
    return 0;
}

/*test case:
5
1 2 2 3 4
OP: 2 5
*/