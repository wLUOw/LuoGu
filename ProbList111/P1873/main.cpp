#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m, ma = 0;
    scanf("%lld%lld", &n, &m);
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        ma = max(ma, arr[i]);
    }
    ll le = 0, ri = ma, sum;
    while(le <=  ri)
    {
        ll mid=(le + ri)>>1;
        sum = 0; 
        for (int i = 0; i < n; i++) 
			if (arr[i] > mid) 
				sum += arr[i] - mid; 
        if (sum < m) 
			ri = mid - 1; 
		else
			le = mid + 1; 
    }
    printf("%lld", le - 1);

    return 0;
}