#include <bits/stdc++.h>
using namespace std;
void NoOfHospital(vector<vector<int>> v, int n, int m, int k)
{   
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if(v[i][j] == 0)
                {
                    if (v[i][j - 1] == 1)
                    {
                        cout << i<<" ";
                        k--;
                    }
                }
                if(k==0)
                    break;
            }
        }
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
    int k;
    cin >> k;
    NoOfHospital(v, n, m, k);
    return 0;
}