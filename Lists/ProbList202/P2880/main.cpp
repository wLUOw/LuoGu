#include<bits/stdc++.h>
using namespace std;

int st_max[180010][18], st_min[180010][18], n, m;

int query(int l, int r)
{
    int k = log2(r - l + 1); 
    return max(st_max[l][k], st_max[r - (1 << k) + 1][k]) - min(st_min[l][k], st_min[r - (1 << k) + 1][k]);
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &st_max[i][0]), st_min[i][0] = st_max[i][0];
    for (int j = 1; j <= 18; j++)
        for (int i = 1; i + (1 << j) - 1 <= n; i++) {
            st_max[i][j] = max(st_max[i][j - 1], st_max[i + (1 << (j - 1))][j - 1]); 
            st_min[i][j] = min(st_min[i][j - 1], st_min[i + (1 << (j - 1))][j - 1]); 
        }
    for (int i = 1; i <= m; i++)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", query(l, r));
    }

    return 0;
}