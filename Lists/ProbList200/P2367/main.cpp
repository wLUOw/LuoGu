#include<bits/stdc++.h>
using namespace std;

int a[5000010], d[5000010], n, p, ans = INT32_MAX;

int main()
{
    scanf("%d%d", &n, &p);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) d[i]=a[i]-a[i-1];
	for (int i = 0; i < p; i++) {
		int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
		d[x] += z;
		d[y + 1] -= z;
	}
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i - 1] + d[i];
		ans = min(ans, a[i]);
	}
	printf("%d", ans);

    return 0;
}