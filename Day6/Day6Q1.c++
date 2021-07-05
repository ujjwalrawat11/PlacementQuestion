#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> v,int n,int m){
    vector<vector<int>> v1(m);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v1[j].push_back(v[i][j]);
        }
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[0].size();j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m,x;
    cin>>n>>m;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            v[i].push_back(x);

        }
    }
    transpose(v,n,m);
}