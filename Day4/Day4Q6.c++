#include <bits/stdc++.h>
using namespace std;

 bool static func(int a,int b){
        if ( __builtin_popcount(a)== __builtin_popcount(b))
            return a<b;
        return __builtin_popcount(a)<__builtin_popcount(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
          sort(arr.begin(),arr.end(),func);
        return arr;
    }
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int a;
    for (int i = 0; i < n; i++)
    {   
        cin>>a;
        arr.push_back(a);
    }
    sortByBits(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}