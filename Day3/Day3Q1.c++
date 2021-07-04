#include <bits/stdc++.h>
using namespace std;
int binaryS(int *arr, int n, int key){
    for (int i = 0; i < n; i++){
        if (key == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a1[n];
    int a2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
        a2[i] = a1[i];
    }
    sort(a2, a2 + n);
    for (int i = 0; i < n; i++)
    {
        cout <<binaryS(a2, n, a1[i])<<" ";
    }
}