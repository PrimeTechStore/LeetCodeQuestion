#include <bits/stdc++.h>
using namespace std;

void slove(vector<int> &candidates, int target, int idx, vector<int> &ds, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = idx; i < candidates.size(); i++)
    {
        if (i > idx && candidates[i] == candidates[i - 1])
            continue;
        if (candidates[i] > target)
            break;

        ds.push_back(candidates[i]);
        slove(candidates, target - candidates[i], i + 1, ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<int> ds;
    vector<vector<int>> ans;
    slove(candidates, target, 0, ds, ans);
    return ans;
}

int main()
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> ans = combinationSum2(candidates, target);
    for (auto v : ans)
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}