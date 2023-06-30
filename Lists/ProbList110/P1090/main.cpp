#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    ll ans = 0;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        ll num;
        scanf("%lld", &num);
        pq.push(num);
    }
    for (int i = 0; i < n - 1; i++)
    {
        ll x = pq.top();
        pq.pop();
        ll y = pq.top();
        pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    printf("%lld", ans);
    
    return 0;
}