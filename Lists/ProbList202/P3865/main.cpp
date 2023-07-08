#include<bits/stdc++.h>
using namespace std;

inline int read()
{
    char c = getchar();
    int x = 0, f = 1;
    while (c < '0' || c > '9') { if (c == '-') f = -1; c = getchar(); }
    while (c >= '0' && c <= '9') { x = x * 10 + c - '0'; c = getchar(); }
    return x * f;
}

int st[1000010][21], n, m;

int query(int l, int r)
{
    int k = log2(r - l + 1); 
    return max(st[l][k], st[r - (1 << k) + 1][k]);
}

int main()
{
    n = read(), m = read();
    for (int i = 1; i <= n; i++) st[i][0] = read();
    for (int j = 1; j <= 21; j++)
        for (int i = 1; i + (1 << j) - 1 <= n; i++) 
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]); 
    for (int i = 1; i <= m; i++)
    {
        int l = read(), r = read();
        printf("%d\n", query(l, r));
    }

    return 0;
}