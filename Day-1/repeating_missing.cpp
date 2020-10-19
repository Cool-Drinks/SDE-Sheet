// Problem link - https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
#include <bits/stdc++.h>
using namespace std;


void FindNums(vector<int> &A){
    for(int i=0; i<A.size() ;i++)
    {
        if(A[abs(A[i]) - 1] > 0)   
            A[abs(A[i]) -1] *= -1;
        else 
             cout<<"Repeating Number : "<<A[i]<<"\n";  
    }
    for(int i=0; i<A.size() ;i++){
        if(A[i] > 0)    cout<<<"Missing Number : "<i+1<<"\n";
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
    FindNums(A);
    return 0;
}

/*test case:
5
1 2 2 3 4
OP: 2 5
*/