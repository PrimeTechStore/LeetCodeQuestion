#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int y = 0;

    while (x != 0)
    {
        if (y > INT_MAX / 10)
            return 0;
        else if (y < INT_MIN / 10)
            return 0;
        else
        {
            y *= 10;
            y += x % 10;
            x /= 10;
        }
    }

    return y;
}

int main()
{
    int x = -123;
    cout << reverse(x) << endl;
    return 0;
}