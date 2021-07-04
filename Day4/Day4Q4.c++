#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> word;
    string a;
    for (int i = 0; i < n; i++)
    {   
        cin>>a;
        word.push_back(a);
    }
    set<string> s;
    vector<string> v{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                     "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                     "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string str="";
    for(auto x: word){
        str="";
        for(auto ch : x){
            str=str+v[ch-'a'];
        }
        s.insert(str);
    }
    cout<<s.size();

}