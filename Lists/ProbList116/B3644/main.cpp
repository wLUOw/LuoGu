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

int deg[MAXN];  // 入度
vector<int> g[MAXN];
queue<int> q;
vector<int> ans;

int main() 
{
	int n = read();
	for (int i = 1; i <= n; i++) {
		while (int y = read()) {
			if (!y) break;
			g[i].push_back(y);
            deg[y]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (deg[i] == 0) {
			q.push(i);
            ans.push_back(i);
		}
	}
	while (!q.empty()) {
		int rhs = q.front();
		q.pop();
		for (int i = 0; i < g[rhs].size(); i++) {
			int u = g[rhs][i];
			deg[u]--;
			if (deg[u] == 0) {
                q.push(u);
                ans.push_back(u);
            } 
		}
	}
    for (int i = 0; i < ans.size(); i++) printf("%d ", ans[i]);

	return 0;
}