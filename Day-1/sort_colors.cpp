// Problem link - https://leetcode.com/problems/sort-colors/
#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &A)
{
    for (auto i : A)
    {
        cout << i << " ";
    }
}

void sortColor(vector<int> &A)
{
    int arr[3] = {0};
    for (auto i : A)
    {
        switch (i)
        {
        case 0:
            arr[0]++;
            break;
        case 1:
            arr[1]++;
            break;
        case 2:
            arr[2]++;
            break;
        }
    }
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        while (arr[i]--)
        {
            A[k] = i;
            k++;
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

    sortColor(A);
    printArr(A);

    return 0;
}

/*test case:

*/