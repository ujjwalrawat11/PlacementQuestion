#include <bits/stdc++.h>
using namespace std;
string addBinary(string a,string b){
    int i=a.length()-1;
    int j=b.length()-1;
    string sum="";
    int carry=0;
    while(i>-1||j>-1||carry==1){
        if(i>=0){
            carry+=a[i--]=='1';
        }
        if(j>=0){
            carry+=b[j--]=='1';
        }
        sum=((carry%2)?"1":"0")+sum;
        carry/=2;
    }
    return sum;
}
int main(){
    string a,b;
    cin>>a>>b;
    string sum=addBinary(a,b);
    cout<<sum;
return 0;    
}