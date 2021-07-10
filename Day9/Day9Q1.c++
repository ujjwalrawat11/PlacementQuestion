#include <bits/stdc++.h>
using namespace std;

int RtoI(char s){
    switch (s)
    {
    case 'I': return 1;
    case 'V':return 5;
    case 'X':return 10;
    case 'L':return 50;
    case 'C':return 100;
    case 'D':return 500;
    case 'M':return 1000;
    }
    return 0;
}
int RomanToInt(string s){
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(RtoI(s[i])<RtoI(s[i+1])){
            sum=sum+RtoI(s[i+1])-RtoI(s[i]);
            i++;
        }
        else{
            sum=sum+RtoI(s[i]);
        }
    }
    return sum;
}

int main(){
    string s;
    cin>>s;
    cout<<RomanToInt(s)<<endl;
    return 0;
}