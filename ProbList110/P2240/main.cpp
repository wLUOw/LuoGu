#include<bits/stdc++.h>
using namespace std;

struct node
{
    int m;
    int v;
    double x;
};

bool cmp(node n1, node n2)
{
    return n1.x > n2.x;
}

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    node a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i].m, &a[i].v);
        a[i].x = 1.0*a[i].v / a[i].m;
    }
    sort(a, a+n, cmp);
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (t >= a[i].m)
        {
            t -= a[i].m;
            ans += a[i].v;
        }
        else
        {
            ans += t * a[i].x;
            printf("%.2lf", ans);
            return 0;
        }
    }
    printf("%.2lf", ans);

    return 0;
}
