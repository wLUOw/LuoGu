#include<bits/stdc++.h>
using namespace std;

int n, m, x, y;
const int dx[8]={-1, -2, -2, -1, 1, 2, 2, 1};
const int dy[8]={2, 1, -1, -2, 2, 1, -1, -2};
queue<pair<int,int>> q;
int ans[500][500];
bool vis[500][500];

int main() {

    cin >> n >> m >> x >> y;
    memset(ans, -1, sizeof(ans));
    memset(vis, false, sizeof(vis));

    ans[x][y] = 0;
    vis[x][y] = true;
    q.push(make_pair(x,y));

    while(!q.empty())
	{
        int xx = q.front().first, yy = q.front().second;
        q.pop();

        for(int i=0;i<8;i++)
		{
			int u = xx + dx[i], v = yy + dy[i];
			if (u < 1 || u > n || v < 1 || v > m || vis[u][v]) continue;
		    vis[u][v] = true;
            ans[u][v] = ans[xx][yy]+1;
            q.push(make_pair(u,v));
		}
    }

    for (int i = 1; i <= n; i++)
	{
        for (int j = 1; j <= m; j++) printf("%-5d",ans[i][j]);
        printf("\n");
    }

    return 0;
}