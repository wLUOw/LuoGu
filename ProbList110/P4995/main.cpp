#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    long long ans = 0;
    int j = 0, last = 0;
    bool b = 0;
	for (int i = 0; i < n; i++)
	{
		j = n - j + b;
		b = !b;
		ans += (a[j] - last) * (a[j] - last);
		last = a[j];
	}
	printf("%lld", ans);
    
    return 0;
}