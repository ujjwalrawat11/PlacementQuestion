#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (auto x : s)
    {
        if (x == '(' || x == '{' || x == '[')
            st.push(x);
        else
        {
            if (st.empty())
                return false;

            if ((x == '}' && st.top() == '{') || (x == ')' && st.top() == '(') || (x == ']' && st.top() == '['))
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}
int main()
{
    string s;
    cin >> s;
    isValid(s) == 1 ? cout << "true" : cout << "false";
    return 0;
}