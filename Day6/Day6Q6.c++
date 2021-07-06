#include <bits/stdc++.h>
using namespace std;

void surface(vector<vector<int>> vect)
{
    int area = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[0].size(); j++)
        {
            if (vect[i][j] == 0)
                continue;
            area += 6 * vect[i][j] - 2 * (vect[i][j] - 1);
            
            if (i + 1 < vect.size())
                area -= 2 * min(vect[i][j], vect[i + 1][j]);
            
            if (j + 1 < vect.size())
                area -= 2 * min(vect[i][j], vect[i][j + 1]);
        }
    }

    cout<<area;
}

int main()
{
    int n;
    cin >> n;
    int x;
    vector<vector<int>> vect(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            vect[i].push_back(x);
        }
    }
    surface(vect);
}