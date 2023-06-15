#include<bits/stdc++.h>
using namespace std;

int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int main()
{
    int n;
    cin >> n;
    int arr[n+1][n+1] = {0};
    // for (size_t i = 0; i < n + 1; i++)
    // {
    //     for (size_t j = 0; j < n+1; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    int d = 0;
    int x = 1, y = 1;
    for (int i = 1; i <= n*n; i++)
    {
        //cout << "i = " << i << "  x,y " << x << " " << y << endl;
        arr[x][y] = i;
        int x1 = x + dir[d][0], y1 = y + dir[d][1];
        if (x1 < 1 || x1 > n || y1 < 1 || y1 > n || arr[x1][y1] != 0)
        {
            d = (d + 1)%4;
        }
        x += dir[d][0];
        y += dir[d][1];
    }
    for (size_t i = 1; i < n+1; i++)
    {
        for (size_t j = 1; j < n+1; j++)
        {
            cout << (arr[i][j] < 10 ? "  " : " ") << arr[i][j];
        }
        cout << endl;
    }

    return 0;
    
}