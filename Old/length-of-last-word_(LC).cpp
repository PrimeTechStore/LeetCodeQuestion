#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.size() - 1, len=0;
    while (i >= 0 && s[i] == ' ') i--;
    int j = i;
    for (i = 0; i <= j; i++)
    {
        if (s.at(i) == ' ')
            len = 0;
        else
            len++;
    }
    return len;
}

int main()
{
    string a = "a";
    cout << lengthOfLastWord(a) << endl;
}