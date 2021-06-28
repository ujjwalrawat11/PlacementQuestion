#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0,j=1;
    while(j<n){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
            j++;
        }
        else if(a[i]==a[j]){
            j++;
        }
    }
    for (int k = 0; k < i+1; k++)
    {
        cout << a[k]<<" ";
    }
}