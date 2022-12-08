#include <bits/stdc++.h>

using namespace std;

string addBinary(string a, string b) {
    string res = "";
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        res = char(sum % 2 + '0') + res;
        carry = sum / 2;
    }
    if (carry) res = char(carry + '0') + res;
    return res;
}

int main()
{
    string a="101", b="10";
    cout << addBinary(a, b) << endl;
}