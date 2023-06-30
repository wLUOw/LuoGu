#include<bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int le = 0, ri = 1e8 + 1, mid;
    while (le + 1 < ri)
    {
        mid = (le + ri) >> 1;
        long long ans = 0;
	    for (int i = 0; i < n; i++) 
		    ans += a[i] / mid;
        if (ans >= k) le = mid;
        else ri = mid;
    }
    printf("%d", le);
    
    return 0;

}