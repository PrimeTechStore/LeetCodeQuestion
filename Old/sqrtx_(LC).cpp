#include <bits/stdc++.h>

using namespace std;

int mySqrt(int x) {
    int l = 0, r = x;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (mid * mid <= x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return r;
}

int main()
{
    int x = 8;
    cout << mySqrt(x) << endl;
}