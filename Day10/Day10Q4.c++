#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

string ReverseVowel(string s)
{
    int len = s.length();
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        while (left < right && !isVowel(s[left]))
        {
            left++;
        }
        while (left < right && !isVowel(s[right]))
        {
            right--;
        }
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    string ans = ReverseVowel(s);
    cout << ans;
}