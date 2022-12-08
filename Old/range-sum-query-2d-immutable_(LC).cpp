#include <bits/stdc++.h>

using namespace std;

class NumMatrix
{
public:
    vector<vector<int>> dp;
    NumMatrix(vector<vector<int>> &matrix)
    {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return;
        // dp = new int[matrix.size() + 1][matrix[0].size() + 1];
        dp.resize(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));

        for (int r = 0; r < matrix.size(); r++)
        {
            for (int c = 0; c < matrix[0].size(); c++)
            {
                dp[r + 1][c + 1] = dp[r + 1][c] + dp[r][c + 1] + matrix[r][c] - dp[r][c];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        return dp[row2 + 1][col2 + 1] - dp[row1][col2 + 1] - dp[row2 + 1][col1] + dp[row1][col1];
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    NumMatrix numMatrix(matrix);
    cout << numMatrix.sumRegion(0, 0, 2, 2) << endl;
    return 0;
}