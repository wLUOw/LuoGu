#include<bits/stdc++.h>
using namespace std;

bool a[10010] = {0};
int main()
{
    int l, m, cnt = 0;
    cin >> l >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        for (int j = 0; j <= v - u; j++)
        {
            a[u+j] = 1;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        cnt += !a[i];
    }
    cout << cnt;

    return 0;
    
}
