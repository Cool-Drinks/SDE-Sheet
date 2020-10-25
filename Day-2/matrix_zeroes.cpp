// Problem link - https://leetcode.com/problems/set-matrix-zeroes/
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

void ZeroMatrix(vector<vector<int>> &matrix){
    int row0 = 1; int col0 = 1;
    int N = matrix.size();
    int M = matrix[0].size();
    
    for(int i=0; i<N ;i++){
        for(int j=0; j<M; j++){
            if(i == 0 && !matrix[i][j])  row0 = 0;
            if(j == 0 && !matrix[i][j])  col0 = 0;
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            } 
        }
    }

    for(int i=1; i<N ;i++){
        for(int j=1; j<M; j++){
            if(!matrix[0][j] || !matrix[i][0])    matrix[i][j]=0;
        }
    }
    
    if(!row0){
        for(int i=0; i<M; i++){
            matrix[0][i] = 0;
        }
    }

    if(!col0){
        for(int i=0; i<N; i++){
            matrix[i][0] = 0;
        }
    }

}

int main()
{
    int n,m;
    cin >> n>>m;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for(int j = 0; j<m; j++)
        {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    cout << "Ans is" << endl;
    ZeroMatrix(matrix);
    print2D(matrix);
    return 0;
}

/*test case:
5
1 2 2 3 4
OP: 2 5
*/