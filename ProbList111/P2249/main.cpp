#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, x;
    scanf("%d%d", &n, &q);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &x);
        int ans = lower_bound(a, a + n, x) - a;
        if (x != a[ans]) printf("-1 ");
        else printf("%d ", ans + 1);
    }
    
    return 0;
}