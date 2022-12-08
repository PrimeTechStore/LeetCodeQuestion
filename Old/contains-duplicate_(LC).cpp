#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> setc;
    for (auto &&i : nums)
    {
        if (setc.count(i) == 1)
            return true;
        setc.insert(i);
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    if (containsDuplicate(nums))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}