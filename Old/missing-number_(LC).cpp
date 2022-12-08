#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++) {
        sum -= nums[i];
    }
    return sum;
}

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 6};
    cout<<missingNumber(nums);
}