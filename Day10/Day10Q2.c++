#include <bits/stdc++.h>
using namespace std;

string ColunoToColuname(int n){
    string colName="";
    while(n>0){
        char c='A'+(n-1)%26;
        colName=c+colName;
        n=(n-1)/26;
    }
    return colName;
}

int main(){

    int n;
    cin>>n;
    string s=ColunoToColuname(n);
    cout<<s<<endl;

}