#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
      vector<string> v(numRows, "");
        int i = 0;
        int n = s.length();
        while(i<n)
        {
            for(int j=0; j<numRows && i<n; j++)
                v[j].push_back(s[i++]);
            for(int k=numRows-2; k>=1 && i<n; k--)
                v[k].push_back(s[i++]);
        }
        string temp="";
        for(auto &x: v)
            temp+=x;
        return temp;
}

int main()
{
    string s = "PAYPALISHIRING";
    int numRows = 4;
    cout << convert(s, numRows) << endl;
    return 0;
}