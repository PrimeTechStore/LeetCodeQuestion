#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());
    for (auto i : s1)
        if (s2.count(i))
            res.push_back(i);

    return res;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {2, 3, 4, 5, 6};
    vector<int> res = intersection(nums1, nums2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}