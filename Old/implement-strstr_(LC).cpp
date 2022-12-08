#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle) {
    if (needle.empty()) return 0;
    if (haystack.empty()) return -1;
    int i = 0, j = 0;
    for(int i = 0; i < haystack.size(); i++) {
        if (haystack[i] == needle[j]) 
        for(int j = 0; j < needle.size(); j++) {
            if (haystack[i+j] != needle[j]) break;
            if (j == needle.size() - 1) return i;
        }
    }
    return -1;
}

int main()
{
    string a = "hello" , b = "ll";
    cout << strStr(a, b) << endl;
}