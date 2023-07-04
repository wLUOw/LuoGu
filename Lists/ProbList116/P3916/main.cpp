#include<bits/stdc++.h>
using namespace std;

int n, m, A[100010];
vector<int> g[100010];

void dfs(int x, int d) {
	if (A[x]) return;
	A[x] = d;
	for (int i = 0; i < g[x].size(); i++) dfs(g[x][i], d);
}

int main() 
{
	int u, v;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d%d", &u, &v);
		g[v].push_back(u); 
	}
	for (int i = n; i; i--) dfs(i, i); 
	for (int i = 1; i <= n; i++) printf("%d ", A[i]);

	return 0;
}