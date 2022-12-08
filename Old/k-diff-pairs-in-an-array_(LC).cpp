#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pairs;

int findPairs(vector<int> &nums, int k)
{
    auto cmp = [](pairs a, pairs b)
    {
        if (a.first > a.second)
        {
            swap(a.first, a.second);
        }
        if (b.first > b.second)
        {
            swap(b.first, b.second);
        }
        return a < b;
    };
    set<pairs, decltype(cmp)> Set(cmp);
    pairs myPair;
    for (int i = 0; i < nums.size() - 1; i++)
        for (int j = i + 1; j < nums.size(); j++)
            if (abs(nums[i] - nums[j]) == k)
            {
                myPair = make_pair(nums[i], nums[j]);
                Set.insert(myPair);
            }

    return Set.size();
}

int main()
{
    vector<int> a = {1, 2, 4, 4, 3, 3, 0, 9, 2, 3};
    int k = 3;
    cout << findPairs(a, k);
    return 0;
}