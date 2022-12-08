#include <bits/stdc++.h>

using namespace std;

int removePalindromeSub(string s)
{
    if (s.size() == 0)
        return 0;
    if (s.size() == 1)
        return 1;
    if (s == string(s.rbegin(), s.rend()))
        return 1;
    return 2;
}

int main()
{
    string s = "ababa";
    cout << removePalindromeSub(s) << endl;
    return 0;
}