#include <bits/stdc++.h>
using namespace std;

#define ll long long
char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

string fromDeci(string &res, int base, int inputNum)
{
    int index = 0;
    while (inputNum > 0)
    {
        res.push_back(reVal(inputNum % base));
        index++;
        inputNum /= base;
    }
    reverse(res.begin(), res.end());

    return res;
}

bool isPalindrome(string &res)
{
    int n = res.size();
    for (int i = 0; i < n / 2; i++)
        if (res[i] != res[n - i - 1])
            return false;
    return true;
}

bool isStrictlyPalindromic(int n)
{
    string res = "";
    for (int i = 2; i <= n - 2; i++)
    {
        res = "";
        fromDeci(res, i, n);
        if (!isPalindrome(res))
            return false;
    }
    return true;
}

int main()
{
    int inputNum = 0;
    cin >> inputNum;

    if (isStrictlyPalindromic(inputNum))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}