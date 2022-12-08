#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    map<int, int> cou;

    for (int i = 0; i < nums.size(); i++)
        cou[nums[i]]++;

    multimap<int, int> MM;
    for (auto &it : cou)
        MM.insert({it.second, it.first});

    return MM.rbegin()->second;
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int ans = majorityElement(nums);
    cout << ans << endl;
}