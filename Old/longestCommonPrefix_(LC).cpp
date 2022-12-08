#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> str = {"dog","racecar","car"};

    string a = str[0];
    string count;
    for (int i = 1; i < str.size(); i++)
    {
        for (int j = 0; j < a.length(); j++)
        {
            if (str[i][j] != a[j])
            {
                a = a.substr(0, j);
                break;
            }
        }
    }
    cout << a << endl;
    return 0;
}