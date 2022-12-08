#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> res;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        vector<int> a = {};
        for (int j = 0; j < i; j++)
            if (j == 0 || j == (i - 1))
                a.push_back(1);
            else
                a.push_back(res[i-2][j - 1] + res[i-2][j]);
        res.push_back(a);
    }

    for (auto i : res)
        for (auto j : i)
            cout << j << endl;
    return 0;
}