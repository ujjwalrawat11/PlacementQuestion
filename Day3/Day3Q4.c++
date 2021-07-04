#include <bits/stdc++.h>
using namespace std;
void decode(int *arr, int n , int first){
    cout<<first<<" ";
    for(int i =0 ; i < n ;i++){
        first = first^arr[i];
        cout<<first<<" ";
        
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first ;
    cin>>first;
    decode(arr,n,first);    
}