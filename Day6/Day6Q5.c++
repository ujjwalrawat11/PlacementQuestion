#include<bits/stdc++.h>
using namespace std;

int area(vector<vector<int>> v,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        int a=*max_element(v[i].begin(),v[i].end());
        sum+=a;
    }
    int k=0;
    for(int i=0;i<n;i++){
        int m=0;
        for(int j=0;j<n;j++){
            m=max(m,v[j][i]);
            if(v[i][j]==0){
                k++;
            }

        }
        sum+=m;
    }
    int ans=sum+pow(n,2)-k;
    return ans;

}

 int main(){
     int n,m;
     cin>>n>>m;
     vector<vector<int>> v(n);
     int x;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>>x;
             v[i].push_back(x);
         }
     }

     cout<<area(v,n)<<endl;

 }