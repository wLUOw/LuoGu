#include<bits/stdc++.h>
using namespace std;

int n, m, l, r, arr[100050], pre[100050] = {0};

void prefixSum() 
{
    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + arr[i];
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
    prefixSum();
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &l, &r);
        printf("%d\n", pre[r] - pre[l - 1]);
    }

    return 0;
}