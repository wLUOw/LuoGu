#include<bits/stdc++.h>
using namespace std;

int n, h;
long long ans;
stack<int> st;

int main() 
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &h);
		while (!st.empty() && st.top() <= h) st.pop();
		ans += st.size();
		st.push(h);
	}
	printf("%lld", ans);

	return 0;
}