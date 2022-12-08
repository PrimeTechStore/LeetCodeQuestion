#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    vector<int> res;
    res.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
        if (nums[i] != nums[i - 1])
            res.push_back(nums[i]);
    nums = res;
    return res.size();
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int ans = removeDuplicates(nums);
    cout << ans << endl;
}