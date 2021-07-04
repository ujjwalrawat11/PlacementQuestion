#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
    cin>>n;
    int arr[n];
    int s[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s[i]=arr[i];
    }
    sort(s,s+n);
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=s[i]){
            c++;
        }
    }
    cout<<c;
}