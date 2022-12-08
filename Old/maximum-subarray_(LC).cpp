#include <bits/stdc++.h>
using namespace std;

#define ll long long

int maxSubArray(vector<int> &nums)
{
    int mainMax = INT_MIN, max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        max += nums[i];

        if (mainMax < max)
            mainMax = max;

        if (max < 0)
            max = 0;
    }

    return mainMax;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // for (int i = 0; i < n; i++)
    //     cin >> nums[i];

    cout << maxSubArray(nums);
    return 0;
}