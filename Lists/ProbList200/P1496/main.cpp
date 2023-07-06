#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll a[20010], b[20010], l = 0, n;  // a数组存储起点，b数组存储终点，l表示最终长度

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d%d", &a[i], &b[i]);
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++)
    {
        l += b[i] - a[i];
        if (i < n)
            if (b[i] > a[i + 1])
                l -= b[i] - a[i+1];
    }
    printf("%lld", l);
    
    return 0;
}