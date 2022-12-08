#include <bits/stdc++.h>

using namespace std;

void reverseString(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - 1 - i]);
}

string reverseWords(string s)
{
    string res;
    
}

int main()
{
    string a = "hi my name is jason";
    cout << reverseWords(a) << endl;
}