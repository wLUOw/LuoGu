#include<bits/stdc++.h>
using namespace std;

int n, k;
struct node {
    int v, id;
} a[1000010];
deque<node> q;

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i].v);
        a[i].id = i;
    }
    for (int i = 1; i <= n; i++) {
        while (!q.empty() && q.back().v <= a[i].v) q.pop_back();
        q.push_back(a[i]);
        if (q.front().id == i - k) q.pop_front();
        if (i >= k) printf("%d\n", q.front().v);
    }

    return 0;
}