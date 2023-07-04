#include<bits/stdc++.h>
using namespace std;

struct edge {
	int u, v;  // 起点、终点
    //int u, v, w;  // 起点、终点、权值
}; 

int g[1010][1010] = {0}, n, m;
vector<int> e[100001];
vector<edge> s;

bool cmp(edge x, edge y) {
	if (x.v == y.v) return x.u < y.u;
	else return x.v < y.v;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
        g[x][y] = 1;
        g[y][x] = 1;
		s.push_back((edge){x, y});
        s.push_back((edge){y, x}); 
	}
    sort(s.begin(), s.end(), cmp);
	for (int i = 0; i < s.size(); i++) e[s[i].u].push_back(i);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", e[i].size());
        for (int j = 0; j < e[i].size(); j++) {
            printf("%d ", s[e[i][j]].v);
        }
        printf("\n");
    }
}