#include<bits/stdc++.h>
#define ll long long
using namespace std;

inline int read() {
	int x = 0, f = 1;
	char ch = getchar();
	while (!isdigit(ch)) {if (ch=='-') f = -1; ch = getchar();}
	while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
	return x * f;
}

const int MAXN = 500010;

int deg[MAXN], f[MAXN], a[MAXN];  // deg 入度   f 答案   a 时间
vector<int> edge[MAXN];
queue<int> q;

int main() 
{
	int n = read();
	for (int i = 1; i <= n; i++) {
		int x = read();
		a[i] = read();
		while (int y = read()) {
			if (!y) break;
			edge[y].push_back(x);
            deg[x]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (deg[i] == 0) {
			q.push(i);
			f[i] = a[i];
		}
	}
	while (!q.empty()) {
		int rhs = q.front();
		q.pop();
		for (int i = 0; i < edge[rhs].size(); i++) {
			int u = edge[rhs][i];
			deg[u]--;
			if (deg[u] == 0) q.push(u);
			f[u] = max(f[u], f[rhs] + a[u]);
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) ans = max(ans, f[i]);
	printf("%d\n", ans);

	return 0;
}