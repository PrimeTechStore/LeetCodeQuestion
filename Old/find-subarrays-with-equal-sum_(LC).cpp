#include <bits/stdc++.h>
using namespace std;

#define ll long long
// Given a 0-indexed integer array nums, determine whether there exist two subarrays of
// length 2 with equal sum. Note that the two subarrays must begin at different indices.Given a
// 0-indexed integer array nums, determine whether there exist two subarrays of length 2 with equal sum.
// Note that the two subarrays must begin at different indices.

bool findSubarrays(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
        return false;
    for (int i = 0; i < n - 2; i++)
    {
        int sum = nums[i] + nums[i + 1];
        for (int j = i + 1; j < n - 1; j++)
        {
            int sum2 = nums[j] + nums[j + 1];
            if (sum == sum2)
                return true;
        }
    }
    return false;
}

int main()
{

    ll n = 0;
    cin >> n;
    vector<int> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];

    if (findSubarrays(nums))
        cout << "Yes";
    else
        cout << "No";

    cout << endl;

    return 0;
}