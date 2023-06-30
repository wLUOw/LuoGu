#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll res1 = 0;
    ll res2 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            res1 += min(i, j);
            res2 += i * j;
        }
    }
    cout << res1 << " " << res2 - res1;
    
    return 0;
}