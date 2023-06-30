#include<bits/stdc++.h>
using namespace std;

bool isRunNian(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int main()
{
    int x, y, cnt = 0;
    cin >> x >> y;
    int ans[2000];
    for (int i = x; i <= y; i++)
    {
        if (isRunNian(i))
        {
            ans[cnt++] = i;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}