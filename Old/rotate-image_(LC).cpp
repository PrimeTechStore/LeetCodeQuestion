#include <bits/stdc++.h>
using namespace std;

#define ll long long

void rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> res(matrix[0].size(), vector<int>(matrix.size()));
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            res[j][n - 1 - i] = matrix[i][j];
        }
        if (a.size() != 0)
            res.push_back(a);
    }

    matrix = res;
}

int main()
{
    //[[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
    int n = 4;
    vector<vector<int>> a = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    rotate(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << endl;
    }
    return 0;
}