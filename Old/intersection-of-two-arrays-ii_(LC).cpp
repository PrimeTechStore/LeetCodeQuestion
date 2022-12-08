#include <bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> num1;
    unordered_map<int, int> num2;
    for (auto i : nums1)
        num1[i]++;
    for (auto i : nums2)
        num2[i]++;
    vector<int> res;
    for (auto i : num1)
    {
        if (num2.count(i.first))
        {
            int count = min(i.second, num2[i.first]);
            for (int j = 0; j < count; j++)
                res.push_back(i.first);
        }
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {2, 3, 4, 5, 6};
    vector<int> res = intersect(nums1, nums2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}