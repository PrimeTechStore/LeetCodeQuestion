#include <bits/stdc++.h>

using namespace std;

bool isBadVersion(int ve)
{
    return ve >= 1702766719;
}

int firstBadVersion(int n)
{
    long long int beg,last,mid;
        beg = 1 , last = n;
        long int pos = 1;
        while(beg<=last){
            mid = beg + (last-beg)/2;
            bool x = isBadVersion(mid);
            if(x == true){
                pos = mid;
                last = mid-1;
            }
            else
                beg = mid+1;
        }
        return pos;
}

int main()
{
    int ans = firstBadVersion(2126753390);
    cout << ans << endl;
}