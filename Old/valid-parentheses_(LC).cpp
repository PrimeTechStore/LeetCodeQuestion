#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    // map <string, vector<string> >
    int bkt1 = 0, bkt2 = 0, bkt3 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            bkt1++;
        if (s[i] == '{')
            bkt2++;
        if (s[i] == '[')
            bkt3++;

        if (s[i] == ')')
            bkt1--;
        if (s[i] == '}')
            bkt2--;
        if (s[i] == ']')
            bkt3--;
    }
    return (!bkt1 && !bkt2 && !bkt3);
}

int main()
{
    string s;
    cin >> s;
    cout << isValid(s) << endl;
}