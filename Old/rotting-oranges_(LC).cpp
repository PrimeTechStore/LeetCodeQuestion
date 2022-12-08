#include <bits/stdc++.h>
using namespace std;

#define ll long long

int orangesRotting(vector<vector<int>> &grid)
{
    bool found = false, changed = true;
    int m = grid.size(), n = grid[0].size();
    int co = 0;

    while (changed)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 2)
                {
                    found = true;
                    if (j < n - 1)
                        if (grid[i][j + 1] == 0)
                        {
                            changed = true;
                            grid[i][j + 1] = 2;
                        }
                    if (j > 0)
                        if (grid[i][j - 1] == 0)
                        {
                            changed = true;
                            grid[i][j - 1] = 2;
                        }
                    if (i < n - 1)
                        if (grid[i + 1][j] == 0)
                        {
                            changed = true;
                            grid[i + 1][j] = 2;
                        }
                    if (i > 0)
                        if (grid[i - 1][j] == 0)
                        {
                            changed = true;
                            grid[i - 1][j] = 2;
                        }
                }
            }
        }
        co++;
    }
    return co;
}

int main()
{
    return 0;
}