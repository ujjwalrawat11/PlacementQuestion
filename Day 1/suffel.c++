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
    int a2[n];
    int k=0;
    int i=0,j=n/2;
    while(i<n/2||j<n){
        a2[k]=a[i];
        k++;
        a2[k]=a[j];
        k++;
        i++;
        j++;

    }
    for (int i = 0; i < n; i++)
    {
        cout << a2[i]<<" ";
    }
}