#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int extra;
    int *m;
    cin>>extra;
    m = max_element(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]+extra>=*m)
        {
            cout<<"true"<<" ";
        }
        else{
            cout<<"false"<<" ";
        }
    }
}