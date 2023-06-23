#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node
{
    ll l, r;
};

bool cmp(node n1, node n2)
{
    return n1.l * n1.r < n2.l * n2.r;
}

int main()
{
    int n;
    scanf("%lld", &n);
    node arr[n + 1];
    for (int i = 0; i < n + 1; i++) scanf("%lld%lld", &arr[i].l, &arr[i].r);
    sort(arr + 1, arr + n + 1, cmp);
    ll ans = 0, sum = arr[0].l;
    for (int i = 1; i <= n; i++)
    {
        sum *= arr[i].l;
        ans = max(ans, sum / arr[i].r);
    }
    printf("%lld", ans);
    
    return 0;
}