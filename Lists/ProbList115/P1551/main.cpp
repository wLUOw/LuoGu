#include<bits/stdc++.h>
using namespace std;

int father[5001], n, m, p, a, b, u, v;

int find(int x)
{
    return x == father[x] ? x : father[x] = find(father[x]);
}

int main()
{
    for (int i = 0; i <= 5000; i++) father[i] = i;
    scanf("%d%d%d", &n, &m, &p);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &a, &b);
        u=find(a);
        v=find(b);
        if(u != v) father[u] = v;
    }
    for(int i = 1; i <= p; i++)
    {
        scanf("%d%d", &a, &b);
        u = find(a);
        v = find(b);
        if(u != v) printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}