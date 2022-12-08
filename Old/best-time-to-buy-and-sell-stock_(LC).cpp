#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxpro =0, minprices=prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        minprices = min(minprices, prices[i]);
        maxpro = max(maxpro, (prices[i] - minprices));
    }
    
    return maxpro;
}

int main()
{
    vector<int> prices = {10, 7, 5, 8, 11, 9};
    cout << maxProfit(prices);
}