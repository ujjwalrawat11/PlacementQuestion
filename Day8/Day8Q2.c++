#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string s = "";

    if (strs.empty())
        return s;
    int len = strs[0].length();
    for (int i = 0; i < len; i++)
    {
        bool flag = true;
        for (int j = 0; j < strs.size(); j++)
        {
            if (strs[j].length() < len)
                len = strs[j].length();
            if (strs[j][i] != strs[0][i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            s += strs[0][i];
        else
            break;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    string s=longestCommonPrefix(strs);
    cout<<s<<endl;
    return 0;
}