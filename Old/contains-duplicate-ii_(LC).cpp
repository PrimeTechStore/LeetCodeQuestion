#include <bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size(); i++)
        for (int j = i; j < i + k && j < nums.size(); j++)
            if (nums[i] == nums[j])
                return true;

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1, 2, 3};
    int k = 2;
    cout << containsNearbyDuplicate(nums, k);
}