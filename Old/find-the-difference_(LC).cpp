#include <bits/stdc++.h>

using namespace std;

char findTheDifference(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i=0; i < t.size(); i++)
        if (s[i] != t[i])
            return t[i];
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << findTheDifference(s, t) << "\n";
    return 0;
}