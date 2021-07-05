#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> flip(vector<vector<int>>& mat){
    for(int i=0;i<mat.size();i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            mat[i][j]=1-mat[i][j];
        }
    }
    return mat;
}

int main(){
    int n,m,x;
    cin>>n>>m;
    vector<vector<int>> mat(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            mat[i].push_back(x);

        }
    }
    flip(mat);
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}