#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    if (matrix.empty())
        return ans;
    int m = matrix.size(), n = matrix[0].size();
    int a = 0, b = 0, c = m - 1, d = n - 1;
    for (int z = 0; z < m * n;)
    {
        for (int i = b; i <= d; i++, z++)
            if (z < m * n)
                ans.push_back(matrix[a][i]);
        for (int i = a + 1; i <= c; i++, z++)
            if (z < m * n)
                ans.push_back(matrix[i][d]);
        for (int i = d - 1; i >= b; i--, z++)
            if (z < m * n)
                ans.push_back(matrix[c][i]);
        for (int i = c - 1; i > a; i--, z++)
            if (z < m * n)
                ans.push_back(matrix[i][b]);

        a++;
        b++;
        c--;
        d--;
    }

    return ans;
}

int main()
{
    int m, n;
    // cin >> m >> n;
    // vector<vector<int>> matrix(m, vector<int>(n));
    // for (int i = 0; i < m; i++)
    //     for (int j = 0; j < n; j++)
    //         cin >> matrix[i][j];
    //[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> ans = spiralOrder(matrix);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ",";

    return 0;
}