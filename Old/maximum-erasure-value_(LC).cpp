#include <bits/stdc++.h>

using namespace std;

int maximumUniqueSubarray(vector<int> &nums)
{
    vector<int> a(nums.size()+1, 0);

    for(int i=0; i<nums.size(); i++)
        a[i+1] = a[i] + nums[i];
    
    int s=0, ans = INT_MIN;
    vector<int> dp(100001, -1);
    for (int i = 0; i < nums.size(); i++)
    {
        s = max(s, dp[nums[i]]+1);
        ans = max(ans, a[i+1] - a[s]);
        dp[nums[i]] = i;
    }
    
    return ans;

}

int main()
{
    vector<int> nums = {4, 2, 4, 5, 6};
    cout << maximumUniqueSubarray(nums) << endl;
}