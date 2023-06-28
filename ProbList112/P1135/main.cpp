#include<bits/stdc++.h>
using namespace std;

int n, a, b, to[205];
bool vis[205];
queue<pair<int,int>> q;

int main()
{
	scanf("%d%d%d", &n, &a, &b);
	for (int i = 1; i <= n; i++) scanf("%d", &to[i]);
	q.push(make_pair(a,0));
    int id, step;
	while(!q.empty())
	{
		id = q.front().first;
        step = q.front().second;
        q.pop();

		if (id == b) break;
		if (id + to[id] <= n && !vis[id + to[id]])
		{
			q.push(make_pair(id + to[id], step + 1));
			vis[id + to[id]] = true;
		}
		if (id - to[id] >= 1 && !vis[id - to[id]])
		{
			q.push(make_pair(id - to[id], step + 1));
			vis[id - to[id]] = true;
		}
	}
	if (id == b) printf("%d", step);
	else printf("-1");

	return 0;
}
