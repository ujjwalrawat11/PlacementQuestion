#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>> v1, vector<vector<int>> v2)
{
    int k = 4;
    while (k--)
    {
        reverse(v1.begin(), v1.end());
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v1.size(); j++)
            {
                swap(v1[i][j], v1[j][i]);
            }
        }
        
        if (v1 == v2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v1(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v1[i][j];
        }
    }

    vector<vector<int>> v2(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v2[i][j];
        }
    }
    bool s = solve(v1, v2);
    if (s)
    {
        cout << "true";
    }
    else
        cout << "false";
    return 0;
}