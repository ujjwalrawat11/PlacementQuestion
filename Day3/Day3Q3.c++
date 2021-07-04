#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    vector<int> res;
    for (int i = 0; i < n; i = i + 2)
    {
        int fre = arr[i];
        int value = arr[i+1];

        while (fre)
        {
            res.push_back(value);
            fre--;
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i]<<" ";
    }
}