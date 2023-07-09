#include<bits/stdc++.h>
using namespace std;

int n, ans;
long long sum;
priority_queue<long long> q;

struct building
{
	long long s, t;
	friend bool operator < (const building&a,const building&b)
	{
		return a.t < b.t;
	}
} e[150010];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%lld%lld", &e[i].s, &e[i].t);
	sort(e + 1, e + 1 + n);
	for (int i = 1; i <= n; i++) {
		sum += e[i].s;
		ans++;
		q.push(e[i].s);
		if (sum > e[i].t) sum -= q.top(), q.pop(), ans--;
	}
	printf("%d\n", ans);

	return 0;
}