#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = " ",ans="Wins";
        cin >> s;
        int n = s.length();
        for (int i = 0; i <(n/2); i++)
        if(s[i] != s[n-i-1])
        {
            ans = "Loses";
        }
        cout << ans << endl;


    }
    return 0;
}