#include<bits/stdc++.h>
using namespace std;   
int main()
{
    string str;
    getline(cin,str);
    int k;
    cin>>k;

    string r="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            k--;
        }
        if(k==0)
            break;
        r=r+str[i];
    }
    cout<<r;
}