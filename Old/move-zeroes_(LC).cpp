#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] != 0)
            res.push_back(nums[i]);
    
    for (int i = res.size(); i < nums.size(); i++)
        res.push_back(0);
    
    nums = res;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
    return 0;
}