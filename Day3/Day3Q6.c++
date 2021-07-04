#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        words.push_back(a);
    }
    string allow;
    cin >> allow;

    unordered_map<char, int> m;
    for (auto c : allow)
    {
        m[c] = 1;
    }
    int ans = 0;
    for (auto s : words)
    {
        int f = 1;
        for (auto c : s)
        {
            if (m[c] = 0)
            {
                f = 0;
                break;
            }
        }
        if(f==1){
            ans++;
        }
    }
    cout<<ans;
}