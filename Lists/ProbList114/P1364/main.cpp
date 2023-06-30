#include <bits/stdc++.h>
using namespace std;

inline int read()
{
	int s = 0, w = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') 
    {
        if(ch == '-') w = -1;
        ch = getchar(); 
    }
	while (ch >= '0' && ch <= '9') 
    {
        s = s * 10 + ch - '0';
        ch = getchar(); 
    }
	return s * w;
}

const int MAXN = 10010;

struct Edge
{
	int next, to;
} e[MAXN << 1];

int head[MAXN], num, w[MAXN], n, siz[MAXN];
long long ans = INT64_MAX, f[MAXN];

inline void add(int from, int to){
	e[++num].to = to;
	e[num].next = head[from];
	head[from] = num;
}

void dfs(int u, int fa, int dep) //预处理f[1]和size
{
    siz[u] = w[u];
	for(int i = head[u]; i; i = e[i].next){
	    if(e[i].to != fa)
	        dfs(e[i].to, u, dep + 1), siz[u] += siz[e[i].to];
	}
	f[1] += w[u] * dep;
}

void dp(int u, int fa) //转移
{  
    for(int i = head[u]; i; i = e[i].next)
        if(e[i].to != fa)
            f[e[i].to] = f[u] + siz[1] - siz[e[i].to] * 2, dp(e[i].to, u);
    ans = min(ans, f[u]);
}

int a, b;

int main()
{
    n = read();
    for (int i = 1; i <= n; i++)
    {
       w[i] = read();
       a = read();
       b = read();
       if (a) add(i, a), add(a, i);
       if (b) add(i, b), add(b, i);
    }
    dfs(1, 0, 0);
    dp(1, 0);
    printf("%lld\n", ans);

    return 0;
}
