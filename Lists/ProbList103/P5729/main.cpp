#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w, x, h, q, cnt = 0;
    cin >> w >> x >> h >> q;
    bool a[w+1][x+1][h+1] = {{{0}}};
    for (int i = 0; i < q; i++)
    {
        int w1, w2, x1, x2, h1, h2;
        cin >> w1 >> x1 >> h1 >> w2 >> x2 >> h2;
        for (int j = w1; j <= w2; j++)
        {
            for (int k = x1; k <= x2; k++)
            {
                for (int l = h1; l <= h2; l++)
                {
                    a[j][k][l] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                if (a[i][j][k] == 0)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;

}