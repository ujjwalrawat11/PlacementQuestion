#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m){
            return false;
        }
        vector<int> v(26);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=0){
                return false;
            }   
        }  
    return true;
    }
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    bool ans=isAnagram(s,t);
    if(ans){
        cout<<"true";
    }
    else
        cout<<"false"; 

}