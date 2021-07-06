#include <bits/stdc++.h>
using namespace std;

int numRookCaptures(vector<vector<char>> board)
{
    int flag = false;
    int x, y, i, j;
    vector<vector<int>> bishop;
    vector<vector<int>> pawn;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (board[i][j] == 'r')
            {
                x = i;
                y = j;
                goto find;
            }
        }
    }

find:
    int attack = 0;

    for (j = y; j >= 0; j--)
    {
        if (board[x][j] == 'p')
        {
            attack++;
            break;
        }
        else if (board[x][j] == 'b')
            break;
    }

    for (j = y; j < 8; j++)
    {
        if (board[x][j] == 'p')
        {
            attack++;
            break;
        }
        else if (board[x][j] == 'b')
            break;
    }

    for (i = x; i >= 0; i--)
    {
        if (board[i][y] == 'p')
        {
            attack++;
            break;
        }
        else if (board[i][y] == 'b')
            break;
    }

    for (i = x; i < 8; i++)
    {
        if (board[i][y] == 'p')
        {
            attack++;
            break;
        }
        else if (board[i][y] == 'b')
            break;
    }
    return attack;
}

int main()
{

    char x;
    vector<vector<char>> board(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }
    cout << numRookCaptures(board) << endl;
    return 0;
}