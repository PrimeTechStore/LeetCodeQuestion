#include <bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) return false;
        bool valid = true;
        int i =1;
        while(arr[i-1] < arr[i]&& i < arr.size())
        i++;

        while (arr[i-1] > arr[i] && i < arr.size())
        i++;

        return (i == arr.size());
    }

int main()
{
    vector<int> s = {1,2,3,4,5,6,7,8,5,9};
    cout << validMountainArray(s) << "\n";
    return 0;
}