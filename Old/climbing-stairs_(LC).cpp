#include <bits/stdc++.h>

using namespace std;
int climbStairs(int n)
{
    int v[46];
    v[1] = 1;
    v[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    return v[n];
}

int main()
{
    int x = 8;
    cout << climbStairs(x) << endl;
}