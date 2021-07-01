#include <bits/stdc++.h>
using namespace std;
void intersection(map<int, int> m1, map<int, int> m2)
{
    for (auto i = m1.begin(); i != m1.end(); i++)
    {
        if (m2.find(i->first) != m2.end())
        {
            cout << i->first << " ";
        }
    }
}
int main()
{
    map<int, int> m;
    map<int, int> m1;
    int n;
    cin >> n;
    int data, i = 1;
    while (n--)
    {
        cin >> data;
        m.insert(pair<int, int>(data, i));
        i++;
    }
    cin >> n;
    i = 1;
    while (n--)
    {
        cin >> data;
        m1.insert(pair<int, int>(data, i));
        i++;
    }
    intersection(m, m1);

    return 0;
}