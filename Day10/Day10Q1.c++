#include <bits/stdc++.h>
using namespace std;
bool validpalin(string s){
   int len=s.length();
        int i=0;
        int j=len-1;
        
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
                
            }
            else{
                return false;
            }
        }
        return true;
}
int main(){
    string s;
    cin>>s;
    bool ans=validpalin(s);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}