#include <bits/stdc++.h>

using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> res;
    if (nums.size() == 0)
        return res;
    int start = nums[0];
    int end = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == end + 1)
        {
            end = nums[i];
        }
        else
        {
            if (start == end)
                res.push_back(to_string(start));
            else
                res.push_back(to_string(start) + "->" + to_string(end));
            start = nums[i];
            end = nums[i];
        }
    }
    if (start == end)
        res.push_back(to_string(start));
    else
        res.push_back(to_string(start) + "->" + to_string(end));
    return res;
}

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    // cout<<summaryRanges(nums);
}