#include <bits/stdc++.h>
using namespace std;

void reshape(vector<vector<int>> v, int n, int m, int r, int c)
{
    vector<vector<int>> v1(r);
    if ((n * m) == (r * c))
    {
        int a = 0, b = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[0].size(); j++)
            {
                if (b == c)
                {
                    a++;
                    b = 0;
                }
                v1[a].push_back(v[i][j]);
                b++;
            }
        }
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v1[0].size(); j++)
            {
                cout << v1[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;

        }
    }
}

int main()
{
    int n, m, x;
    cin >> n >> m;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }
    int r, c;
    cin >> r >> c;
    reshape(v, n, m, r, c);
}