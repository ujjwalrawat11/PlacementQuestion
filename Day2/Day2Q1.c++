#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    int max = 0;
    int sum;
    int c = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
        if (sum > max)
        {
            max = sum;
            c = i + 1;
        }
    }
    cout<<"Customer "<<c<<" is the richest";
}