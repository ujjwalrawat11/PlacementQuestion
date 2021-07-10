#include <bits/stdc++.h>
#include<string>
using namespace std;
string longestCommonSuffix(vector<string> &strs)
{
    string s = "";

    if (strs.empty())
        return s;
    int len = strs[0].length();
    bool  flag;
    for (int i = 0 ;i <len; i++)
    {   
        flag = false;
        for (int j = 1; j < strs.size(); j++)
        {   
            int n = strs[j].length();
            if(strs[0][len -1 -i] != strs[j][ n- 1 -i]){
                goto stop;
            }
        }
        s = s + strs[0][len-1-i];
    }
    stop:
    reverse(s.begin(),s.end());
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
    string s=longestCommonSuffix(strs);
    cout<<s<<endl;
    return 0;
}