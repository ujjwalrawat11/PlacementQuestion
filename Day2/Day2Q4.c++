#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int ncr(int n)
{
    return n * (n - 1) / 2;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> M;
    for (int i = 0; i < n; i++)
    {

        if (M.find(arr[i]) == M.end())
        {
            M[arr[i]] = 1;
        }
        else
        {
            M[arr[i]]++;
        }
    }
    int count = 0;
    for (auto it : M)
    {
        if (it.second >= 2)
            count += ncr(it.second);
    }
    cout << count;
}