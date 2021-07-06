#include <bits/stdc++.h>
using namespace std;

int special(vector<vector<int>> &v)
{
    int k = 0;
    
    for (int i = 0; i < v.size(); i++)
    {
        int min = INT_MAX, max = INT_MIN;
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] < min)
            {
                min = v[i][j];
                k = j;
            }
        }
        
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j][k] > max)
            {
                max = v[j][k];
            }
        }
    if(max==min){
        return min;
        break;
    }
    }
    return 0;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    cout<<special(v);
}