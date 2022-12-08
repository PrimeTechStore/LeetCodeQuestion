#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t)
{
    map<char,char> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            if (m.find(t[i]) == m.end())
                m[s[i]] = t[i];
            else
                return false;
        }
        else
        {
            if (m[s[i]] != t[i])
                return false;
        }
    }
}

int main()
{
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s, t) << endl;
}