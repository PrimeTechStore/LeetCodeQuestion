#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int carry = 0;
    if (digits.size() == 0)
        return {1};
    int n = digits.size() - 1;
    digits[n] += 1;
    if (digits[n] > 9)
    {
        carry = 1;
        digits[n] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            digits[i] += carry;
            carry = 0;
            if (digits[i] > 9)
            {
                carry = 1;
                digits[i] = 0;
            }
            else break;
        }
        if(carry == 1)
        digits.insert(digits.begin(), 1);
    }

    return digits;
}
int main()
{
    vector<int> nums = {9, 9 ,7, 9, 9};

    vector<int> ans = plusOne(nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}