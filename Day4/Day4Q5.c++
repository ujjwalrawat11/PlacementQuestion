#include <bits/stdc++.h>
using namespace std;

int peakIndex(vector<int>& v){
     return (distance(v.begin(),max_element(v.begin(), v.end())));

}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {   
        cin>>a;
        v.push_back(a);
    }
    cout<<peakIndex(v);
}