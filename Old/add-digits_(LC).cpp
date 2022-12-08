#include <bits/stdc++.h>

using namespace std;

int addDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        if (sum >= 10)
            sum = (sum % 10) + 1;
        num /= 10;
    }
    return sum;
}

int main()
{
    cout << addDigits(38) << "\n";
    return 0;
}