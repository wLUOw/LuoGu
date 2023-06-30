#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[25][25][25];

ll f(ll a, ll b, ll c);

int main()
{
    ll a, b, c;
    while (scanf("%lld%lld%lld", &a, &b, &c))
    {
        if (a == -1 && b == -1 && c == -1) return 0;
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, f(a, b, c));
    }
}

ll f(ll a, ll b, ll c)
{
    if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return f(20, 20, 20);
    if (dp[a][b][c] != 0) return dp[a][b][c];
    else if (a < b && b < c) dp[a][b][c] = f(a, b, c - 1) + f(a, b - 1, c - 1) - f(a, b - 1, c);
    else dp[a][b][c] = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) - f(a - 1, b - 1, c - 1);
    return dp[a][b][c];
}