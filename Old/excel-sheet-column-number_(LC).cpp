#include <bits/stdc++.h>

using namespace std;

 int titleToNumber(string columnTitle) {
        int result = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            result = result * 26 + columnTitle[i] - 'A' + 1;
        }
        return result;
}

int main()
{
    string columnTitle = "ZY";

    int ans = titleToNumber(columnTitle);
    cout << ans << endl;
}


