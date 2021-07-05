#include<bits/stdc++.h>
using namespace std;

bool special(vector<vector<int>> mat){
   
   for(int i=0;i<mat.size();i++){
       for(int j=0;j<mat[0].size();j++){
           if(i>0 && j>0 && mat[i-1][j-1]!=mat[i][j]){
               return false;
           }
       }
   }
   return true;
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
    bool t=special(mat);
    if(t){
        cout<<endl<<"special";
    }
    else{
        cout<<endl<<"Not special";
    }
}