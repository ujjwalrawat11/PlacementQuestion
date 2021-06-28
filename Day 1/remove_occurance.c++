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
    int key;
    cin>>key;
    int i=0,j=n-1;
    while (i<j)
    {

        if(a[i]==key && a[j]==key){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j--;
        }
        if(a[i]==key){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        else if(a[i]!=key){
            i++;
        }
    }
    for (int k = 0; k < i+1; k++)
    {
        cout << a[k]<<" ";
    }
}