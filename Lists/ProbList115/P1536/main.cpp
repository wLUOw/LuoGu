#include <bits/stdc++.h>
using namespace std;

int fa[1000001], n, m, x, y;

int find(int x)
{
    if (x != fa[x]) fa[x] = find(fa[x]);
    return fa[x];
}

void unity(int x, int y)
{
    int r1 = find(x);
    int r2 = find(y);
    fa[r1] = r2;
}

int main()
{
	while(true)
	{
		int ans = 0;
		scanf("%d", &n);
		if (n == 0) return 0;
		scanf("%d", &m);
	    for (int i = 1; i <= n; i++) fa[i] = i;
	    for (int i = 1; i <= m; i++)
	    {
	        scanf("%d %d", &x, &y);
	        unity(x, y); 
	    }
	    for (int i = 1; i <= n; i++) if (find(i) == i) ans++;
		printf("%d\n", ans - 1);
	}

    return 0;
}