#include <bits/stdc++.h>

using namespace std;

vector<string> commonChars(vector<string> &words)
{

}

int main()
{
    vector<string> words = {"bell", "label", "hello"};
    vector<string> res = commonChars(words);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}