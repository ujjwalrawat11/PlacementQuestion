#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    string arr2[n]; 
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    } 
    string arr3[n];
    int i=0;
    while(i<n){
        arr3[i]=arr2[arr1[i]];
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }

}