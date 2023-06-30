#include<bits/stdc++.h>
using namespace std;

int a[2000010], n, m, q;

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &q);
        printf("%d\n", a[q]);
    }

    return 0;
}