#include<bits/stdc++.h>
using namespace std;

int range(vector<int> v,int l,int r){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
        v[i]=sum;
    }
    if(l==0){
        return v[r];
    }
    else{
        return v[r]-v[l-1];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int left,right;
    cin>>left>>right;
    cout<<range(v,left,right);
    return 0;

}