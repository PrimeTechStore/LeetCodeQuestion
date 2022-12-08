#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
  vector<int> v1, v2;
  set<int> s1(begin(nums1), end(nums1)), s2(begin(nums2), end(nums2));
  set_difference(begin(s1), end(s1), begin(s2), end(s2), back_inserter(v1));
  set_difference(begin(s2), end(s2), begin(s1), end(s1), back_inserter(v2));
  return {v1, v2};
}

int main()
{
  vector<int> nums1 = {1, 2, 3};
  vector<int> nums2 = {2, 5, 6};
  findDifference(nums1, nums2);
  return 0;
}