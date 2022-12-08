#include <bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2)
{
    if (str1.length() < str2.length())
        return gcdOfStrings(str2, str1);
    if (str2.length() == 0)
        return str1;
    if (str1.substr(0, str2.length()) == str2)
        return gcdOfStrings(str1.substr(str2.length()), str2);
    return "";
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << gcdOfStrings(str1, str2) << endl;
    return 0;
}