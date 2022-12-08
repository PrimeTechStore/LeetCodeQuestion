#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return nums[i];
    }
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    cout << findDuplicate(nums);
    return 0;
}