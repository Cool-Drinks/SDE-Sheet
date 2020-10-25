// Problem link - https://leetcode.com/problems/pascals-triangle/
#include <bits/stdc++.h>
using namespace std;

void print2D(vector<vector<int>> matrix)
{
    for (auto i : matrix){
        for(auto j:i){
        cout << j << " ";
        }
        cout<<endl;
    }
}

vector<vector<int>> Pascal(int n){
    vector<vector<int>> v;
    vector<int> k;  k.push_back(1);
    v.push_back(k); 

    for(int i=1 ;i<=n ;i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j=1; j<=i-1; j++){
            temp.push_back(v[i-1][j-1]+v[i-1][j]);
        }
        temp.push_back(1);
        v.push_back(temp);
    }

    return v;
}

int main()
{
    int n;
    cin >> n;
    print2D(Pascal(n));
    return 0;
}

/*test case:
5
*/