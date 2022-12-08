#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] != val)
            res.push_back(nums[i]);

    nums = res;
    return res.size();
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int ans = removeElement(nums, 1);
    cout << ans << endl;
}