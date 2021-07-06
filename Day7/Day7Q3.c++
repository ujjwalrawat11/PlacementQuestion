#include <bits/stdc++.h>
using namespace std;
void negative(vector<vector<int>> v, int n, int m)
{   
        int c=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(v[i][j] < 0)
                {
                   c++;
                }
            }
        }
        cout<<c;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    negative(v, n, m);
    return 0;
}